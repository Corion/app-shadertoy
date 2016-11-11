package App::ShaderToy::FileWatcher;
use threads;
use Thread::Queue;
use Filesys::Notify::Simple;
use File::Basename 'dirname';

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

App::ShaderToy::FileWatcher - watch files for changes

=cut

# Launch our watcher thread for updates to the shader program:
use vars qw($reload $watcher %watched_files);

$reload = Thread::Queue->new();

sub watch_files(@files) {
    my @dirs = map {dirname($_)} @files;
    my %removed_files = %watched_files;
    delete @removed_files{ @files };
    my $other_files = grep { ! $watched_files{ $_ }} @files;
    $other_files ||= keys %removed_files;
    if( $other_files and $watcher ) {
        # We will accumulate dead threads here, because Filesys::Watcher::Simple
        # never returns and we don't have a way to stop a thread hard
        $watcher->kill('KILL')->detach if $watcher;
    };
    @watched_files{ @files } = (1) x @files;

    #status("Watching directories @dirs",1);
    $watcher = threads->create(sub(@dirs) {
        $SIG{'KILL'} = sub { threads->exit(); };
        while (1) {
            my $fs = Filesys::Notify::Simple->new(\@dirs)->wait(sub(@events) {
                my %affected;
                for my $event (@events) {
                    $affected{ $event->{path} } = 1;
                };
                #status("Files changed: $_",1)
                #    for sort keys %affected;
                $reload->enqueue([sort keys %affected]);
            });
        };
        warn "Should never get here";
    }, @dirs);
};

sub files_changed() {
    my %changed;
    while (defined(my $item = $reload->dequeue_nb())) {
        undef @changed{ @$item };
    };
    return
    grep { $watched_files{ $_ } }
    sort keys %changed;
}

1;