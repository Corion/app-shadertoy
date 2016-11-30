package Prima::GLWindow;
use strict;
use warnings;
use Prima;
use Prima::Classes;
use OpenGL;
use Prima::OpenGL;

=head1 NAME

Prima::GLWindow - widgetless OpenGL window

=head1 SYNOPSIS

=cut

use vars qw(@ISA);
@ISA = qw(Prima::Window);

sub profile_default
{
	my $def = $_[ 0]-> SUPER::profile_default;
	my %prf = (
		gl_config => {},
	);
	@$def{keys %prf} = values %prf;
	return $def;
}

sub profile_check_in
{
	my ( $self, $p, $default) = @_;
	$self-> SUPER::profile_check_in( $p, $default);
	%{ $p-> {gl_config} } = (%{ $default-> {gl_config} }, %{ $p-> {gl_config} })
		if $p-> {gl_config};
}

sub init
{
	my ( $self, %profile) = @_;
	$self-> {gl_config} = {};
	%profile = $self-> SUPER::init( %profile);	
    warn $self->get_handle;
    $self->backColor(0);
	$self-> gl_config($profile{gl_config});
}

sub notify
{
	my ( $self, $command, @params ) = @_;
		
	return $self-> SUPER::notify( $command, @params )
		unless $command eq 'Paint';

	unless ( Prima::OpenGL::context_push()) {
		warn Prima::OpenGL::last_error();
		return;
	}
	$self-> gl_select;
	my $ret = $self-> SUPER::notify( $command, @params );
	$self-> gl_flush;
	Prima::OpenGL::context_pop();

	return $ret;
}

sub gl_config
{
	return $_[0]-> {gl_config} unless $#_;
	my ( $self, $config ) = @_;

	$self-> gl_destroy;
	$self-> {gl_config}  = $config;
	$self-> gl_create( %$config );
}

sub on_size
{
	my ( $self, $ox, $oy, $x, $y) = @_;
	$self-> gl_select;
	glViewport(0,0,$x,$y);	
}

sub on_destroy { shift-> gl_destroy }

sub set
{
	my ( $self, %set ) = @_;
	$self-> gl_destroy if exists $set{owner};
	$self-> SUPER::set(%set);
	$self-> gl_create(%{$self->{gl_config}}) if exists $set{owner};
	return;
}

1;

__END__

=pod

=head1 NAME

Prima::GLWidget - general purpose GL drawing area / widget

=head1 SYNOPSIS

	use OpenGL;
	use Prima qw(Application GLWidget);

	my $window = Prima::MainWindow-> create;
	$window-> insert( GLWidget => 
		pack    => { expand => 1, fill => 'both'},
		onPaint => sub {
			my $self = shift;
			glClearColor(0,0,1,1);
			glClear(GL_COLOR_BUFFER_BIT);
			glOrtho(-1,1,-1,1,-1,1);
			
			glColor3f(1,0,0);
			glBegin(GL_POLYGON);
				glVertex2f(-0.5,-0.5);
				glVertex2f(-0.5, 0.5);
				glVertex2f( 0.5, 0.5);
				glVertex2f( 0.5,-0.5);
			glEnd();
			glFlush();
		}
	);

	run Prima;

=head1 DESCRIPTION

GLWidget class takes care of all internal mechanics needed for interactions between OpenGL and Prima.
The widget is operated as a normal C<Prima::Widget> class, except that all drawing can be done also
using C<gl> OpenGL functions.

=head1 API

=head2 Properties

=over

=item gl_config %HASHREF

C<gl_config> contains requests to GL visual selector. See description of keys
in L<Prima::OpenGL/Selection of a GL visual>.

=back

=head2 Events

=over

=item on_size

By default, sets C<glViewport> to the new widget size. Override C<on_size> if that is not desired.

=back

=head1 AUTHOR

Dmitry Karasik, E<lt>dmitry@karasik.eu.orgE<gt>.

=head1 SEE ALSO

L<Prima>, L<OpenGL>

=cut
