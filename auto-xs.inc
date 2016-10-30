SV *
glActiveProgramEXT(program);
     GLuint program;
CODE:
    if(! __glewActiveProgramEXT) {
        croak("glActiveProgramEXT not available on this machine");
    };
    glActiveProgramEXT(program);

SV *
glActiveShaderProgram(pipeline, program);
     GLuint pipeline;
     GLuint program;
CODE:
    if(! __glewActiveShaderProgram) {
        croak("glActiveShaderProgram not available on this machine");
    };
    glActiveShaderProgram(pipeline, program);

SV *
glActiveStencilFaceEXT(face);
     GLenum face;
CODE:
    if(! __glewActiveStencilFaceEXT) {
        croak("glActiveStencilFaceEXT not available on this machine");
    };
    glActiveStencilFaceEXT(face);

SV *
glActiveTexture(texture);
     GLenum texture;
CODE:
    if(! __glewActiveTexture) {
        croak("glActiveTexture not available on this machine");
    };
    glActiveTexture(texture);

SV *
glActiveTextureARB(texture);
     GLenum texture;
CODE:
    if(! __glewActiveTextureARB) {
        croak("glActiveTextureARB not available on this machine");
    };
    glActiveTextureARB(texture);

SV *
glActiveVaryingNV(program, name);
     GLuint program;
     const GLchar *name;
CODE:
    if(! __glewActiveVaryingNV) {
        croak("glActiveVaryingNV not available on this machine");
    };
    glActiveVaryingNV(program, name);

SV *
glAddSwapHintRectWIN(x, y, width, height);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewAddSwapHintRectWIN) {
        croak("glAddSwapHintRectWIN not available on this machine");
    };
    glAddSwapHintRectWIN(x, y, width, height);

SV *
glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
CODE:
    if(! __glewAlphaFragmentOp1ATI) {
        croak("glAlphaFragmentOp1ATI not available on this machine");
    };
    glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);

SV *
glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
     GLuint arg2;
     GLuint arg2Rep;
     GLuint arg2Mod;
CODE:
    if(! __glewAlphaFragmentOp2ATI) {
        croak("glAlphaFragmentOp2ATI not available on this machine");
    };
    glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);

SV *
glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
     GLuint arg2;
     GLuint arg2Rep;
     GLuint arg2Mod;
     GLuint arg3;
     GLuint arg3Rep;
     GLuint arg3Mod;
CODE:
    if(! __glewAlphaFragmentOp3ATI) {
        croak("glAlphaFragmentOp3ATI not available on this machine");
    };
    glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);

SV *
glAlphaFuncx(func, ref);
     GLenum func;
     GLclampx ref;
CODE:
    if(! __glewAlphaFuncx) {
        croak("glAlphaFuncx not available on this machine");
    };
    glAlphaFuncx(func, ref);

SV *
glApplyTextureEXT(mode);
     GLenum mode;
CODE:
    if(! __glewApplyTextureEXT) {
        croak("glApplyTextureEXT not available on this machine");
    };
    glApplyTextureEXT(mode);

GLboolean
glAreProgramsResidentNV(n, ids, residences);
     GLsizei n;
     const GLuint* ids;
     GLboolean *residences;
CODE:
    if(! __glewAreProgramsResidentNV) {
        croak("glAreProgramsResidentNV not available on this machine");
    };
    RETVAL = glAreProgramsResidentNV(n, ids, residences);
OUTPUT:
    RETVAL

GLboolean
glAreTexturesResidentEXT(n, textures, residences);
     GLsizei n;
     const GLuint* textures;
     GLboolean* residences;
CODE:
    if(! __glewAreTexturesResidentEXT) {
        croak("glAreTexturesResidentEXT not available on this machine");
    };
    RETVAL = glAreTexturesResidentEXT(n, textures, residences);
OUTPUT:
    RETVAL

SV *
glArrayElementEXT(i);
     GLint i;
CODE:
    if(! __glewArrayElementEXT) {
        croak("glArrayElementEXT not available on this machine");
    };
    glArrayElementEXT(i);

SV *
glArrayObjectATI(array, size, type, stride, buffer, offset);
     GLenum array;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLuint buffer;
     GLuint offset;
CODE:
    if(! __glewArrayObjectATI) {
        croak("glArrayObjectATI not available on this machine");
    };
    glArrayObjectATI(array, size, type, stride, buffer, offset);

SV *
glAsyncMarkerSGIX(marker);
     GLuint marker;
CODE:
    if(! __glewAsyncMarkerSGIX) {
        croak("glAsyncMarkerSGIX not available on this machine");
    };
    glAsyncMarkerSGIX(marker);

SV *
glAttachObjectARB(containerObj, obj);
     GLhandleARB containerObj;
     GLhandleARB obj;
CODE:
    if(! __glewAttachObjectARB) {
        croak("glAttachObjectARB not available on this machine");
    };
    glAttachObjectARB(containerObj, obj);

SV *
glAttachShader(program, shader);
     GLuint program;
     GLuint shader;
CODE:
    if(! __glewAttachShader) {
        croak("glAttachShader not available on this machine");
    };
    glAttachShader(program, shader);

SV *
glBeginConditionalRender(id, mode);
     GLuint id;
     GLenum mode;
CODE:
    if(! __glewBeginConditionalRender) {
        croak("glBeginConditionalRender not available on this machine");
    };
    glBeginConditionalRender(id, mode);

SV *
glBeginConditionalRenderNV(id, mode);
     GLuint id;
     GLenum mode;
CODE:
    if(! __glewBeginConditionalRenderNV) {
        croak("glBeginConditionalRenderNV not available on this machine");
    };
    glBeginConditionalRenderNV(id, mode);

SV *
glBeginConditionalRenderNVX(id);
     GLuint id;
CODE:
    if(! __glewBeginConditionalRenderNVX) {
        croak("glBeginConditionalRenderNVX not available on this machine");
    };
    glBeginConditionalRenderNVX(id);

SV *
glBeginFragmentShaderATI();
CODE:
    if(! __glewBeginFragmentShaderATI) {
        croak("glBeginFragmentShaderATI not available on this machine");
    };
    glBeginFragmentShaderATI();

SV *
glBeginOcclusionQueryNV(id);
     GLuint id;
CODE:
    if(! __glewBeginOcclusionQueryNV) {
        croak("glBeginOcclusionQueryNV not available on this machine");
    };
    glBeginOcclusionQueryNV(id);

SV *
glBeginPerfMonitorAMD(monitor);
     GLuint monitor;
CODE:
    if(! __glewBeginPerfMonitorAMD) {
        croak("glBeginPerfMonitorAMD not available on this machine");
    };
    glBeginPerfMonitorAMD(monitor);

SV *
glBeginPerfQueryINTEL(queryHandle);
     GLuint queryHandle;
CODE:
    if(! __glewBeginPerfQueryINTEL) {
        croak("glBeginPerfQueryINTEL not available on this machine");
    };
    glBeginPerfQueryINTEL(queryHandle);

SV *
glBeginQuery(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBeginQuery) {
        croak("glBeginQuery not available on this machine");
    };
    glBeginQuery(target, id);

SV *
glBeginQueryANGLE(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBeginQueryANGLE) {
        croak("glBeginQueryANGLE not available on this machine");
    };
    glBeginQueryANGLE(target, id);

SV *
glBeginQueryARB(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBeginQueryARB) {
        croak("glBeginQueryARB not available on this machine");
    };
    glBeginQueryARB(target, id);

SV *
glBeginQueryIndexed(target, index, id);
     GLenum target;
     GLuint index;
     GLuint id;
CODE:
    if(! __glewBeginQueryIndexed) {
        croak("glBeginQueryIndexed not available on this machine");
    };
    glBeginQueryIndexed(target, index, id);

SV *
glBeginSceneEXT();
CODE:
    if(! __glewBeginSceneEXT) {
        croak("glBeginSceneEXT not available on this machine");
    };
    glBeginSceneEXT();

SV *
glBeginTransformFeedback(primitiveMode);
     GLenum primitiveMode;
CODE:
    if(! __glewBeginTransformFeedback) {
        croak("glBeginTransformFeedback not available on this machine");
    };
    glBeginTransformFeedback(primitiveMode);

SV *
glBeginTransformFeedbackEXT(primitiveMode);
     GLenum primitiveMode;
CODE:
    if(! __glewBeginTransformFeedbackEXT) {
        croak("glBeginTransformFeedbackEXT not available on this machine");
    };
    glBeginTransformFeedbackEXT(primitiveMode);

SV *
glBeginTransformFeedbackNV(primitiveMode);
     GLenum primitiveMode;
CODE:
    if(! __glewBeginTransformFeedbackNV) {
        croak("glBeginTransformFeedbackNV not available on this machine");
    };
    glBeginTransformFeedbackNV(primitiveMode);

SV *
glBeginVertexShaderEXT();
CODE:
    if(! __glewBeginVertexShaderEXT) {
        croak("glBeginVertexShaderEXT not available on this machine");
    };
    glBeginVertexShaderEXT();

SV *
glBeginVideoCaptureNV(video_capture_slot);
     GLuint video_capture_slot;
CODE:
    if(! __glewBeginVideoCaptureNV) {
        croak("glBeginVideoCaptureNV not available on this machine");
    };
    glBeginVideoCaptureNV(video_capture_slot);

SV *
glBindAttribLocation(program, index, name);
     GLuint program;
     GLuint index;
     const GLchar* name;
CODE:
    if(! __glewBindAttribLocation) {
        croak("glBindAttribLocation not available on this machine");
    };
    glBindAttribLocation(program, index, name);

SV *
glBindAttribLocationARB(programObj, index, name);
     GLhandleARB programObj;
     GLuint index;
     const GLcharARB* name;
CODE:
    if(! __glewBindAttribLocationARB) {
        croak("glBindAttribLocationARB not available on this machine");
    };
    glBindAttribLocationARB(programObj, index, name);

SV *
glBindBuffer(target, buffer);
     GLenum target;
     GLuint buffer;
CODE:
    if(! __glewBindBuffer) {
        croak("glBindBuffer not available on this machine");
    };
    glBindBuffer(target, buffer);

SV *
glBindBufferARB(target, buffer);
     GLenum target;
     GLuint buffer;
CODE:
    if(! __glewBindBufferARB) {
        croak("glBindBufferARB not available on this machine");
    };
    glBindBufferARB(target, buffer);

SV *
glBindBufferBase(target, index, buffer);
     GLenum target;
     GLuint index;
     GLuint buffer;
CODE:
    if(! __glewBindBufferBase) {
        croak("glBindBufferBase not available on this machine");
    };
    glBindBufferBase(target, index, buffer);

SV *
glBindBufferBaseEXT(target, index, buffer);
     GLenum target;
     GLuint index;
     GLuint buffer;
CODE:
    if(! __glewBindBufferBaseEXT) {
        croak("glBindBufferBaseEXT not available on this machine");
    };
    glBindBufferBaseEXT(target, index, buffer);

SV *
glBindBufferBaseNV(target, index, buffer);
     GLenum target;
     GLuint index;
     GLuint buffer;
CODE:
    if(! __glewBindBufferBaseNV) {
        croak("glBindBufferBaseNV not available on this machine");
    };
    glBindBufferBaseNV(target, index, buffer);

SV *
glBindBufferOffsetEXT(target, index, buffer, offset);
     GLenum target;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
CODE:
    if(! __glewBindBufferOffsetEXT) {
        croak("glBindBufferOffsetEXT not available on this machine");
    };
    glBindBufferOffsetEXT(target, index, buffer, offset);

SV *
glBindBufferOffsetNV(target, index, buffer, offset);
     GLenum target;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
CODE:
    if(! __glewBindBufferOffsetNV) {
        croak("glBindBufferOffsetNV not available on this machine");
    };
    glBindBufferOffsetNV(target, index, buffer, offset);

SV *
glBindBufferRange(target, index, buffer, offset, size);
     GLenum target;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewBindBufferRange) {
        croak("glBindBufferRange not available on this machine");
    };
    glBindBufferRange(target, index, buffer, offset, size);

SV *
glBindBufferRangeEXT(target, index, buffer, offset, size);
     GLenum target;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewBindBufferRangeEXT) {
        croak("glBindBufferRangeEXT not available on this machine");
    };
    glBindBufferRangeEXT(target, index, buffer, offset, size);

SV *
glBindBufferRangeNV(target, index, buffer, offset, size);
     GLenum target;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewBindBufferRangeNV) {
        croak("glBindBufferRangeNV not available on this machine");
    };
    glBindBufferRangeNV(target, index, buffer, offset, size);

SV *
glBindBuffersBase(target, first, count, buffers);
     GLenum target;
     GLuint first;
     GLsizei count;
     const GLuint* buffers;
CODE:
    if(! __glewBindBuffersBase) {
        croak("glBindBuffersBase not available on this machine");
    };
    glBindBuffersBase(target, first, count, buffers);

SV *
glBindBuffersRange(target, first, count, buffers, offsets, sizes);
     GLenum target;
     GLuint first;
     GLsizei count;
     const GLuint* buffers;
     const GLintptr *offsets;
     const GLsizeiptr *sizes;
CODE:
    if(! __glewBindBuffersRange) {
        croak("glBindBuffersRange not available on this machine");
    };
    glBindBuffersRange(target, first, count, buffers, offsets, sizes);

SV *
glBindFragDataLocation(program, colorNumber, name);
     GLuint program;
     GLuint colorNumber;
     const GLchar* name;
CODE:
    if(! __glewBindFragDataLocation) {
        croak("glBindFragDataLocation not available on this machine");
    };
    glBindFragDataLocation(program, colorNumber, name);

SV *
glBindFragDataLocationEXT(program, color, name);
     GLuint program;
     GLuint color;
     const GLchar *name;
CODE:
    if(! __glewBindFragDataLocationEXT) {
        croak("glBindFragDataLocationEXT not available on this machine");
    };
    glBindFragDataLocationEXT(program, color, name);

SV *
glBindFragDataLocationIndexed(program, colorNumber, index, name);
     GLuint program;
     GLuint colorNumber;
     GLuint index;
     const GLchar * name;
CODE:
    if(! __glewBindFragDataLocationIndexed) {
        croak("glBindFragDataLocationIndexed not available on this machine");
    };
    glBindFragDataLocationIndexed(program, colorNumber, index, name);

SV *
glBindFragmentShaderATI(id);
     GLuint id;
CODE:
    if(! __glewBindFragmentShaderATI) {
        croak("glBindFragmentShaderATI not available on this machine");
    };
    glBindFragmentShaderATI(id);

SV *
glBindFramebuffer(target, framebuffer);
     GLenum target;
     GLuint framebuffer;
CODE:
    if(! __glewBindFramebuffer) {
        croak("glBindFramebuffer not available on this machine");
    };
    glBindFramebuffer(target, framebuffer);

SV *
glBindFramebufferEXT(target, framebuffer);
     GLenum target;
     GLuint framebuffer;
CODE:
    if(! __glewBindFramebufferEXT) {
        croak("glBindFramebufferEXT not available on this machine");
    };
    glBindFramebufferEXT(target, framebuffer);

SV *
glBindImageTexture(unit, texture, level, layered, layer, access, format);
     GLuint unit;
     GLuint texture;
     GLint level;
     GLboolean layered;
     GLint layer;
     GLenum access;
     GLenum format;
CODE:
    if(! __glewBindImageTexture) {
        croak("glBindImageTexture not available on this machine");
    };
    glBindImageTexture(unit, texture, level, layered, layer, access, format);

SV *
glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
     GLuint index;
     GLuint texture;
     GLint level;
     GLboolean layered;
     GLint layer;
     GLenum access;
     GLint format;
CODE:
    if(! __glewBindImageTextureEXT) {
        croak("glBindImageTextureEXT not available on this machine");
    };
    glBindImageTextureEXT(index, texture, level, layered, layer, access, format);

SV *
glBindImageTextures(first, count, textures);
     GLuint first;
     GLsizei count;
     const GLuint* textures;
CODE:
    if(! __glewBindImageTextures) {
        croak("glBindImageTextures not available on this machine");
    };
    glBindImageTextures(first, count, textures);

GLuint
glBindLightParameterEXT(light, value);
     GLenum light;
     GLenum value;
CODE:
    if(! __glewBindLightParameterEXT) {
        croak("glBindLightParameterEXT not available on this machine");
    };
    RETVAL = glBindLightParameterEXT(light, value);
OUTPUT:
    RETVAL

GLuint
glBindMaterialParameterEXT(face, value);
     GLenum face;
     GLenum value;
CODE:
    if(! __glewBindMaterialParameterEXT) {
        croak("glBindMaterialParameterEXT not available on this machine");
    };
    RETVAL = glBindMaterialParameterEXT(face, value);
OUTPUT:
    RETVAL

SV *
glBindMultiTextureEXT(texunit, target, texture);
     GLenum texunit;
     GLenum target;
     GLuint texture;
CODE:
    if(! __glewBindMultiTextureEXT) {
        croak("glBindMultiTextureEXT not available on this machine");
    };
    glBindMultiTextureEXT(texunit, target, texture);

GLuint
glBindParameterEXT(value);
     GLenum value;
CODE:
    if(! __glewBindParameterEXT) {
        croak("glBindParameterEXT not available on this machine");
    };
    RETVAL = glBindParameterEXT(value);
OUTPUT:
    RETVAL

SV *
glBindProgramARB(target, program);
     GLenum target;
     GLuint program;
CODE:
    if(! __glewBindProgramARB) {
        croak("glBindProgramARB not available on this machine");
    };
    glBindProgramARB(target, program);

SV *
glBindProgramNV(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBindProgramNV) {
        croak("glBindProgramNV not available on this machine");
    };
    glBindProgramNV(target, id);

SV *
glBindProgramPipeline(pipeline);
     GLuint pipeline;
CODE:
    if(! __glewBindProgramPipeline) {
        croak("glBindProgramPipeline not available on this machine");
    };
    glBindProgramPipeline(pipeline);

SV *
glBindRenderbuffer(target, renderbuffer);
     GLenum target;
     GLuint renderbuffer;
CODE:
    if(! __glewBindRenderbuffer) {
        croak("glBindRenderbuffer not available on this machine");
    };
    glBindRenderbuffer(target, renderbuffer);

SV *
glBindRenderbufferEXT(target, renderbuffer);
     GLenum target;
     GLuint renderbuffer;
CODE:
    if(! __glewBindRenderbufferEXT) {
        croak("glBindRenderbufferEXT not available on this machine");
    };
    glBindRenderbufferEXT(target, renderbuffer);

SV *
glBindSampler(unit, sampler);
     GLuint unit;
     GLuint sampler;
CODE:
    if(! __glewBindSampler) {
        croak("glBindSampler not available on this machine");
    };
    glBindSampler(unit, sampler);

SV *
glBindSamplers(first, count, samplers);
     GLuint first;
     GLsizei count;
     const GLuint* samplers;
CODE:
    if(! __glewBindSamplers) {
        croak("glBindSamplers not available on this machine");
    };
    glBindSamplers(first, count, samplers);

GLuint
glBindTexGenParameterEXT(unit, coord, value);
     GLenum unit;
     GLenum coord;
     GLenum value;
CODE:
    if(! __glewBindTexGenParameterEXT) {
        croak("glBindTexGenParameterEXT not available on this machine");
    };
    RETVAL = glBindTexGenParameterEXT(unit, coord, value);
OUTPUT:
    RETVAL

SV *
glBindTextureEXT(target, texture);
     GLenum target;
     GLuint texture;
CODE:
    if(! __glewBindTextureEXT) {
        croak("glBindTextureEXT not available on this machine");
    };
    glBindTextureEXT(target, texture);

SV *
glBindTextures(first, count, textures);
     GLuint first;
     GLsizei count;
     const GLuint* textures;
CODE:
    if(! __glewBindTextures) {
        croak("glBindTextures not available on this machine");
    };
    glBindTextures(first, count, textures);

SV *
glBindTextureUnit(unit, texture);
     GLuint unit;
     GLuint texture;
CODE:
    if(! __glewBindTextureUnit) {
        croak("glBindTextureUnit not available on this machine");
    };
    glBindTextureUnit(unit, texture);

GLuint
glBindTextureUnitParameterEXT(unit, value);
     GLenum unit;
     GLenum value;
CODE:
    if(! __glewBindTextureUnitParameterEXT) {
        croak("glBindTextureUnitParameterEXT not available on this machine");
    };
    RETVAL = glBindTextureUnitParameterEXT(unit, value);
OUTPUT:
    RETVAL

SV *
glBindTransformFeedback(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBindTransformFeedback) {
        croak("glBindTransformFeedback not available on this machine");
    };
    glBindTransformFeedback(target, id);

SV *
glBindTransformFeedbackNV(target, id);
     GLenum target;
     GLuint id;
CODE:
    if(! __glewBindTransformFeedbackNV) {
        croak("glBindTransformFeedbackNV not available on this machine");
    };
    glBindTransformFeedbackNV(target, id);

SV *
glBindVertexArray(array);
     GLuint array;
CODE:
    if(! __glewBindVertexArray) {
        croak("glBindVertexArray not available on this machine");
    };
    glBindVertexArray(array);

SV *
glBindVertexArrayAPPLE(array);
     GLuint array;
CODE:
    if(! __glewBindVertexArrayAPPLE) {
        croak("glBindVertexArrayAPPLE not available on this machine");
    };
    glBindVertexArrayAPPLE(array);

SV *
glBindVertexBuffer(bindingindex, buffer, offset, stride);
     GLuint bindingindex;
     GLuint buffer;
     GLintptr offset;
     GLsizei stride;
CODE:
    if(! __glewBindVertexBuffer) {
        croak("glBindVertexBuffer not available on this machine");
    };
    glBindVertexBuffer(bindingindex, buffer, offset, stride);

SV *
glBindVertexBuffers(first, count, buffers, offsets, strides);
     GLuint first;
     GLsizei count;
     const GLuint* buffers;
     const GLintptr *offsets;
     const GLsizei *strides;
CODE:
    if(! __glewBindVertexBuffers) {
        croak("glBindVertexBuffers not available on this machine");
    };
    glBindVertexBuffers(first, count, buffers, offsets, strides);

SV *
glBindVertexShaderEXT(id);
     GLuint id;
CODE:
    if(! __glewBindVertexShaderEXT) {
        croak("glBindVertexShaderEXT not available on this machine");
    };
    glBindVertexShaderEXT(id);

SV *
glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum frame_region;
     GLintptrARB offset;
CODE:
    if(! __glewBindVideoCaptureStreamBufferNV) {
        croak("glBindVideoCaptureStreamBufferNV not available on this machine");
    };
    glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);

SV *
glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum frame_region;
     GLenum target;
     GLuint texture;
CODE:
    if(! __glewBindVideoCaptureStreamTextureNV) {
        croak("glBindVideoCaptureStreamTextureNV not available on this machine");
    };
    glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);

SV *
glBinormalPointerEXT(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     void *pointer;
CODE:
    if(! __glewBinormalPointerEXT) {
        croak("glBinormalPointerEXT not available on this machine");
    };
    glBinormalPointerEXT(type, stride, pointer);

SV *
glBlendBarrierKHR();
CODE:
    if(! __glewBlendBarrierKHR) {
        croak("glBlendBarrierKHR not available on this machine");
    };
    glBlendBarrierKHR();

SV *
glBlendBarrierNV();
CODE:
    if(! __glewBlendBarrierNV) {
        croak("glBlendBarrierNV not available on this machine");
    };
    glBlendBarrierNV();

SV *
glBlendColor(red, green, blue, alpha);
     GLclampf red;
     GLclampf green;
     GLclampf blue;
     GLclampf alpha;
CODE:
    if(! __glewBlendColor) {
        croak("glBlendColor not available on this machine");
    };
    glBlendColor(red, green, blue, alpha);

SV *
glBlendColorEXT(red, green, blue, alpha);
     GLclampf red;
     GLclampf green;
     GLclampf blue;
     GLclampf alpha;
CODE:
    if(! __glewBlendColorEXT) {
        croak("glBlendColorEXT not available on this machine");
    };
    glBlendColorEXT(red, green, blue, alpha);

SV *
glBlendEquation(mode);
     GLenum mode;
CODE:
    if(! __glewBlendEquation) {
        croak("glBlendEquation not available on this machine");
    };
    glBlendEquation(mode);

SV *
glBlendEquationEXT(mode);
     GLenum mode;
CODE:
    if(! __glewBlendEquationEXT) {
        croak("glBlendEquationEXT not available on this machine");
    };
    glBlendEquationEXT(mode);

SV *
glBlendEquationi(buf, mode);
     GLuint buf;
     GLenum mode;
CODE:
    if(! __glewBlendEquationi) {
        croak("glBlendEquationi not available on this machine");
    };
    glBlendEquationi(buf, mode);

SV *
glBlendEquationiARB(buf, mode);
     GLuint buf;
     GLenum mode;
CODE:
    if(! __glewBlendEquationiARB) {
        croak("glBlendEquationiARB not available on this machine");
    };
    glBlendEquationiARB(buf, mode);

SV *
glBlendEquationIndexedAMD(buf, mode);
     GLuint buf;
     GLenum mode;
CODE:
    if(! __glewBlendEquationIndexedAMD) {
        croak("glBlendEquationIndexedAMD not available on this machine");
    };
    glBlendEquationIndexedAMD(buf, mode);

SV *
glBlendEquationSeparate(modeRGB, modeAlpha);
     GLenum modeRGB;
     GLenum modeAlpha;
CODE:
    if(! __glewBlendEquationSeparate) {
        croak("glBlendEquationSeparate not available on this machine");
    };
    glBlendEquationSeparate(modeRGB, modeAlpha);

SV *
glBlendEquationSeparateEXT(modeRGB, modeAlpha);
     GLenum modeRGB;
     GLenum modeAlpha;
CODE:
    if(! __glewBlendEquationSeparateEXT) {
        croak("glBlendEquationSeparateEXT not available on this machine");
    };
    glBlendEquationSeparateEXT(modeRGB, modeAlpha);

SV *
glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
     GLuint buf;
     GLenum modeRGB;
     GLenum modeAlpha;
CODE:
    if(! __glewBlendEquationSeparatei) {
        croak("glBlendEquationSeparatei not available on this machine");
    };
    glBlendEquationSeparatei(buf, modeRGB, modeAlpha);

SV *
glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
     GLuint buf;
     GLenum modeRGB;
     GLenum modeAlpha;
CODE:
    if(! __glewBlendEquationSeparateiARB) {
        croak("glBlendEquationSeparateiARB not available on this machine");
    };
    glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);

SV *
glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
     GLuint buf;
     GLenum modeRGB;
     GLenum modeAlpha;
CODE:
    if(! __glewBlendEquationSeparateIndexedAMD) {
        croak("glBlendEquationSeparateIndexedAMD not available on this machine");
    };
    glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);

SV *
glBlendFunci(buf, src, dst);
     GLuint buf;
     GLenum src;
     GLenum dst;
CODE:
    if(! __glewBlendFunci) {
        croak("glBlendFunci not available on this machine");
    };
    glBlendFunci(buf, src, dst);

SV *
glBlendFunciARB(buf, src, dst);
     GLuint buf;
     GLenum src;
     GLenum dst;
CODE:
    if(! __glewBlendFunciARB) {
        croak("glBlendFunciARB not available on this machine");
    };
    glBlendFunciARB(buf, src, dst);

SV *
glBlendFuncIndexedAMD(buf, src, dst);
     GLuint buf;
     GLenum src;
     GLenum dst;
CODE:
    if(! __glewBlendFuncIndexedAMD) {
        croak("glBlendFuncIndexedAMD not available on this machine");
    };
    glBlendFuncIndexedAMD(buf, src, dst);

SV *
glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
     GLenum sfactorRGB;
     GLenum dfactorRGB;
     GLenum sfactorAlpha;
     GLenum dfactorAlpha;
CODE:
    if(! __glewBlendFuncSeparate) {
        croak("glBlendFuncSeparate not available on this machine");
    };
    glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

SV *
glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
     GLenum sfactorRGB;
     GLenum dfactorRGB;
     GLenum sfactorAlpha;
     GLenum dfactorAlpha;
CODE:
    if(! __glewBlendFuncSeparateEXT) {
        croak("glBlendFuncSeparateEXT not available on this machine");
    };
    glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

SV *
glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
     GLuint buf;
     GLenum srcRGB;
     GLenum dstRGB;
     GLenum srcAlpha;
     GLenum dstAlpha;
CODE:
    if(! __glewBlendFuncSeparatei) {
        croak("glBlendFuncSeparatei not available on this machine");
    };
    glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

SV *
glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
     GLuint buf;
     GLenum srcRGB;
     GLenum dstRGB;
     GLenum srcAlpha;
     GLenum dstAlpha;
CODE:
    if(! __glewBlendFuncSeparateiARB) {
        croak("glBlendFuncSeparateiARB not available on this machine");
    };
    glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

SV *
glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
     GLuint buf;
     GLenum srcRGB;
     GLenum dstRGB;
     GLenum srcAlpha;
     GLenum dstAlpha;
CODE:
    if(! __glewBlendFuncSeparateIndexedAMD) {
        croak("glBlendFuncSeparateIndexedAMD not available on this machine");
    };
    glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

SV *
glBlendParameteriNV(pname, value);
     GLenum pname;
     GLint value;
CODE:
    if(! __glewBlendParameteriNV) {
        croak("glBlendParameteriNV not available on this machine");
    };
    glBlendParameteriNV(pname, value);

SV *
glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
     GLint srcX0;
     GLint srcY0;
     GLint srcX1;
     GLint srcY1;
     GLint dstX0;
     GLint dstY0;
     GLint dstX1;
     GLint dstY1;
     GLbitfield mask;
     GLenum filter;
CODE:
    if(! __glewBlitFramebuffer) {
        croak("glBlitFramebuffer not available on this machine");
    };
    glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

SV *
glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
     GLint srcX0;
     GLint srcY0;
     GLint srcX1;
     GLint srcY1;
     GLint dstX0;
     GLint dstY0;
     GLint dstX1;
     GLint dstY1;
     GLbitfield mask;
     GLenum filter;
CODE:
    if(! __glewBlitFramebufferANGLE) {
        croak("glBlitFramebufferANGLE not available on this machine");
    };
    glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

SV *
glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
     GLint srcX0;
     GLint srcY0;
     GLint srcX1;
     GLint srcY1;
     GLint dstX0;
     GLint dstY0;
     GLint dstX1;
     GLint dstY1;
     GLbitfield mask;
     GLenum filter;
CODE:
    if(! __glewBlitFramebufferEXT) {
        croak("glBlitFramebufferEXT not available on this machine");
    };
    glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

SV *
glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
     GLuint readFramebuffer;
     GLuint drawFramebuffer;
     GLint srcX0;
     GLint srcY0;
     GLint srcX1;
     GLint srcY1;
     GLint dstX0;
     GLint dstY0;
     GLint dstX1;
     GLint dstY1;
     GLbitfield mask;
     GLenum filter;
CODE:
    if(! __glewBlitNamedFramebuffer) {
        croak("glBlitNamedFramebuffer not available on this machine");
    };
    glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

SV *
glBufferAddressRangeNV(pname, index, address, length);
     GLenum pname;
     GLuint index;
     GLuint64EXT address;
     GLsizeiptr length;
CODE:
    if(! __glewBufferAddressRangeNV) {
        croak("glBufferAddressRangeNV not available on this machine");
    };
    glBufferAddressRangeNV(pname, index, address, length);

SV *
glBufferData(target, size, data, usage);
     GLenum target;
     GLsizeiptr size;
     const void* data;
     GLenum usage;
CODE:
    if(! __glewBufferData) {
        croak("glBufferData not available on this machine");
    };
    glBufferData(target, size, data, usage);

SV *
glBufferDataARB(target, size, data, usage);
     GLenum target;
     GLsizeiptrARB size;
     const void *data;
     GLenum usage;
CODE:
    if(! __glewBufferDataARB) {
        croak("glBufferDataARB not available on this machine");
    };
    glBufferDataARB(target, size, data, usage);

SV *
glBufferPageCommitmentARB(target, offset, size, commit);
     GLenum target;
     GLintptr offset;
     GLsizeiptr size;
     GLboolean commit;
CODE:
    if(! __glewBufferPageCommitmentARB) {
        croak("glBufferPageCommitmentARB not available on this machine");
    };
    glBufferPageCommitmentARB(target, offset, size, commit);

SV *
glBufferParameteriAPPLE(target, pname, param);
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewBufferParameteriAPPLE) {
        croak("glBufferParameteriAPPLE not available on this machine");
    };
    glBufferParameteriAPPLE(target, pname, param);

GLuint
glBufferRegionEnabled();
CODE:
    if(! __glewBufferRegionEnabled) {
        croak("glBufferRegionEnabled not available on this machine");
    };
    RETVAL = glBufferRegionEnabled();
OUTPUT:
    RETVAL

SV *
glBufferStorage(target, size, data, flags);
     GLenum target;
     GLsizeiptr size;
     const void *data;
     GLbitfield flags;
CODE:
    if(! __glewBufferStorage) {
        croak("glBufferStorage not available on this machine");
    };
    glBufferStorage(target, size, data, flags);

SV *
glBufferSubData(target, offset, size, data);
     GLenum target;
     GLintptr offset;
     GLsizeiptr size;
     const void* data;
CODE:
    if(! __glewBufferSubData) {
        croak("glBufferSubData not available on this machine");
    };
    glBufferSubData(target, offset, size, data);

SV *
glBufferSubDataARB(target, offset, size, data);
     GLenum target;
     GLintptrARB offset;
     GLsizeiptrARB size;
     const void *data;
CODE:
    if(! __glewBufferSubDataARB) {
        croak("glBufferSubDataARB not available on this machine");
    };
    glBufferSubDataARB(target, offset, size, data);

SV *
glCallCommandListNV(list);
     GLuint list;
CODE:
    if(! __glewCallCommandListNV) {
        croak("glCallCommandListNV not available on this machine");
    };
    glCallCommandListNV(list);

GLenum
glCheckFramebufferStatus(target);
     GLenum target;
CODE:
    if(! __glewCheckFramebufferStatus) {
        croak("glCheckFramebufferStatus not available on this machine");
    };
    RETVAL = glCheckFramebufferStatus(target);
OUTPUT:
    RETVAL

GLenum
glCheckFramebufferStatusEXT(target);
     GLenum target;
CODE:
    if(! __glewCheckFramebufferStatusEXT) {
        croak("glCheckFramebufferStatusEXT not available on this machine");
    };
    RETVAL = glCheckFramebufferStatusEXT(target);
OUTPUT:
    RETVAL

GLenum
glCheckNamedFramebufferStatus(framebuffer, target);
     GLuint framebuffer;
     GLenum target;
CODE:
    if(! __glewCheckNamedFramebufferStatus) {
        croak("glCheckNamedFramebufferStatus not available on this machine");
    };
    RETVAL = glCheckNamedFramebufferStatus(framebuffer, target);
OUTPUT:
    RETVAL

GLenum
glCheckNamedFramebufferStatusEXT(framebuffer, target);
     GLuint framebuffer;
     GLenum target;
CODE:
    if(! __glewCheckNamedFramebufferStatusEXT) {
        croak("glCheckNamedFramebufferStatusEXT not available on this machine");
    };
    RETVAL = glCheckNamedFramebufferStatusEXT(framebuffer, target);
OUTPUT:
    RETVAL

SV *
glClampColor(target, clamp);
     GLenum target;
     GLenum clamp;
CODE:
    if(! __glewClampColor) {
        croak("glClampColor not available on this machine");
    };
    glClampColor(target, clamp);

SV *
glClampColorARB(target, clamp);
     GLenum target;
     GLenum clamp;
CODE:
    if(! __glewClampColorARB) {
        croak("glClampColorARB not available on this machine");
    };
    glClampColorARB(target, clamp);

SV *
glClearBufferData(target, internalformat, format, type, data);
     GLenum target;
     GLenum internalformat;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearBufferData) {
        croak("glClearBufferData not available on this machine");
    };
    glClearBufferData(target, internalformat, format, type, data);

SV *
glClearBufferfi(buffer, drawBuffer, depth, stencil);
     GLenum buffer;
     GLint drawBuffer;
     GLfloat depth;
     GLint stencil;
CODE:
    if(! __glewClearBufferfi) {
        croak("glClearBufferfi not available on this machine");
    };
    glClearBufferfi(buffer, drawBuffer, depth, stencil);

SV *
glClearBufferfv(buffer, drawBuffer, value);
     GLenum buffer;
     GLint drawBuffer;
     const GLfloat* value;
CODE:
    if(! __glewClearBufferfv) {
        croak("glClearBufferfv not available on this machine");
    };
    glClearBufferfv(buffer, drawBuffer, value);

SV *
glClearBufferiv(buffer, drawBuffer, value);
     GLenum buffer;
     GLint drawBuffer;
     const GLint* value;
CODE:
    if(! __glewClearBufferiv) {
        croak("glClearBufferiv not available on this machine");
    };
    glClearBufferiv(buffer, drawBuffer, value);

SV *
glClearBufferSubData(target, internalformat, offset, size, format, type, data);
     GLenum target;
     GLenum internalformat;
     GLintptr offset;
     GLsizeiptr size;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearBufferSubData) {
        croak("glClearBufferSubData not available on this machine");
    };
    glClearBufferSubData(target, internalformat, offset, size, format, type, data);

SV *
glClearBufferuiv(buffer, drawBuffer, value);
     GLenum buffer;
     GLint drawBuffer;
     const GLuint* value;
CODE:
    if(! __glewClearBufferuiv) {
        croak("glClearBufferuiv not available on this machine");
    };
    glClearBufferuiv(buffer, drawBuffer, value);

SV *
glClearColorIiEXT(red, green, blue, alpha);
     GLint red;
     GLint green;
     GLint blue;
     GLint alpha;
CODE:
    if(! __glewClearColorIiEXT) {
        croak("glClearColorIiEXT not available on this machine");
    };
    glClearColorIiEXT(red, green, blue, alpha);

SV *
glClearColorIuiEXT(red, green, blue, alpha);
     GLuint red;
     GLuint green;
     GLuint blue;
     GLuint alpha;
CODE:
    if(! __glewClearColorIuiEXT) {
        croak("glClearColorIuiEXT not available on this machine");
    };
    glClearColorIuiEXT(red, green, blue, alpha);

SV *
glClearColorx(red, green, blue, alpha);
     GLclampx red;
     GLclampx green;
     GLclampx blue;
     GLclampx alpha;
CODE:
    if(! __glewClearColorx) {
        croak("glClearColorx not available on this machine");
    };
    glClearColorx(red, green, blue, alpha);

SV *
glClearDepthdNV(depth);
     GLdouble depth;
CODE:
    if(! __glewClearDepthdNV) {
        croak("glClearDepthdNV not available on this machine");
    };
    glClearDepthdNV(depth);

SV *
glClearDepthf(d);
     GLclampf d;
CODE:
    if(! __glewClearDepthf) {
        croak("glClearDepthf not available on this machine");
    };
    glClearDepthf(d);

SV *
glClearDepthfOES(depth);
     GLclampf depth;
CODE:
    if(! __glewClearDepthfOES) {
        croak("glClearDepthfOES not available on this machine");
    };
    glClearDepthfOES(depth);

SV *
glClearDepthx(depth);
     GLclampx depth;
CODE:
    if(! __glewClearDepthx) {
        croak("glClearDepthx not available on this machine");
    };
    glClearDepthx(depth);

SV *
glClearNamedBufferData(buffer, internalformat, format, type, data);
     GLuint buffer;
     GLenum internalformat;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearNamedBufferData) {
        croak("glClearNamedBufferData not available on this machine");
    };
    glClearNamedBufferData(buffer, internalformat, format, type, data);

SV *
glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
     GLuint buffer;
     GLenum internalformat;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearNamedBufferDataEXT) {
        croak("glClearNamedBufferDataEXT not available on this machine");
    };
    glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);

SV *
glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
     GLuint buffer;
     GLenum internalformat;
     GLintptr offset;
     GLsizeiptr size;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearNamedBufferSubData) {
        croak("glClearNamedBufferSubData not available on this machine");
    };
    glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);

SV *
glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
     GLuint buffer;
     GLenum internalformat;
     GLintptr offset;
     GLsizeiptr size;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearNamedBufferSubDataEXT) {
        croak("glClearNamedBufferSubDataEXT not available on this machine");
    };
    glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);

SV *
glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
     GLuint framebuffer;
     GLenum buffer;
     GLint drawbuffer;
     GLfloat depth;
     GLint stencil;
CODE:
    if(! __glewClearNamedFramebufferfi) {
        croak("glClearNamedFramebufferfi not available on this machine");
    };
    glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);

SV *
glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
     GLuint framebuffer;
     GLenum buffer;
     GLint drawbuffer;
     GLfloat* value;
CODE:
    if(! __glewClearNamedFramebufferfv) {
        croak("glClearNamedFramebufferfv not available on this machine");
    };
    glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);

SV *
glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
     GLuint framebuffer;
     GLenum buffer;
     GLint drawbuffer;
     const GLint* value;
CODE:
    if(! __glewClearNamedFramebufferiv) {
        croak("glClearNamedFramebufferiv not available on this machine");
    };
    glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);

SV *
glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
     GLuint framebuffer;
     GLenum buffer;
     GLint drawbuffer;
     const GLuint* value;
CODE:
    if(! __glewClearNamedFramebufferuiv) {
        croak("glClearNamedFramebufferuiv not available on this machine");
    };
    glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);

SV *
glClearTexImage(texture, level, format, type, data);
     GLuint texture;
     GLint level;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearTexImage) {
        croak("glClearTexImage not available on this machine");
    };
    glClearTexImage(texture, level, format, type, data);

SV *
glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewClearTexSubImage) {
        croak("glClearTexSubImage not available on this machine");
    };
    glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);

SV *
glClientActiveTexture(texture);
     GLenum texture;
CODE:
    if(! __glewClientActiveTexture) {
        croak("glClientActiveTexture not available on this machine");
    };
    glClientActiveTexture(texture);

SV *
glClientActiveTextureARB(texture);
     GLenum texture;
CODE:
    if(! __glewClientActiveTextureARB) {
        croak("glClientActiveTextureARB not available on this machine");
    };
    glClientActiveTextureARB(texture);

SV *
glClientActiveVertexStreamATI(stream);
     GLenum stream;
CODE:
    if(! __glewClientActiveVertexStreamATI) {
        croak("glClientActiveVertexStreamATI not available on this machine");
    };
    glClientActiveVertexStreamATI(stream);

SV *
glClientAttribDefaultEXT(mask);
     GLbitfield mask;
CODE:
    if(! __glewClientAttribDefaultEXT) {
        croak("glClientAttribDefaultEXT not available on this machine");
    };
    glClientAttribDefaultEXT(mask);

GLenum
glClientWaitSync(GLsync,flags,timeout);
     GLsync GLsync;
    GLbitfield flags;
    GLuint64 timeout;
CODE:
    if(! __glewClientWaitSync) {
        croak("glClientWaitSync not available on this machine");
    };
    RETVAL = glClientWaitSync(GLsync,flags,timeout);
OUTPUT:
    RETVAL

SV *
glClipControl(origin, depth);
     GLenum origin;
     GLenum depth;
CODE:
    if(! __glewClipControl) {
        croak("glClipControl not available on this machine");
    };
    glClipControl(origin, depth);

SV *
glClipPlanef(plane, equation);
     GLenum plane;
     const GLfloat* equation;
CODE:
    if(! __glewClipPlanef) {
        croak("glClipPlanef not available on this machine");
    };
    glClipPlanef(plane, equation);

SV *
glClipPlanefOES(plane, equation);
     GLenum plane;
     const GLfloat* equation;
CODE:
    if(! __glewClipPlanefOES) {
        croak("glClipPlanefOES not available on this machine");
    };
    glClipPlanefOES(plane, equation);

SV *
glClipPlanex(plane, equation);
     GLenum plane;
     const GLfixed* equation;
CODE:
    if(! __glewClipPlanex) {
        croak("glClipPlanex not available on this machine");
    };
    glClipPlanex(plane, equation);

SV *
glColor3fVertex3fSUN(r, g, b, x, y, z);
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewColor3fVertex3fSUN) {
        croak("glColor3fVertex3fSUN not available on this machine");
    };
    glColor3fVertex3fSUN(r, g, b, x, y, z);

SV *
glColor3fVertex3fvSUN(c, v);
     const GLfloat* c;
     const GLfloat *v;
CODE:
    if(! __glewColor3fVertex3fvSUN) {
        croak("glColor3fVertex3fvSUN not available on this machine");
    };
    glColor3fVertex3fvSUN(c, v);

SV *
glColor3hNV(red, green, blue);
     GLhalf red;
     GLhalf green;
     GLhalf blue;
CODE:
    if(! __glewColor3hNV) {
        croak("glColor3hNV not available on this machine");
    };
    glColor3hNV(red, green, blue);

SV *
glColor3hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewColor3hvNV) {
        croak("glColor3hvNV not available on this machine");
    };
    glColor3hvNV(v);

SV *
glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat a;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewColor4fNormal3fVertex3fSUN) {
        croak("glColor4fNormal3fVertex3fSUN not available on this machine");
    };
    glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);

SV *
glColor4fNormal3fVertex3fvSUN(c, n, v);
     const GLfloat* c;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewColor4fNormal3fVertex3fvSUN) {
        croak("glColor4fNormal3fVertex3fvSUN not available on this machine");
    };
    glColor4fNormal3fVertex3fvSUN(c, n, v);

SV *
glColor4hNV(red, green, blue, alpha);
     GLhalf red;
     GLhalf green;
     GLhalf blue;
     GLhalf alpha;
CODE:
    if(! __glewColor4hNV) {
        croak("glColor4hNV not available on this machine");
    };
    glColor4hNV(red, green, blue, alpha);

SV *
glColor4hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewColor4hvNV) {
        croak("glColor4hvNV not available on this machine");
    };
    glColor4hvNV(v);

SV *
glColor4ubVertex2fSUN(r, g, b, a, x, y);
     GLubyte r;
     GLubyte g;
     GLubyte b;
     GLubyte a;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewColor4ubVertex2fSUN) {
        croak("glColor4ubVertex2fSUN not available on this machine");
    };
    glColor4ubVertex2fSUN(r, g, b, a, x, y);

SV *
glColor4ubVertex2fvSUN(c, v);
     const GLubyte* c;
     const GLfloat *v;
CODE:
    if(! __glewColor4ubVertex2fvSUN) {
        croak("glColor4ubVertex2fvSUN not available on this machine");
    };
    glColor4ubVertex2fvSUN(c, v);

SV *
glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
     GLubyte r;
     GLubyte g;
     GLubyte b;
     GLubyte a;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewColor4ubVertex3fSUN) {
        croak("glColor4ubVertex3fSUN not available on this machine");
    };
    glColor4ubVertex3fSUN(r, g, b, a, x, y, z);

SV *
glColor4ubVertex3fvSUN(c, v);
     const GLubyte* c;
     const GLfloat *v;
CODE:
    if(! __glewColor4ubVertex3fvSUN) {
        croak("glColor4ubVertex3fvSUN not available on this machine");
    };
    glColor4ubVertex3fvSUN(c, v);

SV *
glColor4x(red, green, blue, alpha);
     GLfixed red;
     GLfixed green;
     GLfixed blue;
     GLfixed alpha;
CODE:
    if(! __glewColor4x) {
        croak("glColor4x not available on this machine");
    };
    glColor4x(red, green, blue, alpha);

SV *
glColorFormatNV(size, type, stride);
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewColorFormatNV) {
        croak("glColorFormatNV not available on this machine");
    };
    glColorFormatNV(size, type, stride);

SV *
glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMask;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
CODE:
    if(! __glewColorFragmentOp1ATI) {
        croak("glColorFragmentOp1ATI not available on this machine");
    };
    glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);

SV *
glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMask;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
     GLuint arg2;
     GLuint arg2Rep;
     GLuint arg2Mod;
CODE:
    if(! __glewColorFragmentOp2ATI) {
        croak("glColorFragmentOp2ATI not available on this machine");
    };
    glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);

SV *
glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
     GLenum op;
     GLuint dst;
     GLuint dstMask;
     GLuint dstMod;
     GLuint arg1;
     GLuint arg1Rep;
     GLuint arg1Mod;
     GLuint arg2;
     GLuint arg2Rep;
     GLuint arg2Mod;
     GLuint arg3;
     GLuint arg3Rep;
     GLuint arg3Mod;
CODE:
    if(! __glewColorFragmentOp3ATI) {
        croak("glColorFragmentOp3ATI not available on this machine");
    };
    glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);

SV *
glColorMaski(buf, red, green, blue, alpha);
     GLuint buf;
     GLboolean red;
     GLboolean green;
     GLboolean blue;
     GLboolean alpha;
CODE:
    if(! __glewColorMaski) {
        croak("glColorMaski not available on this machine");
    };
    glColorMaski(buf, red, green, blue, alpha);

SV *
glColorMaskIndexedEXT(buf, r, g, b, a);
     GLuint buf;
     GLboolean r;
     GLboolean g;
     GLboolean b;
     GLboolean a;
CODE:
    if(! __glewColorMaskIndexedEXT) {
        croak("glColorMaskIndexedEXT not available on this machine");
    };
    glColorMaskIndexedEXT(buf, r, g, b, a);

SV *
glColorP3ui(type, color);
     GLenum type;
     GLuint color;
CODE:
    if(! __glewColorP3ui) {
        croak("glColorP3ui not available on this machine");
    };
    glColorP3ui(type, color);

SV *
glColorP3uiv(type, color);
     GLenum type;
     const GLuint* color;
CODE:
    if(! __glewColorP3uiv) {
        croak("glColorP3uiv not available on this machine");
    };
    glColorP3uiv(type, color);

SV *
glColorP4ui(type, color);
     GLenum type;
     GLuint color;
CODE:
    if(! __glewColorP4ui) {
        croak("glColorP4ui not available on this machine");
    };
    glColorP4ui(type, color);

SV *
glColorP4uiv(type, color);
     GLenum type;
     const GLuint* color;
CODE:
    if(! __glewColorP4uiv) {
        croak("glColorP4uiv not available on this machine");
    };
    glColorP4uiv(type, color);

SV *
glColorPointerEXT(size, type, stride, count, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     GLsizei count;
     const void *pointer;
CODE:
    if(! __glewColorPointerEXT) {
        croak("glColorPointerEXT not available on this machine");
    };
    glColorPointerEXT(size, type, stride, count, pointer);

SV *
glColorPointerListIBM(size, type, stride, pointer, ptrstride);
     GLint size;
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewColorPointerListIBM) {
        croak("glColorPointerListIBM not available on this machine");
    };
    glColorPointerListIBM(size, type, stride, pointer, ptrstride);

SV *
glColorPointervINTEL(size, type, pointer);
     GLint size;
     GLenum type;
     const void** pointer;
CODE:
    if(! __glewColorPointervINTEL) {
        croak("glColorPointervINTEL not available on this machine");
    };
    glColorPointervINTEL(size, type, pointer);

SV *
glColorSubTable(target, start, count, format, type, data);
     GLenum target;
     GLsizei start;
     GLsizei count;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewColorSubTable) {
        croak("glColorSubTable not available on this machine");
    };
    glColorSubTable(target, start, count, format, type, data);

SV *
glColorSubTableEXT(target, start, count, format, type, data);
     GLenum target;
     GLsizei start;
     GLsizei count;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewColorSubTableEXT) {
        croak("glColorSubTableEXT not available on this machine");
    };
    glColorSubTableEXT(target, start, count, format, type, data);

SV *
glColorTable(target, internalformat, width, format, type, table);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *table;
CODE:
    if(! __glewColorTable) {
        croak("glColorTable not available on this machine");
    };
    glColorTable(target, internalformat, width, format, type, table);

SV *
glColorTableEXT(target, internalFormat, width, format, type, data);
     GLenum target;
     GLenum internalFormat;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *data;
CODE:
    if(! __glewColorTableEXT) {
        croak("glColorTableEXT not available on this machine");
    };
    glColorTableEXT(target, internalFormat, width, format, type, data);

SV *
glColorTableParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat *params;
CODE:
    if(! __glewColorTableParameterfv) {
        croak("glColorTableParameterfv not available on this machine");
    };
    glColorTableParameterfv(target, pname, params);

SV *
glColorTableParameterfvSGI(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewColorTableParameterfvSGI) {
        croak("glColorTableParameterfvSGI not available on this machine");
    };
    glColorTableParameterfvSGI(target, pname, params);

SV *
glColorTableParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint *params;
CODE:
    if(! __glewColorTableParameteriv) {
        croak("glColorTableParameteriv not available on this machine");
    };
    glColorTableParameteriv(target, pname, params);

SV *
glColorTableParameterivSGI(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewColorTableParameterivSGI) {
        croak("glColorTableParameterivSGI not available on this machine");
    };
    glColorTableParameterivSGI(target, pname, params);

SV *
glColorTableSGI(target, internalformat, width, format, type, table);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *table;
CODE:
    if(! __glewColorTableSGI) {
        croak("glColorTableSGI not available on this machine");
    };
    glColorTableSGI(target, internalformat, width, format, type, table);

SV *
glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
     GLenum stage;
     GLenum portion;
     GLenum variable;
     GLenum input;
     GLenum mapping;
     GLenum componentUsage;
CODE:
    if(! __glewCombinerInputNV) {
        croak("glCombinerInputNV not available on this machine");
    };
    glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);

SV *
glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
     GLenum stage;
     GLenum portion;
     GLenum abOutput;
     GLenum cdOutput;
     GLenum sumOutput;
     GLenum scale;
     GLenum bias;
     GLboolean abDotProduct;
     GLboolean cdDotProduct;
     GLboolean muxSum;
CODE:
    if(! __glewCombinerOutputNV) {
        croak("glCombinerOutputNV not available on this machine");
    };
    glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);

SV *
glCombinerParameterfNV(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewCombinerParameterfNV) {
        croak("glCombinerParameterfNV not available on this machine");
    };
    glCombinerParameterfNV(pname, param);

SV *
glCombinerParameterfvNV(pname, params);
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewCombinerParameterfvNV) {
        croak("glCombinerParameterfvNV not available on this machine");
    };
    glCombinerParameterfvNV(pname, params);

SV *
glCombinerParameteriNV(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewCombinerParameteriNV) {
        croak("glCombinerParameteriNV not available on this machine");
    };
    glCombinerParameteriNV(pname, param);

SV *
glCombinerParameterivNV(pname, params);
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewCombinerParameterivNV) {
        croak("glCombinerParameterivNV not available on this machine");
    };
    glCombinerParameterivNV(pname, params);

SV *
glCombinerStageParameterfvNV(stage, pname, params);
     GLenum stage;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewCombinerStageParameterfvNV) {
        croak("glCombinerStageParameterfvNV not available on this machine");
    };
    glCombinerStageParameterfvNV(stage, pname, params);

SV *
glCommandListSegmentsNV(list, segments);
     GLuint list;
     GLuint segments;
CODE:
    if(! __glewCommandListSegmentsNV) {
        croak("glCommandListSegmentsNV not available on this machine");
    };
    glCommandListSegmentsNV(list, segments);

SV *
glCompileCommandListNV(list);
     GLuint list;
CODE:
    if(! __glewCompileCommandListNV) {
        croak("glCompileCommandListNV not available on this machine");
    };
    glCompileCommandListNV(list);

SV *
glCompileShader(shader);
     GLuint shader;
CODE:
    if(! __glewCompileShader) {
        croak("glCompileShader not available on this machine");
    };
    glCompileShader(shader);

SV *
glCompileShaderARB(shaderObj);
     GLhandleARB shaderObj;
CODE:
    if(! __glewCompileShaderARB) {
        croak("glCompileShaderARB not available on this machine");
    };
    glCompileShaderARB(shaderObj);

SV *
glCompileShaderIncludeARB(shader, count, path, length);
     GLuint shader;
     GLsizei count;
     const GLchar* const *path;
     const GLint *length;
CODE:
    if(! __glewCompileShaderIncludeARB) {
        croak("glCompileShaderIncludeARB not available on this machine");
    };
    glCompileShaderIncludeARB(shader, count, path, length);

SV *
glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexImage1DEXT) {
        croak("glCompressedMultiTexImage1DEXT not available on this machine");
    };
    glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, data);

SV *
glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexImage2DEXT) {
        croak("glCompressedMultiTexImage2DEXT not available on this machine");
    };
    glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, data);

SV *
glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexImage3DEXT) {
        croak("glCompressedMultiTexImage3DEXT not available on this machine");
    };
    glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, data);

SV *
glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexSubImage1DEXT) {
        croak("glCompressedMultiTexSubImage1DEXT not available on this machine");
    };
    glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, data);

SV *
glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexSubImage2DEXT) {
        croak("glCompressedMultiTexSubImage2DEXT not available on this machine");
    };
    glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, data);

SV *
glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedMultiTexSubImage3DEXT) {
        croak("glCompressedMultiTexSubImage3DEXT not available on this machine");
    };
    glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

SV *
glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage1D) {
        croak("glCompressedTexImage1D not available on this machine");
    };
    glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);

SV *
glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage1DARB) {
        croak("glCompressedTexImage1DARB not available on this machine");
    };
    glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);

SV *
glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage2D) {
        croak("glCompressedTexImage2D not available on this machine");
    };
    glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);

SV *
glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage2DARB) {
        croak("glCompressedTexImage2DARB not available on this machine");
    };
    glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);

SV *
glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage3D) {
        croak("glCompressedTexImage3D not available on this machine");
    };
    glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);

SV *
glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexImage3DARB) {
        croak("glCompressedTexImage3DARB not available on this machine");
    };
    glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);

SV *
glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage1D) {
        croak("glCompressedTexSubImage1D not available on this machine");
    };
    glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);

SV *
glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage1DARB) {
        croak("glCompressedTexSubImage1DARB not available on this machine");
    };
    glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);

SV *
glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage2D) {
        croak("glCompressedTexSubImage2D not available on this machine");
    };
    glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);

SV *
glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage2DARB) {
        croak("glCompressedTexSubImage2DARB not available on this machine");
    };
    glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);

SV *
glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage3D) {
        croak("glCompressedTexSubImage3D not available on this machine");
    };
    glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

SV *
glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTexSubImage3DARB) {
        croak("glCompressedTexSubImage3DARB not available on this machine");
    };
    glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

SV *
glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureImage1DEXT) {
        croak("glCompressedTextureImage1DEXT not available on this machine");
    };
    glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, data);

SV *
glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureImage2DEXT) {
        croak("glCompressedTextureImage2DEXT not available on this machine");
    };
    glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, data);

SV *
glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureImage3DEXT) {
        croak("glCompressedTextureImage3DEXT not available on this machine");
    };
    glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, data);

SV *
glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage1D) {
        croak("glCompressedTextureSubImage1D not available on this machine");
    };
    glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);

SV *
glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage1DEXT) {
        croak("glCompressedTextureSubImage1DEXT not available on this machine");
    };
    glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, data);

SV *
glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage2D) {
        croak("glCompressedTextureSubImage2D not available on this machine");
    };
    glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);

SV *
glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage2DEXT) {
        croak("glCompressedTextureSubImage2DEXT not available on this machine");
    };
    glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, data);

SV *
glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage3D) {
        croak("glCompressedTextureSubImage3D not available on this machine");
    };
    glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

SV *
glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLsizei imageSize;
     const void *data;
CODE:
    if(! __glewCompressedTextureSubImage3DEXT) {
        croak("glCompressedTextureSubImage3DEXT not available on this machine");
    };
    glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

SV *
glConservativeRasterParameterfNV(pname, value);
     GLenum pname;
     GLfloat value;
CODE:
    if(! __glewConservativeRasterParameterfNV) {
        croak("glConservativeRasterParameterfNV not available on this machine");
    };
    glConservativeRasterParameterfNV(pname, value);

SV *
glConservativeRasterParameteriNV(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewConservativeRasterParameteriNV) {
        croak("glConservativeRasterParameteriNV not available on this machine");
    };
    glConservativeRasterParameteriNV(pname, param);

SV *
glConvolutionFilter1D(target, internalformat, width, format, type, image);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *image;
CODE:
    if(! __glewConvolutionFilter1D) {
        croak("glConvolutionFilter1D not available on this machine");
    };
    glConvolutionFilter1D(target, internalformat, width, format, type, image);

SV *
glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *image;
CODE:
    if(! __glewConvolutionFilter1DEXT) {
        croak("glConvolutionFilter1DEXT not available on this machine");
    };
    glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);

SV *
glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *image;
CODE:
    if(! __glewConvolutionFilter2D) {
        croak("glConvolutionFilter2D not available on this machine");
    };
    glConvolutionFilter2D(target, internalformat, width, height, format, type, image);

SV *
glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *image;
CODE:
    if(! __glewConvolutionFilter2DEXT) {
        croak("glConvolutionFilter2DEXT not available on this machine");
    };
    glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);

SV *
glConvolutionParameterf(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat params;
CODE:
    if(! __glewConvolutionParameterf) {
        croak("glConvolutionParameterf not available on this machine");
    };
    glConvolutionParameterf(target, pname, params);

SV *
glConvolutionParameterfEXT(target, pname, param);
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewConvolutionParameterfEXT) {
        croak("glConvolutionParameterfEXT not available on this machine");
    };
    glConvolutionParameterfEXT(target, pname, param);

SV *
glConvolutionParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat *params;
CODE:
    if(! __glewConvolutionParameterfv) {
        croak("glConvolutionParameterfv not available on this machine");
    };
    glConvolutionParameterfv(target, pname, params);

SV *
glConvolutionParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewConvolutionParameterfvEXT) {
        croak("glConvolutionParameterfvEXT not available on this machine");
    };
    glConvolutionParameterfvEXT(target, pname, params);

SV *
glConvolutionParameteri(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint params;
CODE:
    if(! __glewConvolutionParameteri) {
        croak("glConvolutionParameteri not available on this machine");
    };
    glConvolutionParameteri(target, pname, params);

SV *
glConvolutionParameteriEXT(target, pname, param);
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewConvolutionParameteriEXT) {
        croak("glConvolutionParameteriEXT not available on this machine");
    };
    glConvolutionParameteriEXT(target, pname, param);

SV *
glConvolutionParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint *params;
CODE:
    if(! __glewConvolutionParameteriv) {
        croak("glConvolutionParameteriv not available on this machine");
    };
    glConvolutionParameteriv(target, pname, params);

SV *
glConvolutionParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewConvolutionParameterivEXT) {
        croak("glConvolutionParameterivEXT not available on this machine");
    };
    glConvolutionParameterivEXT(target, pname, params);

SV *
glCopyBufferSubData(readtarget, writetarget, readoffset, writeoffset, size);
     GLenum readtarget;
     GLenum writetarget;
     GLintptr readoffset;
     GLintptr writeoffset;
     GLsizeiptr size;
CODE:
    if(! __glewCopyBufferSubData) {
        croak("glCopyBufferSubData not available on this machine");
    };
    glCopyBufferSubData(readtarget, writetarget, readoffset, writeoffset, size);

SV *
glCopyColorSubTable(target, start, x, y, width);
     GLenum target;
     GLsizei start;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyColorSubTable) {
        croak("glCopyColorSubTable not available on this machine");
    };
    glCopyColorSubTable(target, start, x, y, width);

SV *
glCopyColorSubTableEXT(target, start, x, y, width);
     GLenum target;
     GLsizei start;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyColorSubTableEXT) {
        croak("glCopyColorSubTableEXT not available on this machine");
    };
    glCopyColorSubTableEXT(target, start, x, y, width);

SV *
glCopyColorTable(target, internalformat, x, y, width);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyColorTable) {
        croak("glCopyColorTable not available on this machine");
    };
    glCopyColorTable(target, internalformat, x, y, width);

SV *
glCopyColorTableSGI(target, internalformat, x, y, width);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyColorTableSGI) {
        croak("glCopyColorTableSGI not available on this machine");
    };
    glCopyColorTableSGI(target, internalformat, x, y, width);

SV *
glCopyConvolutionFilter1D(target, internalformat, x, y, width);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyConvolutionFilter1D) {
        croak("glCopyConvolutionFilter1D not available on this machine");
    };
    glCopyConvolutionFilter1D(target, internalformat, x, y, width);

SV *
glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyConvolutionFilter1DEXT) {
        croak("glCopyConvolutionFilter1DEXT not available on this machine");
    };
    glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);

SV *
glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyConvolutionFilter2D) {
        croak("glCopyConvolutionFilter2D not available on this machine");
    };
    glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);

SV *
glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
     GLenum target;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyConvolutionFilter2DEXT) {
        croak("glCopyConvolutionFilter2DEXT not available on this machine");
    };
    glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);

SV *
glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
     GLuint srcName;
     GLenum srcTarget;
     GLint srcLevel;
     GLint srcX;
     GLint srcY;
     GLint srcZ;
     GLuint dstName;
     GLenum dstTarget;
     GLint dstLevel;
     GLint dstX;
     GLint dstY;
     GLint dstZ;
     GLsizei srcWidth;
     GLsizei srcHeight;
     GLsizei srcDepth;
CODE:
    if(! __glewCopyImageSubData) {
        croak("glCopyImageSubData not available on this machine");
    };
    glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);

SV *
glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
     GLuint srcName;
     GLenum srcTarget;
     GLint srcLevel;
     GLint srcX;
     GLint srcY;
     GLint srcZ;
     GLuint dstName;
     GLenum dstTarget;
     GLint dstLevel;
     GLint dstX;
     GLint dstY;
     GLint dstZ;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewCopyImageSubDataNV) {
        croak("glCopyImageSubDataNV not available on this machine");
    };
    glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);

SV *
glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLint border;
CODE:
    if(! __glewCopyMultiTexImage1DEXT) {
        croak("glCopyMultiTexImage1DEXT not available on this machine");
    };
    glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);

SV *
glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLint border;
CODE:
    if(! __glewCopyMultiTexImage2DEXT) {
        croak("glCopyMultiTexImage2DEXT not available on this machine");
    };
    glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);

SV *
glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyMultiTexSubImage1DEXT) {
        croak("glCopyMultiTexSubImage1DEXT not available on this machine");
    };
    glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);

SV *
glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyMultiTexSubImage2DEXT) {
        croak("glCopyMultiTexSubImage2DEXT not available on this machine");
    };
    glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);

SV *
glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyMultiTexSubImage3DEXT) {
        croak("glCopyMultiTexSubImage3DEXT not available on this machine");
    };
    glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);

SV *
glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
     GLuint readBuffer;
     GLuint writeBuffer;
     GLintptr readOffset;
     GLintptr writeOffset;
     GLsizeiptr size;
CODE:
    if(! __glewCopyNamedBufferSubData) {
        croak("glCopyNamedBufferSubData not available on this machine");
    };
    glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);

SV *
glCopyPathNV(resultPath, srcPath);
     GLuint resultPath;
     GLuint srcPath;
CODE:
    if(! __glewCopyPathNV) {
        croak("glCopyPathNV not available on this machine");
    };
    glCopyPathNV(resultPath, srcPath);

SV *
glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLint border;
CODE:
    if(! __glewCopyTexImage1DEXT) {
        croak("glCopyTexImage1DEXT not available on this machine");
    };
    glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);

SV *
glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLint border;
CODE:
    if(! __glewCopyTexImage2DEXT) {
        croak("glCopyTexImage2DEXT not available on this machine");
    };
    glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);

SV *
glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyTexSubImage1DEXT) {
        croak("glCopyTexSubImage1DEXT not available on this machine");
    };
    glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);

SV *
glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTexSubImage2DEXT) {
        croak("glCopyTexSubImage2DEXT not available on this machine");
    };
    glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);

SV *
glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTexSubImage3D) {
        croak("glCopyTexSubImage3D not available on this machine");
    };
    glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);

SV *
glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTexSubImage3DEXT) {
        croak("glCopyTexSubImage3DEXT not available on this machine");
    };
    glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);

SV *
glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLint border;
CODE:
    if(! __glewCopyTextureImage1DEXT) {
        croak("glCopyTextureImage1DEXT not available on this machine");
    };
    glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);

SV *
glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLint border;
CODE:
    if(! __glewCopyTextureImage2DEXT) {
        croak("glCopyTextureImage2DEXT not available on this machine");
    };
    glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);

SV *
glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyTextureSubImage1D) {
        croak("glCopyTextureSubImage1D not available on this machine");
    };
    glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);

SV *
glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    if(! __glewCopyTextureSubImage1DEXT) {
        croak("glCopyTextureSubImage1DEXT not available on this machine");
    };
    glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);

SV *
glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTextureSubImage2D) {
        croak("glCopyTextureSubImage2D not available on this machine");
    };
    glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);

SV *
glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTextureSubImage2DEXT) {
        croak("glCopyTextureSubImage2DEXT not available on this machine");
    };
    glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);

SV *
glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTextureSubImage3D) {
        croak("glCopyTextureSubImage3D not available on this machine");
    };
    glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);

SV *
glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewCopyTextureSubImage3DEXT) {
        croak("glCopyTextureSubImage3DEXT not available on this machine");
    };
    glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);

SV *
glCoverageModulationNV(components);
     GLenum components;
CODE:
    if(! __glewCoverageModulationNV) {
        croak("glCoverageModulationNV not available on this machine");
    };
    glCoverageModulationNV(components);

SV *
glCoverageModulationTableNV(n, v);
     GLsizei n;
     const GLfloat* v;
CODE:
    if(! __glewCoverageModulationTableNV) {
        croak("glCoverageModulationTableNV not available on this machine");
    };
    glCoverageModulationTableNV(n, v);

SV *
glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLenum coverMode;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewCoverFillPathInstancedNV) {
        croak("glCoverFillPathInstancedNV not available on this machine");
    };
    glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);

SV *
glCoverFillPathNV(path, coverMode);
     GLuint path;
     GLenum coverMode;
CODE:
    if(! __glewCoverFillPathNV) {
        croak("glCoverFillPathNV not available on this machine");
    };
    glCoverFillPathNV(path, coverMode);

SV *
glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLenum coverMode;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewCoverStrokePathInstancedNV) {
        croak("glCoverStrokePathInstancedNV not available on this machine");
    };
    glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);

SV *
glCoverStrokePathNV(path, coverMode);
     GLuint path;
     GLenum coverMode;
CODE:
    if(! __glewCoverStrokePathNV) {
        croak("glCoverStrokePathNV not available on this machine");
    };
    glCoverStrokePathNV(path, coverMode);

SV *
glCreateBuffers(n, buffers);
     GLsizei n;
     GLuint* buffers;
CODE:
    if(! __glewCreateBuffers) {
        croak("glCreateBuffers not available on this machine");
    };
    glCreateBuffers(n, buffers);

SV *
glCreateCommandListsNV(n, lists);
     GLsizei n;
     GLuint* lists;
CODE:
    if(! __glewCreateCommandListsNV) {
        croak("glCreateCommandListsNV not available on this machine");
    };
    glCreateCommandListsNV(n, lists);

SV *
glCreateFramebuffers(n, framebuffers);
     GLsizei n;
     GLuint* framebuffers;
CODE:
    if(! __glewCreateFramebuffers) {
        croak("glCreateFramebuffers not available on this machine");
    };
    glCreateFramebuffers(n, framebuffers);

SV *
glCreatePerfQueryINTEL(queryId, queryHandle);
     GLuint queryId;
     GLuint* queryHandle;
CODE:
    if(! __glewCreatePerfQueryINTEL) {
        croak("glCreatePerfQueryINTEL not available on this machine");
    };
    glCreatePerfQueryINTEL(queryId, queryHandle);

GLuint
glCreateProgram();
CODE:
    if(! __glewCreateProgram) {
        croak("glCreateProgram not available on this machine");
    };
    RETVAL = glCreateProgram();
OUTPUT:
    RETVAL

GLhandleARB
glCreateProgramObjectARB();
CODE:
    if(! __glewCreateProgramObjectARB) {
        croak("glCreateProgramObjectARB not available on this machine");
    };
    RETVAL = glCreateProgramObjectARB();
OUTPUT:
    RETVAL

SV *
glCreateProgramPipelines(n, pipelines);
     GLsizei n;
     GLuint* pipelines;
CODE:
    if(! __glewCreateProgramPipelines) {
        croak("glCreateProgramPipelines not available on this machine");
    };
    glCreateProgramPipelines(n, pipelines);

SV *
glCreateQueries(target, n, ids);
     GLenum target;
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewCreateQueries) {
        croak("glCreateQueries not available on this machine");
    };
    glCreateQueries(target, n, ids);

SV *
glCreateRenderbuffers(n, renderbuffers);
     GLsizei n;
     GLuint* renderbuffers;
CODE:
    if(! __glewCreateRenderbuffers) {
        croak("glCreateRenderbuffers not available on this machine");
    };
    glCreateRenderbuffers(n, renderbuffers);

SV *
glCreateSamplers(n, samplers);
     GLsizei n;
     GLuint* samplers;
CODE:
    if(! __glewCreateSamplers) {
        croak("glCreateSamplers not available on this machine");
    };
    glCreateSamplers(n, samplers);

GLuint
glCreateShader(type);
     GLenum type;
CODE:
    if(! __glewCreateShader) {
        croak("glCreateShader not available on this machine");
    };
    RETVAL = glCreateShader(type);
OUTPUT:
    RETVAL

GLhandleARB
glCreateShaderObjectARB(shaderType);
     GLenum shaderType;
CODE:
    if(! __glewCreateShaderObjectARB) {
        croak("glCreateShaderObjectARB not available on this machine");
    };
    RETVAL = glCreateShaderObjectARB(shaderType);
OUTPUT:
    RETVAL

GLuint
glCreateShaderProgramEXT(type, string);
     GLenum type;
     const GLchar* string;
CODE:
    if(! __glewCreateShaderProgramEXT) {
        croak("glCreateShaderProgramEXT not available on this machine");
    };
    RETVAL = glCreateShaderProgramEXT(type, string);
OUTPUT:
    RETVAL

GLuint
glCreateShaderProgramv(type, count, strings);
     GLenum type;
     GLsizei count;
     const GLchar * const * strings;
CODE:
    if(! __glewCreateShaderProgramv) {
        croak("glCreateShaderProgramv not available on this machine");
    };
    RETVAL = glCreateShaderProgramv(type, count, strings);
OUTPUT:
    RETVAL

SV *
glCreateStatesNV(n, states);
     GLsizei n;
     GLuint* states;
CODE:
    if(! __glewCreateStatesNV) {
        croak("glCreateStatesNV not available on this machine");
    };
    glCreateStatesNV(n, states);

GLsync
glCreateSyncFromCLeventARB(context, event, flags);
     cl_context context;
     cl_event event;
     GLbitfield flags;
CODE:
    if(! __glewCreateSyncFromCLeventARB) {
        croak("glCreateSyncFromCLeventARB not available on this machine");
    };
    RETVAL = glCreateSyncFromCLeventARB(context, event, flags);
OUTPUT:
    RETVAL

SV *
glCreateTextures(target, n, textures);
     GLenum target;
     GLsizei n;
     GLuint* textures;
CODE:
    if(! __glewCreateTextures) {
        croak("glCreateTextures not available on this machine");
    };
    glCreateTextures(target, n, textures);

SV *
glCreateTransformFeedbacks(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewCreateTransformFeedbacks) {
        croak("glCreateTransformFeedbacks not available on this machine");
    };
    glCreateTransformFeedbacks(n, ids);

SV *
glCreateVertexArrays(n, arrays);
     GLsizei n;
     GLuint* arrays;
CODE:
    if(! __glewCreateVertexArrays) {
        croak("glCreateVertexArrays not available on this machine");
    };
    glCreateVertexArrays(n, arrays);

SV *
glCullParameterdvEXT(pname, params);
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewCullParameterdvEXT) {
        croak("glCullParameterdvEXT not available on this machine");
    };
    glCullParameterdvEXT(pname, params);

SV *
glCullParameterfvEXT(pname, params);
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewCullParameterfvEXT) {
        croak("glCullParameterfvEXT not available on this machine");
    };
    glCullParameterfvEXT(pname, params);

SV *
glCurrentPaletteMatrixARB(index);
     GLint index;
CODE:
    if(! __glewCurrentPaletteMatrixARB) {
        croak("glCurrentPaletteMatrixARB not available on this machine");
    };
    glCurrentPaletteMatrixARB(index);

SV *
glDebugMessageCallback(callback, userParam);
     GLDEBUGPROC callback;
     const void *userParam;
CODE:
    if(! __glewDebugMessageCallback) {
        croak("glDebugMessageCallback not available on this machine");
    };
    glDebugMessageCallback(callback, userParam);

SV *
glDebugMessageCallbackAMD(callback, userParam);
     GLDEBUGPROCAMD callback;
     void *userParam;
CODE:
    if(! __glewDebugMessageCallbackAMD) {
        croak("glDebugMessageCallbackAMD not available on this machine");
    };
    glDebugMessageCallbackAMD(callback, userParam);

SV *
glDebugMessageCallbackARB(callback, userParam);
     GLDEBUGPROCARB callback;
     const void *userParam;
CODE:
    if(! __glewDebugMessageCallbackARB) {
        croak("glDebugMessageCallbackARB not available on this machine");
    };
    glDebugMessageCallbackARB(callback, userParam);

SV *
glDebugMessageControl(source, type, severity, count, ids, enabled);
     GLenum source;
     GLenum type;
     GLenum severity;
     GLsizei count;
     const GLuint* ids;
     GLboolean enabled;
CODE:
    if(! __glewDebugMessageControl) {
        croak("glDebugMessageControl not available on this machine");
    };
    glDebugMessageControl(source, type, severity, count, ids, enabled);

SV *
glDebugMessageControlARB(source, type, severity, count, ids, enabled);
     GLenum source;
     GLenum type;
     GLenum severity;
     GLsizei count;
     const GLuint* ids;
     GLboolean enabled;
CODE:
    if(! __glewDebugMessageControlARB) {
        croak("glDebugMessageControlARB not available on this machine");
    };
    glDebugMessageControlARB(source, type, severity, count, ids, enabled);

SV *
glDebugMessageEnableAMD(category, severity, count, ids, enabled);
     GLenum category;
     GLenum severity;
     GLsizei count;
     const GLuint* ids;
     GLboolean enabled;
CODE:
    if(! __glewDebugMessageEnableAMD) {
        croak("glDebugMessageEnableAMD not available on this machine");
    };
    glDebugMessageEnableAMD(category, severity, count, ids, enabled);

SV *
glDebugMessageInsert(source, type, id, severity, length, buf);
     GLenum source;
     GLenum type;
     GLuint id;
     GLenum severity;
     GLsizei length;
     const GLchar* buf;
CODE:
    if(! __glewDebugMessageInsert) {
        croak("glDebugMessageInsert not available on this machine");
    };
    glDebugMessageInsert(source, type, id, severity, length, buf);

SV *
glDebugMessageInsertAMD(category, severity, id, length, buf);
     GLenum category;
     GLenum severity;
     GLuint id;
     GLsizei length;
     const GLchar* buf;
CODE:
    if(! __glewDebugMessageInsertAMD) {
        croak("glDebugMessageInsertAMD not available on this machine");
    };
    glDebugMessageInsertAMD(category, severity, id, length, buf);

SV *
glDebugMessageInsertARB(source, type, id, severity, length, buf);
     GLenum source;
     GLenum type;
     GLuint id;
     GLenum severity;
     GLsizei length;
     const GLchar* buf;
CODE:
    if(! __glewDebugMessageInsertARB) {
        croak("glDebugMessageInsertARB not available on this machine");
    };
    glDebugMessageInsertARB(source, type, id, severity, length, buf);

SV *
glDeleteAsyncMarkersSGIX(marker, range);
     GLuint marker;
     GLsizei range;
CODE:
    if(! __glewDeleteAsyncMarkersSGIX) {
        croak("glDeleteAsyncMarkersSGIX not available on this machine");
    };
    glDeleteAsyncMarkersSGIX(marker, range);

SV *
glDeleteBufferRegion(region);
     GLenum region;
CODE:
    if(! __glewDeleteBufferRegion) {
        croak("glDeleteBufferRegion not available on this machine");
    };
    glDeleteBufferRegion(region);

SV *
glDeleteBuffers(n, buffers);
     GLsizei n;
     const GLuint* buffers;
CODE:
    if(! __glewDeleteBuffers) {
        croak("glDeleteBuffers not available on this machine");
    };
    glDeleteBuffers(n, buffers);

SV *
glDeleteBuffersARB(n, buffers);
     GLsizei n;
     const GLuint* buffers;
CODE:
    if(! __glewDeleteBuffersARB) {
        croak("glDeleteBuffersARB not available on this machine");
    };
    glDeleteBuffersARB(n, buffers);

SV *
glDeleteCommandListsNV(n, lists);
     GLsizei n;
     const GLuint* lists;
CODE:
    if(! __glewDeleteCommandListsNV) {
        croak("glDeleteCommandListsNV not available on this machine");
    };
    glDeleteCommandListsNV(n, lists);

SV *
glDeleteFencesAPPLE(n, fences);
     GLsizei n;
     const GLuint* fences;
CODE:
    if(! __glewDeleteFencesAPPLE) {
        croak("glDeleteFencesAPPLE not available on this machine");
    };
    glDeleteFencesAPPLE(n, fences);

SV *
glDeleteFencesNV(n, fences);
     GLsizei n;
     const GLuint* fences;
CODE:
    if(! __glewDeleteFencesNV) {
        croak("glDeleteFencesNV not available on this machine");
    };
    glDeleteFencesNV(n, fences);

SV *
glDeleteFragmentShaderATI(id);
     GLuint id;
CODE:
    if(! __glewDeleteFragmentShaderATI) {
        croak("glDeleteFragmentShaderATI not available on this machine");
    };
    glDeleteFragmentShaderATI(id);

SV *
glDeleteFramebuffers(n, framebuffers);
     GLsizei n;
     const GLuint* framebuffers;
CODE:
    if(! __glewDeleteFramebuffers) {
        croak("glDeleteFramebuffers not available on this machine");
    };
    glDeleteFramebuffers(n, framebuffers);

SV *
glDeleteFramebuffersEXT(n, framebuffers);
     GLsizei n;
     const GLuint* framebuffers;
CODE:
    if(! __glewDeleteFramebuffersEXT) {
        croak("glDeleteFramebuffersEXT not available on this machine");
    };
    glDeleteFramebuffersEXT(n, framebuffers);

SV *
glDeleteNamedStringARB(namelen, name);
     GLint namelen;
     const GLchar* name;
CODE:
    if(! __glewDeleteNamedStringARB) {
        croak("glDeleteNamedStringARB not available on this machine");
    };
    glDeleteNamedStringARB(namelen, name);

SV *
glDeleteNamesAMD(identifier, num, names);
     GLenum identifier;
     GLuint num;
     const GLuint* names;
CODE:
    if(! __glewDeleteNamesAMD) {
        croak("glDeleteNamesAMD not available on this machine");
    };
    glDeleteNamesAMD(identifier, num, names);

SV *
glDeleteObjectARB(obj);
     GLhandleARB obj;
CODE:
    if(! __glewDeleteObjectARB) {
        croak("glDeleteObjectARB not available on this machine");
    };
    glDeleteObjectARB(obj);

SV *
glDeleteOcclusionQueriesNV(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteOcclusionQueriesNV) {
        croak("glDeleteOcclusionQueriesNV not available on this machine");
    };
    glDeleteOcclusionQueriesNV(n, ids);

SV *
glDeletePathsNV(path, range);
     GLuint path;
     GLsizei range;
CODE:
    if(! __glewDeletePathsNV) {
        croak("glDeletePathsNV not available on this machine");
    };
    glDeletePathsNV(path, range);

SV *
glDeletePerfMonitorsAMD(n, monitors);
     GLsizei n;
     GLuint* monitors;
CODE:
    if(! __glewDeletePerfMonitorsAMD) {
        croak("glDeletePerfMonitorsAMD not available on this machine");
    };
    glDeletePerfMonitorsAMD(n, monitors);

SV *
glDeletePerfQueryINTEL(queryHandle);
     GLuint queryHandle;
CODE:
    if(! __glewDeletePerfQueryINTEL) {
        croak("glDeletePerfQueryINTEL not available on this machine");
    };
    glDeletePerfQueryINTEL(queryHandle);

SV *
glDeleteProgram(program);
     GLuint program;
CODE:
    if(! __glewDeleteProgram) {
        croak("glDeleteProgram not available on this machine");
    };
    glDeleteProgram(program);

SV *
glDeleteProgramPipelines(n, pipelines);
     GLsizei n;
     const GLuint* pipelines;
CODE:
    if(! __glewDeleteProgramPipelines) {
        croak("glDeleteProgramPipelines not available on this machine");
    };
    glDeleteProgramPipelines(n, pipelines);

SV *
glDeleteProgramsARB(n, programs);
     GLsizei n;
     const GLuint* programs;
CODE:
    if(! __glewDeleteProgramsARB) {
        croak("glDeleteProgramsARB not available on this machine");
    };
    glDeleteProgramsARB(n, programs);

SV *
glDeleteProgramsNV(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteProgramsNV) {
        croak("glDeleteProgramsNV not available on this machine");
    };
    glDeleteProgramsNV(n, ids);

SV *
glDeleteQueries(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteQueries) {
        croak("glDeleteQueries not available on this machine");
    };
    glDeleteQueries(n, ids);

SV *
glDeleteQueriesANGLE(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteQueriesANGLE) {
        croak("glDeleteQueriesANGLE not available on this machine");
    };
    glDeleteQueriesANGLE(n, ids);

SV *
glDeleteQueriesARB(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteQueriesARB) {
        croak("glDeleteQueriesARB not available on this machine");
    };
    glDeleteQueriesARB(n, ids);

SV *
glDeleteRenderbuffers(n, renderbuffers);
     GLsizei n;
     const GLuint* renderbuffers;
CODE:
    if(! __glewDeleteRenderbuffers) {
        croak("glDeleteRenderbuffers not available on this machine");
    };
    glDeleteRenderbuffers(n, renderbuffers);

SV *
glDeleteRenderbuffersEXT(n, renderbuffers);
     GLsizei n;
     const GLuint* renderbuffers;
CODE:
    if(! __glewDeleteRenderbuffersEXT) {
        croak("glDeleteRenderbuffersEXT not available on this machine");
    };
    glDeleteRenderbuffersEXT(n, renderbuffers);

SV *
glDeleteSamplers(count, samplers);
     GLsizei count;
     const GLuint * samplers;
CODE:
    if(! __glewDeleteSamplers) {
        croak("glDeleteSamplers not available on this machine");
    };
    glDeleteSamplers(count, samplers);

SV *
glDeleteShader(shader);
     GLuint shader;
CODE:
    if(! __glewDeleteShader) {
        croak("glDeleteShader not available on this machine");
    };
    glDeleteShader(shader);

SV *
glDeleteStatesNV(n, states);
     GLsizei n;
     const GLuint* states;
CODE:
    if(! __glewDeleteStatesNV) {
        croak("glDeleteStatesNV not available on this machine");
    };
    glDeleteStatesNV(n, states);

SV *
glDeleteSync(GLsync);
     GLsync GLsync;
CODE:
    if(! __glewDeleteSync) {
        croak("glDeleteSync not available on this machine");
    };
    glDeleteSync(GLsync);

SV *
glDeleteTexturesEXT(n, textures);
     GLsizei n;
     const GLuint* textures;
CODE:
    if(! __glewDeleteTexturesEXT) {
        croak("glDeleteTexturesEXT not available on this machine");
    };
    glDeleteTexturesEXT(n, textures);

SV *
glDeleteTransformFeedbacks(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteTransformFeedbacks) {
        croak("glDeleteTransformFeedbacks not available on this machine");
    };
    glDeleteTransformFeedbacks(n, ids);

SV *
glDeleteTransformFeedbacksNV(n, ids);
     GLsizei n;
     const GLuint* ids;
CODE:
    if(! __glewDeleteTransformFeedbacksNV) {
        croak("glDeleteTransformFeedbacksNV not available on this machine");
    };
    glDeleteTransformFeedbacksNV(n, ids);

SV *
glDeleteVertexArrays(n, arrays);
     GLsizei n;
     const GLuint* arrays;
CODE:
    if(! __glewDeleteVertexArrays) {
        croak("glDeleteVertexArrays not available on this machine");
    };
    glDeleteVertexArrays(n, arrays);

SV *
glDeleteVertexArraysAPPLE(n, arrays);
     GLsizei n;
     const GLuint* arrays;
CODE:
    if(! __glewDeleteVertexArraysAPPLE) {
        croak("glDeleteVertexArraysAPPLE not available on this machine");
    };
    glDeleteVertexArraysAPPLE(n, arrays);

SV *
glDeleteVertexShaderEXT(id);
     GLuint id;
CODE:
    if(! __glewDeleteVertexShaderEXT) {
        croak("glDeleteVertexShaderEXT not available on this machine");
    };
    glDeleteVertexShaderEXT(id);

SV *
glDepthBoundsdNV(zmin, zmax);
     GLdouble zmin;
     GLdouble zmax;
CODE:
    if(! __glewDepthBoundsdNV) {
        croak("glDepthBoundsdNV not available on this machine");
    };
    glDepthBoundsdNV(zmin, zmax);

SV *
glDepthBoundsEXT(zmin, zmax);
     GLclampd zmin;
     GLclampd zmax;
CODE:
    if(! __glewDepthBoundsEXT) {
        croak("glDepthBoundsEXT not available on this machine");
    };
    glDepthBoundsEXT(zmin, zmax);

SV *
glDepthRangeArrayv(first, count, v);
     GLuint first;
     GLsizei count;
     const GLclampd * v;
CODE:
    if(! __glewDepthRangeArrayv) {
        croak("glDepthRangeArrayv not available on this machine");
    };
    glDepthRangeArrayv(first, count, v);

SV *
glDepthRangedNV(zNear, zFar);
     GLdouble zNear;
     GLdouble zFar;
CODE:
    if(! __glewDepthRangedNV) {
        croak("glDepthRangedNV not available on this machine");
    };
    glDepthRangedNV(zNear, zFar);

SV *
glDepthRangef(n, f);
     GLclampf n;
     GLclampf f;
CODE:
    if(! __glewDepthRangef) {
        croak("glDepthRangef not available on this machine");
    };
    glDepthRangef(n, f);

SV *
glDepthRangefOES(n, f);
     GLclampf n;
     GLclampf f;
CODE:
    if(! __glewDepthRangefOES) {
        croak("glDepthRangefOES not available on this machine");
    };
    glDepthRangefOES(n, f);

SV *
glDepthRangeIndexed(index, n, f);
     GLuint index;
     GLclampd n;
     GLclampd f;
CODE:
    if(! __glewDepthRangeIndexed) {
        croak("glDepthRangeIndexed not available on this machine");
    };
    glDepthRangeIndexed(index, n, f);

SV *
glDepthRangex(zNear, zFar);
     GLclampx zNear;
     GLclampx zFar;
CODE:
    if(! __glewDepthRangex) {
        croak("glDepthRangex not available on this machine");
    };
    glDepthRangex(zNear, zFar);

SV *
glDetachObjectARB(containerObj, attachedObj);
     GLhandleARB containerObj;
     GLhandleARB attachedObj;
CODE:
    if(! __glewDetachObjectARB) {
        croak("glDetachObjectARB not available on this machine");
    };
    glDetachObjectARB(containerObj, attachedObj);

SV *
glDetachShader(program, shader);
     GLuint program;
     GLuint shader;
CODE:
    if(! __glewDetachShader) {
        croak("glDetachShader not available on this machine");
    };
    glDetachShader(program, shader);

SV *
glDetailTexFuncSGIS(target, n, points);
     GLenum target;
     GLsizei n;
     const GLfloat* points;
CODE:
    if(! __glewDetailTexFuncSGIS) {
        croak("glDetailTexFuncSGIS not available on this machine");
    };
    glDetailTexFuncSGIS(target, n, points);

SV *
glDisableClientStateiEXT(array, index);
     GLenum array;
     GLuint index;
CODE:
    if(! __glewDisableClientStateiEXT) {
        croak("glDisableClientStateiEXT not available on this machine");
    };
    glDisableClientStateiEXT(array, index);

SV *
glDisableClientStateIndexedEXT(array, index);
     GLenum array;
     GLuint index;
CODE:
    if(! __glewDisableClientStateIndexedEXT) {
        croak("glDisableClientStateIndexedEXT not available on this machine");
    };
    glDisableClientStateIndexedEXT(array, index);

SV *
glDisablei(cap, index);
     GLenum cap;
     GLuint index;
CODE:
    if(! __glewDisablei) {
        croak("glDisablei not available on this machine");
    };
    glDisablei(cap, index);

SV *
glDisableIndexedEXT(target, index);
     GLenum target;
     GLuint index;
CODE:
    if(! __glewDisableIndexedEXT) {
        croak("glDisableIndexedEXT not available on this machine");
    };
    glDisableIndexedEXT(target, index);

SV *
glDisableVariantClientStateEXT(id);
     GLuint id;
CODE:
    if(! __glewDisableVariantClientStateEXT) {
        croak("glDisableVariantClientStateEXT not available on this machine");
    };
    glDisableVariantClientStateEXT(id);

SV *
glDisableVertexArrayAttrib(vaobj, index);
     GLuint vaobj;
     GLuint index;
CODE:
    if(! __glewDisableVertexArrayAttrib) {
        croak("glDisableVertexArrayAttrib not available on this machine");
    };
    glDisableVertexArrayAttrib(vaobj, index);

SV *
glDisableVertexArrayAttribEXT(vaobj, index);
     GLuint vaobj;
     GLuint index;
CODE:
    if(! __glewDisableVertexArrayAttribEXT) {
        croak("glDisableVertexArrayAttribEXT not available on this machine");
    };
    glDisableVertexArrayAttribEXT(vaobj, index);

SV *
glDisableVertexArrayEXT(vaobj, array);
     GLuint vaobj;
     GLenum array;
CODE:
    if(! __glewDisableVertexArrayEXT) {
        croak("glDisableVertexArrayEXT not available on this machine");
    };
    glDisableVertexArrayEXT(vaobj, array);

SV *
glDisableVertexAttribAPPLE(index, pname);
     GLuint index;
     GLenum pname;
CODE:
    if(! __glewDisableVertexAttribAPPLE) {
        croak("glDisableVertexAttribAPPLE not available on this machine");
    };
    glDisableVertexAttribAPPLE(index, pname);

SV *
glDisableVertexAttribArray(index);
     GLuint index;
CODE:
    if(! __glewDisableVertexAttribArray) {
        croak("glDisableVertexAttribArray not available on this machine");
    };
    glDisableVertexAttribArray(index);

SV *
glDisableVertexAttribArrayARB(index);
     GLuint index;
CODE:
    if(! __glewDisableVertexAttribArrayARB) {
        croak("glDisableVertexAttribArrayARB not available on this machine");
    };
    glDisableVertexAttribArrayARB(index);

SV *
glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
     GLuint num_groups_x;
     GLuint num_groups_y;
     GLuint num_groups_z;
CODE:
    if(! __glewDispatchCompute) {
        croak("glDispatchCompute not available on this machine");
    };
    glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);

SV *
glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
     GLuint num_groups_x;
     GLuint num_groups_y;
     GLuint num_groups_z;
     GLuint group_size_x;
     GLuint group_size_y;
     GLuint group_size_z;
CODE:
    if(! __glewDispatchComputeGroupSizeARB) {
        croak("glDispatchComputeGroupSizeARB not available on this machine");
    };
    glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);

SV *
glDispatchComputeIndirect(indirect);
     GLintptr indirect;
CODE:
    if(! __glewDispatchComputeIndirect) {
        croak("glDispatchComputeIndirect not available on this machine");
    };
    glDispatchComputeIndirect(indirect);

SV *
glDrawArraysEXT(mode, first, count);
     GLenum mode;
     GLint first;
     GLsizei count;
CODE:
    if(! __glewDrawArraysEXT) {
        croak("glDrawArraysEXT not available on this machine");
    };
    glDrawArraysEXT(mode, first, count);

SV *
glDrawArraysIndirect(mode, indirect);
     GLenum mode;
     const void *indirect;
CODE:
    if(! __glewDrawArraysIndirect) {
        croak("glDrawArraysIndirect not available on this machine");
    };
    glDrawArraysIndirect(mode, indirect);

SV *
glDrawArraysInstanced(mode, first, count, primcount);
     GLenum mode;
     GLint first;
     GLsizei count;
     GLsizei primcount;
CODE:
    if(! __glewDrawArraysInstanced) {
        croak("glDrawArraysInstanced not available on this machine");
    };
    glDrawArraysInstanced(mode, first, count, primcount);

SV *
glDrawArraysInstancedANGLE(mode, first, count, primcount);
     GLenum mode;
     GLint first;
     GLsizei count;
     GLsizei primcount;
CODE:
    if(! __glewDrawArraysInstancedANGLE) {
        croak("glDrawArraysInstancedANGLE not available on this machine");
    };
    glDrawArraysInstancedANGLE(mode, first, count, primcount);

SV *
glDrawArraysInstancedARB(mode, first, count, primcount);
     GLenum mode;
     GLint first;
     GLsizei count;
     GLsizei primcount;
CODE:
    if(! __glewDrawArraysInstancedARB) {
        croak("glDrawArraysInstancedARB not available on this machine");
    };
    glDrawArraysInstancedARB(mode, first, count, primcount);

SV *
glDrawArraysInstancedBaseInstance(mode, first, count, primcount, baseinstance);
     GLenum mode;
     GLint first;
     GLsizei count;
     GLsizei primcount;
     GLuint baseinstance;
CODE:
    if(! __glewDrawArraysInstancedBaseInstance) {
        croak("glDrawArraysInstancedBaseInstance not available on this machine");
    };
    glDrawArraysInstancedBaseInstance(mode, first, count, primcount, baseinstance);

SV *
glDrawArraysInstancedEXT(mode, start, count, primcount);
     GLenum mode;
     GLint start;
     GLsizei count;
     GLsizei primcount;
CODE:
    if(! __glewDrawArraysInstancedEXT) {
        croak("glDrawArraysInstancedEXT not available on this machine");
    };
    glDrawArraysInstancedEXT(mode, start, count, primcount);

SV *
glDrawBufferRegion(region, x, y, width, height, xDest, yDest);
     GLuint region;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLint xDest;
     GLint yDest;
CODE:
    if(! __glewDrawBufferRegion) {
        croak("glDrawBufferRegion not available on this machine");
    };
    glDrawBufferRegion(region, x, y, width, height, xDest, yDest);

SV *
glDrawBuffers(n, bufs);
     GLsizei n;
     const GLenum* bufs;
CODE:
    if(! __glewDrawBuffers) {
        croak("glDrawBuffers not available on this machine");
    };
    glDrawBuffers(n, bufs);

SV *
glDrawBuffersARB(n, bufs);
     GLsizei n;
     const GLenum* bufs;
CODE:
    if(! __glewDrawBuffersARB) {
        croak("glDrawBuffersARB not available on this machine");
    };
    glDrawBuffersARB(n, bufs);

SV *
glDrawBuffersATI(n, bufs);
     GLsizei n;
     const GLenum* bufs;
CODE:
    if(! __glewDrawBuffersATI) {
        croak("glDrawBuffersATI not available on this machine");
    };
    glDrawBuffersATI(n, bufs);

SV *
glDrawCommandsAddressNV(primitiveMode, indirects, sizes, count);
     GLenum primitiveMode;
     const GLuint64* indirects;
     const GLsizei* sizes;
     GLuint count;
CODE:
    if(! __glewDrawCommandsAddressNV) {
        croak("glDrawCommandsAddressNV not available on this machine");
    };
    glDrawCommandsAddressNV(primitiveMode, indirects, sizes, count);

SV *
glDrawCommandsNV(primitiveMode, buffer, indirects, sizes, count);
     GLenum primitiveMode;
     GLuint buffer;
     const GLintptr* indirects;
     const GLsizei* sizes;
     GLuint count;
CODE:
    if(! __glewDrawCommandsNV) {
        croak("glDrawCommandsNV not available on this machine");
    };
    glDrawCommandsNV(primitiveMode, buffer, indirects, sizes, count);

SV *
glDrawCommandsStatesAddressNV(indirects, sizes, states, fbos, count);
     const GLuint64* indirects;
     const GLsizei* sizes;
     const GLuint* states;
     const GLuint* fbos;
     GLuint count;
CODE:
    if(! __glewDrawCommandsStatesAddressNV) {
        croak("glDrawCommandsStatesAddressNV not available on this machine");
    };
    glDrawCommandsStatesAddressNV(indirects, sizes, states, fbos, count);

SV *
glDrawCommandsStatesNV(buffer, indirects, sizes, states, fbos, count);
     GLuint buffer;
     const GLintptr* indirects;
     const GLsizei* sizes;
     const GLuint* states;
     const GLuint* fbos;
     GLuint count;
CODE:
    if(! __glewDrawCommandsStatesNV) {
        croak("glDrawCommandsStatesNV not available on this machine");
    };
    glDrawCommandsStatesNV(buffer, indirects, sizes, states, fbos, count);

SV *
glDrawElementArrayAPPLE(mode, first, count);
     GLenum mode;
     GLint first;
     GLsizei count;
CODE:
    if(! __glewDrawElementArrayAPPLE) {
        croak("glDrawElementArrayAPPLE not available on this machine");
    };
    glDrawElementArrayAPPLE(mode, first, count);

SV *
glDrawElementArrayATI(mode, count);
     GLenum mode;
     GLsizei count;
CODE:
    if(! __glewDrawElementArrayATI) {
        croak("glDrawElementArrayATI not available on this machine");
    };
    glDrawElementArrayATI(mode, count);

SV *
glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLint basevertex;
CODE:
    if(! __glewDrawElementsBaseVertex) {
        croak("glDrawElementsBaseVertex not available on this machine");
    };
    glDrawElementsBaseVertex(mode, count, type, indices, basevertex);

SV *
glDrawElementsIndirect(mode, type, indirect);
     GLenum mode;
     GLenum type;
     const void *indirect;
CODE:
    if(! __glewDrawElementsIndirect) {
        croak("glDrawElementsIndirect not available on this machine");
    };
    glDrawElementsIndirect(mode, type, indirect);

SV *
glDrawElementsInstanced(mode, count, type, indices, primcount);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void* indices;
     GLsizei primcount;
CODE:
    if(! __glewDrawElementsInstanced) {
        croak("glDrawElementsInstanced not available on this machine");
    };
    glDrawElementsInstanced(mode, count, type, indices, primcount);

SV *
glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLsizei primcount;
CODE:
    if(! __glewDrawElementsInstancedANGLE) {
        croak("glDrawElementsInstancedANGLE not available on this machine");
    };
    glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);

SV *
glDrawElementsInstancedARB(mode, count, type, indices, primcount);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void* indices;
     GLsizei primcount;
CODE:
    if(! __glewDrawElementsInstancedARB) {
        croak("glDrawElementsInstancedARB not available on this machine");
    };
    glDrawElementsInstancedARB(mode, count, type, indices, primcount);

SV *
glDrawElementsInstancedBaseInstance(mode, count, type, indices, primcount, baseinstance);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLsizei primcount;
     GLuint baseinstance;
CODE:
    if(! __glewDrawElementsInstancedBaseInstance) {
        croak("glDrawElementsInstancedBaseInstance not available on this machine");
    };
    glDrawElementsInstancedBaseInstance(mode, count, type, indices, primcount, baseinstance);

SV *
glDrawElementsInstancedBaseVertex(mode, count, type, indices, primcount, basevertex);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLsizei primcount;
     GLint basevertex;
CODE:
    if(! __glewDrawElementsInstancedBaseVertex) {
        croak("glDrawElementsInstancedBaseVertex not available on this machine");
    };
    glDrawElementsInstancedBaseVertex(mode, count, type, indices, primcount, basevertex);

SV *
glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, primcount, basevertex, baseinstance);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLsizei primcount;
     GLint basevertex;
     GLuint baseinstance;
CODE:
    if(! __glewDrawElementsInstancedBaseVertexBaseInstance) {
        croak("glDrawElementsInstancedBaseVertexBaseInstance not available on this machine");
    };
    glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, primcount, basevertex, baseinstance);

SV *
glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLsizei primcount;
CODE:
    if(! __glewDrawElementsInstancedEXT) {
        croak("glDrawElementsInstancedEXT not available on this machine");
    };
    glDrawElementsInstancedEXT(mode, count, type, indices, primcount);

SV *
glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
     GLenum mode;
     GLuint start;
     GLuint end;
     GLint first;
     GLsizei count;
CODE:
    if(! __glewDrawRangeElementArrayAPPLE) {
        croak("glDrawRangeElementArrayAPPLE not available on this machine");
    };
    glDrawRangeElementArrayAPPLE(mode, start, end, first, count);

SV *
glDrawRangeElementArrayATI(mode, start, end, count);
     GLenum mode;
     GLuint start;
     GLuint end;
     GLsizei count;
CODE:
    if(! __glewDrawRangeElementArrayATI) {
        croak("glDrawRangeElementArrayATI not available on this machine");
    };
    glDrawRangeElementArrayATI(mode, start, end, count);

SV *
glDrawRangeElements(mode, start, end, count, type, indices);
     GLenum mode;
     GLuint start;
     GLuint end;
     GLsizei count;
     GLenum type;
     const void *indices;
CODE:
    if(! __glewDrawRangeElements) {
        croak("glDrawRangeElements not available on this machine");
    };
    glDrawRangeElements(mode, start, end, count, type, indices);

SV *
glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
     GLenum mode;
     GLuint start;
     GLuint end;
     GLsizei count;
     GLenum type;
     const void *indices;
     GLint basevertex;
CODE:
    if(! __glewDrawRangeElementsBaseVertex) {
        croak("glDrawRangeElementsBaseVertex not available on this machine");
    };
    glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);

SV *
glDrawRangeElementsEXT(mode, start, end, count, type, indices);
     GLenum mode;
     GLuint start;
     GLuint end;
     GLsizei count;
     GLenum type;
     const void *indices;
CODE:
    if(! __glewDrawRangeElementsEXT) {
        croak("glDrawRangeElementsEXT not available on this machine");
    };
    glDrawRangeElementsEXT(mode, start, end, count, type, indices);

SV *
glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
     GLuint texture;
     GLuint sampler;
     GLfloat x0;
     GLfloat y0;
     GLfloat x1;
     GLfloat y1;
     GLfloat z;
     GLfloat s0;
     GLfloat t0;
     GLfloat s1;
     GLfloat t1;
CODE:
    if(! __glewDrawTextureNV) {
        croak("glDrawTextureNV not available on this machine");
    };
    glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);

SV *
glDrawTransformFeedback(mode, id);
     GLenum mode;
     GLuint id;
CODE:
    if(! __glewDrawTransformFeedback) {
        croak("glDrawTransformFeedback not available on this machine");
    };
    glDrawTransformFeedback(mode, id);

SV *
glDrawTransformFeedbackInstanced(mode, id, primcount);
     GLenum mode;
     GLuint id;
     GLsizei primcount;
CODE:
    if(! __glewDrawTransformFeedbackInstanced) {
        croak("glDrawTransformFeedbackInstanced not available on this machine");
    };
    glDrawTransformFeedbackInstanced(mode, id, primcount);

SV *
glDrawTransformFeedbackNV(mode, id);
     GLenum mode;
     GLuint id;
CODE:
    if(! __glewDrawTransformFeedbackNV) {
        croak("glDrawTransformFeedbackNV not available on this machine");
    };
    glDrawTransformFeedbackNV(mode, id);

SV *
glDrawTransformFeedbackStream(mode, id, stream);
     GLenum mode;
     GLuint id;
     GLuint stream;
CODE:
    if(! __glewDrawTransformFeedbackStream) {
        croak("glDrawTransformFeedbackStream not available on this machine");
    };
    glDrawTransformFeedbackStream(mode, id, stream);

SV *
glDrawTransformFeedbackStreamInstanced(mode, id, stream, primcount);
     GLenum mode;
     GLuint id;
     GLuint stream;
     GLsizei primcount;
CODE:
    if(! __glewDrawTransformFeedbackStreamInstanced) {
        croak("glDrawTransformFeedbackStreamInstanced not available on this machine");
    };
    glDrawTransformFeedbackStreamInstanced(mode, id, stream, primcount);

SV *
glDrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
     GLuint64 vkImage;
     GLuint sampler;
     GLfloat x0;
     GLfloat y0;
     GLfloat x1;
     GLfloat y1;
     GLfloat z;
     GLfloat s0;
     GLfloat t0;
     GLfloat s1;
     GLfloat t1;
CODE:
    if(! __glewDrawVkImageNV) {
        croak("glDrawVkImageNV not available on this machine");
    };
    glDrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);

SV *
glEdgeFlagFormatNV(stride);
     GLsizei stride;
CODE:
    if(! __glewEdgeFlagFormatNV) {
        croak("glEdgeFlagFormatNV not available on this machine");
    };
    glEdgeFlagFormatNV(stride);

SV *
glEdgeFlagPointerEXT(stride, count, pointer);
     GLsizei stride;
     GLsizei count;
     const GLboolean* pointer;
CODE:
    if(! __glewEdgeFlagPointerEXT) {
        croak("glEdgeFlagPointerEXT not available on this machine");
    };
    glEdgeFlagPointerEXT(stride, count, pointer);

SV *
glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
     GLint stride;
     const GLboolean ** pointer;
     GLint ptrstride;
CODE:
    if(! __glewEdgeFlagPointerListIBM) {
        croak("glEdgeFlagPointerListIBM not available on this machine");
    };
    glEdgeFlagPointerListIBM(stride, pointer, ptrstride);

SV *
glElementPointerAPPLE(type, pointer);
     GLenum type;
     const void *pointer;
CODE:
    if(! __glewElementPointerAPPLE) {
        croak("glElementPointerAPPLE not available on this machine");
    };
    glElementPointerAPPLE(type, pointer);

SV *
glElementPointerATI(type, pointer);
     GLenum type;
     const void *pointer;
CODE:
    if(! __glewElementPointerATI) {
        croak("glElementPointerATI not available on this machine");
    };
    glElementPointerATI(type, pointer);

SV *
glEnableClientStateiEXT(array, index);
     GLenum array;
     GLuint index;
CODE:
    if(! __glewEnableClientStateiEXT) {
        croak("glEnableClientStateiEXT not available on this machine");
    };
    glEnableClientStateiEXT(array, index);

SV *
glEnableClientStateIndexedEXT(array, index);
     GLenum array;
     GLuint index;
CODE:
    if(! __glewEnableClientStateIndexedEXT) {
        croak("glEnableClientStateIndexedEXT not available on this machine");
    };
    glEnableClientStateIndexedEXT(array, index);

SV *
glEnablei(cap, index);
     GLenum cap;
     GLuint index;
CODE:
    if(! __glewEnablei) {
        croak("glEnablei not available on this machine");
    };
    glEnablei(cap, index);

SV *
glEnableIndexedEXT(target, index);
     GLenum target;
     GLuint index;
CODE:
    if(! __glewEnableIndexedEXT) {
        croak("glEnableIndexedEXT not available on this machine");
    };
    glEnableIndexedEXT(target, index);

SV *
glEnableVariantClientStateEXT(id);
     GLuint id;
CODE:
    if(! __glewEnableVariantClientStateEXT) {
        croak("glEnableVariantClientStateEXT not available on this machine");
    };
    glEnableVariantClientStateEXT(id);

SV *
glEnableVertexArrayAttrib(vaobj, index);
     GLuint vaobj;
     GLuint index;
CODE:
    if(! __glewEnableVertexArrayAttrib) {
        croak("glEnableVertexArrayAttrib not available on this machine");
    };
    glEnableVertexArrayAttrib(vaobj, index);

SV *
glEnableVertexArrayAttribEXT(vaobj, index);
     GLuint vaobj;
     GLuint index;
CODE:
    if(! __glewEnableVertexArrayAttribEXT) {
        croak("glEnableVertexArrayAttribEXT not available on this machine");
    };
    glEnableVertexArrayAttribEXT(vaobj, index);

SV *
glEnableVertexArrayEXT(vaobj, array);
     GLuint vaobj;
     GLenum array;
CODE:
    if(! __glewEnableVertexArrayEXT) {
        croak("glEnableVertexArrayEXT not available on this machine");
    };
    glEnableVertexArrayEXT(vaobj, array);

SV *
glEnableVertexAttribAPPLE(index, pname);
     GLuint index;
     GLenum pname;
CODE:
    if(! __glewEnableVertexAttribAPPLE) {
        croak("glEnableVertexAttribAPPLE not available on this machine");
    };
    glEnableVertexAttribAPPLE(index, pname);

SV *
glEnableVertexAttribArray(index);
     GLuint index;
CODE:
    if(! __glewEnableVertexAttribArray) {
        croak("glEnableVertexAttribArray not available on this machine");
    };
    glEnableVertexAttribArray(index);

SV *
glEnableVertexAttribArrayARB(index);
     GLuint index;
CODE:
    if(! __glewEnableVertexAttribArrayARB) {
        croak("glEnableVertexAttribArrayARB not available on this machine");
    };
    glEnableVertexAttribArrayARB(index);

SV *
glEndConditionalRender();
CODE:
    if(! __glewEndConditionalRender) {
        croak("glEndConditionalRender not available on this machine");
    };
    glEndConditionalRender();

SV *
glEndConditionalRenderNV();
CODE:
    if(! __glewEndConditionalRenderNV) {
        croak("glEndConditionalRenderNV not available on this machine");
    };
    glEndConditionalRenderNV();

SV *
glEndConditionalRenderNVX();
CODE:
    if(! __glewEndConditionalRenderNVX) {
        croak("glEndConditionalRenderNVX not available on this machine");
    };
    glEndConditionalRenderNVX();

SV *
glEndFragmentShaderATI();
CODE:
    if(! __glewEndFragmentShaderATI) {
        croak("glEndFragmentShaderATI not available on this machine");
    };
    glEndFragmentShaderATI();

SV *
glEndOcclusionQueryNV();
CODE:
    if(! __glewEndOcclusionQueryNV) {
        croak("glEndOcclusionQueryNV not available on this machine");
    };
    glEndOcclusionQueryNV();

SV *
glEndPerfMonitorAMD(monitor);
     GLuint monitor;
CODE:
    if(! __glewEndPerfMonitorAMD) {
        croak("glEndPerfMonitorAMD not available on this machine");
    };
    glEndPerfMonitorAMD(monitor);

SV *
glEndPerfQueryINTEL(queryHandle);
     GLuint queryHandle;
CODE:
    if(! __glewEndPerfQueryINTEL) {
        croak("glEndPerfQueryINTEL not available on this machine");
    };
    glEndPerfQueryINTEL(queryHandle);

SV *
glEndQuery(target);
     GLenum target;
CODE:
    if(! __glewEndQuery) {
        croak("glEndQuery not available on this machine");
    };
    glEndQuery(target);

SV *
glEndQueryANGLE(target);
     GLenum target;
CODE:
    if(! __glewEndQueryANGLE) {
        croak("glEndQueryANGLE not available on this machine");
    };
    glEndQueryANGLE(target);

SV *
glEndQueryARB(target);
     GLenum target;
CODE:
    if(! __glewEndQueryARB) {
        croak("glEndQueryARB not available on this machine");
    };
    glEndQueryARB(target);

SV *
glEndQueryIndexed(target, index);
     GLenum target;
     GLuint index;
CODE:
    if(! __glewEndQueryIndexed) {
        croak("glEndQueryIndexed not available on this machine");
    };
    glEndQueryIndexed(target, index);

SV *
glEndSceneEXT();
CODE:
    if(! __glewEndSceneEXT) {
        croak("glEndSceneEXT not available on this machine");
    };
    glEndSceneEXT();

SV *
glEndTransformFeedback();
CODE:
    if(! __glewEndTransformFeedback) {
        croak("glEndTransformFeedback not available on this machine");
    };
    glEndTransformFeedback();

SV *
glEndTransformFeedbackEXT();
CODE:
    if(! __glewEndTransformFeedbackEXT) {
        croak("glEndTransformFeedbackEXT not available on this machine");
    };
    glEndTransformFeedbackEXT();

SV *
glEndTransformFeedbackNV();
CODE:
    if(! __glewEndTransformFeedbackNV) {
        croak("glEndTransformFeedbackNV not available on this machine");
    };
    glEndTransformFeedbackNV();

SV *
glEndVertexShaderEXT();
CODE:
    if(! __glewEndVertexShaderEXT) {
        croak("glEndVertexShaderEXT not available on this machine");
    };
    glEndVertexShaderEXT();

SV *
glEndVideoCaptureNV(video_capture_slot);
     GLuint video_capture_slot;
CODE:
    if(! __glewEndVideoCaptureNV) {
        croak("glEndVideoCaptureNV not available on this machine");
    };
    glEndVideoCaptureNV(video_capture_slot);

SV *
glEvalMapsNV(target, mode);
     GLenum target;
     GLenum mode;
CODE:
    if(! __glewEvalMapsNV) {
        croak("glEvalMapsNV not available on this machine");
    };
    glEvalMapsNV(target, mode);

SV *
glExecuteProgramNV(target, id, params);
     GLenum target;
     GLuint id;
     const GLfloat* params;
CODE:
    if(! __glewExecuteProgramNV) {
        croak("glExecuteProgramNV not available on this machine");
    };
    glExecuteProgramNV(target, id, params);

SV *
glExtractComponentEXT(res, src, num);
     GLuint res;
     GLuint src;
     GLuint num;
CODE:
    if(! __glewExtractComponentEXT) {
        croak("glExtractComponentEXT not available on this machine");
    };
    glExtractComponentEXT(res, src, num);

GLsync
glFenceSync(condition,flags);
     GLenum condition;
    GLbitfield flags;
CODE:
    if(! __glewFenceSync) {
        croak("glFenceSync not available on this machine");
    };
    RETVAL = glFenceSync(condition,flags);
OUTPUT:
    RETVAL

SV *
glFinalCombinerInputNV(variable, input, mapping, componentUsage);
     GLenum variable;
     GLenum input;
     GLenum mapping;
     GLenum componentUsage;
CODE:
    if(! __glewFinalCombinerInputNV) {
        croak("glFinalCombinerInputNV not available on this machine");
    };
    glFinalCombinerInputNV(variable, input, mapping, componentUsage);

GLint
glFinishAsyncSGIX(markerp);
     GLuint* markerp;
CODE:
    if(! __glewFinishAsyncSGIX) {
        croak("glFinishAsyncSGIX not available on this machine");
    };
    RETVAL = glFinishAsyncSGIX(markerp);
OUTPUT:
    RETVAL

SV *
glFinishFenceAPPLE(fence);
     GLuint fence;
CODE:
    if(! __glewFinishFenceAPPLE) {
        croak("glFinishFenceAPPLE not available on this machine");
    };
    glFinishFenceAPPLE(fence);

SV *
glFinishFenceNV(fence);
     GLuint fence;
CODE:
    if(! __glewFinishFenceNV) {
        croak("glFinishFenceNV not available on this machine");
    };
    glFinishFenceNV(fence);

SV *
glFinishObjectAPPLE(object, name);
     GLenum object;
     GLint name;
CODE:
    if(! __glewFinishObjectAPPLE) {
        croak("glFinishObjectAPPLE not available on this machine");
    };
    glFinishObjectAPPLE(object, name);

SV *
glFinishTextureSUNX();
CODE:
    if(! __glewFinishTextureSUNX) {
        croak("glFinishTextureSUNX not available on this machine");
    };
    glFinishTextureSUNX();

SV *
glFlushMappedBufferRange(target, offset, length);
     GLenum target;
     GLintptr offset;
     GLsizeiptr length;
CODE:
    if(! __glewFlushMappedBufferRange) {
        croak("glFlushMappedBufferRange not available on this machine");
    };
    glFlushMappedBufferRange(target, offset, length);

SV *
glFlushMappedBufferRangeAPPLE(target, offset, size);
     GLenum target;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewFlushMappedBufferRangeAPPLE) {
        croak("glFlushMappedBufferRangeAPPLE not available on this machine");
    };
    glFlushMappedBufferRangeAPPLE(target, offset, size);

SV *
glFlushMappedNamedBufferRange(buffer, offset, length);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr length;
CODE:
    if(! __glewFlushMappedNamedBufferRange) {
        croak("glFlushMappedNamedBufferRange not available on this machine");
    };
    glFlushMappedNamedBufferRange(buffer, offset, length);

SV *
glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr length;
CODE:
    if(! __glewFlushMappedNamedBufferRangeEXT) {
        croak("glFlushMappedNamedBufferRangeEXT not available on this machine");
    };
    glFlushMappedNamedBufferRangeEXT(buffer, offset, length);

SV *
glFlushPixelDataRangeNV(target);
     GLenum target;
CODE:
    if(! __glewFlushPixelDataRangeNV) {
        croak("glFlushPixelDataRangeNV not available on this machine");
    };
    glFlushPixelDataRangeNV(target);

SV *
glFlushRasterSGIX();
CODE:
    if(! __glewFlushRasterSGIX) {
        croak("glFlushRasterSGIX not available on this machine");
    };
    glFlushRasterSGIX();

SV *
glFlushVertexArrayRangeAPPLE(length, pointer);
     GLsizei length;
     void *pointer;
CODE:
    if(! __glewFlushVertexArrayRangeAPPLE) {
        croak("glFlushVertexArrayRangeAPPLE not available on this machine");
    };
    glFlushVertexArrayRangeAPPLE(length, pointer);

SV *
glFlushVertexArrayRangeNV();
CODE:
    if(! __glewFlushVertexArrayRangeNV) {
        croak("glFlushVertexArrayRangeNV not available on this machine");
    };
    glFlushVertexArrayRangeNV();

SV *
glFogCoordd(coord);
     GLdouble coord;
CODE:
    if(! __glewFogCoordd) {
        croak("glFogCoordd not available on this machine");
    };
    glFogCoordd(coord);

SV *
glFogCoorddEXT(coord);
     GLdouble coord;
CODE:
    if(! __glewFogCoorddEXT) {
        croak("glFogCoorddEXT not available on this machine");
    };
    glFogCoorddEXT(coord);

SV *
glFogCoorddv(coord);
     const GLdouble *coord;
CODE:
    if(! __glewFogCoorddv) {
        croak("glFogCoorddv not available on this machine");
    };
    glFogCoorddv(coord);

SV *
glFogCoorddvEXT(coord);
     const GLdouble *coord;
CODE:
    if(! __glewFogCoorddvEXT) {
        croak("glFogCoorddvEXT not available on this machine");
    };
    glFogCoorddvEXT(coord);

SV *
glFogCoordf(coord);
     GLfloat coord;
CODE:
    if(! __glewFogCoordf) {
        croak("glFogCoordf not available on this machine");
    };
    glFogCoordf(coord);

SV *
glFogCoordfEXT(coord);
     GLfloat coord;
CODE:
    if(! __glewFogCoordfEXT) {
        croak("glFogCoordfEXT not available on this machine");
    };
    glFogCoordfEXT(coord);

SV *
glFogCoordFormatNV(type, stride);
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewFogCoordFormatNV) {
        croak("glFogCoordFormatNV not available on this machine");
    };
    glFogCoordFormatNV(type, stride);

SV *
glFogCoordfv(coord);
     const GLfloat *coord;
CODE:
    if(! __glewFogCoordfv) {
        croak("glFogCoordfv not available on this machine");
    };
    glFogCoordfv(coord);

SV *
glFogCoordfvEXT(coord);
     const GLfloat *coord;
CODE:
    if(! __glewFogCoordfvEXT) {
        croak("glFogCoordfvEXT not available on this machine");
    };
    glFogCoordfvEXT(coord);

SV *
glFogCoordhNV(fog);
     GLhalf fog;
CODE:
    if(! __glewFogCoordhNV) {
        croak("glFogCoordhNV not available on this machine");
    };
    glFogCoordhNV(fog);

SV *
glFogCoordhvNV(fog);
     const GLhalf* fog;
CODE:
    if(! __glewFogCoordhvNV) {
        croak("glFogCoordhvNV not available on this machine");
    };
    glFogCoordhvNV(fog);

SV *
glFogCoordPointer(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewFogCoordPointer) {
        croak("glFogCoordPointer not available on this machine");
    };
    glFogCoordPointer(type, stride, pointer);

SV *
glFogCoordPointerEXT(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewFogCoordPointerEXT) {
        croak("glFogCoordPointerEXT not available on this machine");
    };
    glFogCoordPointerEXT(type, stride, pointer);

SV *
glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewFogCoordPointerListIBM) {
        croak("glFogCoordPointerListIBM not available on this machine");
    };
    glFogCoordPointerListIBM(type, stride, pointer, ptrstride);

SV *
glFogFuncSGIS(n, points);
     GLsizei n;
     const GLfloat* points;
CODE:
    if(! __glewFogFuncSGIS) {
        croak("glFogFuncSGIS not available on this machine");
    };
    glFogFuncSGIS(n, points);

SV *
glFogx(pname, param);
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewFogx) {
        croak("glFogx not available on this machine");
    };
    glFogx(pname, param);

SV *
glFogxv(pname, params);
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewFogxv) {
        croak("glFogxv not available on this machine");
    };
    glFogxv(pname, params);

SV *
glFragmentColorMaterialEXT(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    if(! __glewFragmentColorMaterialEXT) {
        croak("glFragmentColorMaterialEXT not available on this machine");
    };
    glFragmentColorMaterialEXT(face, mode);

SV *
glFragmentColorMaterialSGIX(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    if(! __glewFragmentColorMaterialSGIX) {
        croak("glFragmentColorMaterialSGIX not available on this machine");
    };
    glFragmentColorMaterialSGIX(face, mode);

SV *
glFragmentCoverageColorNV(color);
     GLuint color;
CODE:
    if(! __glewFragmentCoverageColorNV) {
        croak("glFragmentCoverageColorNV not available on this machine");
    };
    glFragmentCoverageColorNV(color);

SV *
glFragmentLightfEXT(light, pname, param);
     GLenum light;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewFragmentLightfEXT) {
        croak("glFragmentLightfEXT not available on this machine");
    };
    glFragmentLightfEXT(light, pname, param);

SV *
glFragmentLightfSGIX(light, pname, param);
     GLenum light;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewFragmentLightfSGIX) {
        croak("glFragmentLightfSGIX not available on this machine");
    };
    glFragmentLightfSGIX(light, pname, param);

SV *
glFragmentLightfvEXT(light, pname, params);
     GLenum light;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewFragmentLightfvEXT) {
        croak("glFragmentLightfvEXT not available on this machine");
    };
    glFragmentLightfvEXT(light, pname, params);

SV *
glFragmentLightfvSGIX(light, pname, params);
     GLenum light;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewFragmentLightfvSGIX) {
        croak("glFragmentLightfvSGIX not available on this machine");
    };
    glFragmentLightfvSGIX(light, pname, params);

SV *
glFragmentLightiEXT(light, pname, param);
     GLenum light;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewFragmentLightiEXT) {
        croak("glFragmentLightiEXT not available on this machine");
    };
    glFragmentLightiEXT(light, pname, param);

SV *
glFragmentLightiSGIX(light, pname, param);
     GLenum light;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewFragmentLightiSGIX) {
        croak("glFragmentLightiSGIX not available on this machine");
    };
    glFragmentLightiSGIX(light, pname, param);

SV *
glFragmentLightivEXT(light, pname, params);
     GLenum light;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewFragmentLightivEXT) {
        croak("glFragmentLightivEXT not available on this machine");
    };
    glFragmentLightivEXT(light, pname, params);

SV *
glFragmentLightivSGIX(light, pname, params);
     GLenum light;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewFragmentLightivSGIX) {
        croak("glFragmentLightivSGIX not available on this machine");
    };
    glFragmentLightivSGIX(light, pname, params);

SV *
glFragmentLightModelfEXT(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewFragmentLightModelfEXT) {
        croak("glFragmentLightModelfEXT not available on this machine");
    };
    glFragmentLightModelfEXT(pname, param);

SV *
glFragmentLightModelfSGIX(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewFragmentLightModelfSGIX) {
        croak("glFragmentLightModelfSGIX not available on this machine");
    };
    glFragmentLightModelfSGIX(pname, param);

SV *
glFragmentLightModelfvEXT(pname, params);
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewFragmentLightModelfvEXT) {
        croak("glFragmentLightModelfvEXT not available on this machine");
    };
    glFragmentLightModelfvEXT(pname, params);

SV *
glFragmentLightModelfvSGIX(pname, params);
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewFragmentLightModelfvSGIX) {
        croak("glFragmentLightModelfvSGIX not available on this machine");
    };
    glFragmentLightModelfvSGIX(pname, params);

SV *
glFragmentLightModeliEXT(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewFragmentLightModeliEXT) {
        croak("glFragmentLightModeliEXT not available on this machine");
    };
    glFragmentLightModeliEXT(pname, param);

SV *
glFragmentLightModeliSGIX(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewFragmentLightModeliSGIX) {
        croak("glFragmentLightModeliSGIX not available on this machine");
    };
    glFragmentLightModeliSGIX(pname, param);

SV *
glFragmentLightModelivEXT(pname, params);
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewFragmentLightModelivEXT) {
        croak("glFragmentLightModelivEXT not available on this machine");
    };
    glFragmentLightModelivEXT(pname, params);

SV *
glFragmentLightModelivSGIX(pname, params);
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewFragmentLightModelivSGIX) {
        croak("glFragmentLightModelivSGIX not available on this machine");
    };
    glFragmentLightModelivSGIX(pname, params);

SV *
glFragmentMaterialfEXT(face, pname, param);
     GLenum face;
     GLenum pname;
     const GLfloat param;
CODE:
    if(! __glewFragmentMaterialfEXT) {
        croak("glFragmentMaterialfEXT not available on this machine");
    };
    glFragmentMaterialfEXT(face, pname, param);

SV *
glFragmentMaterialfSGIX(face, pname, param);
     GLenum face;
     GLenum pname;
     const GLfloat param;
CODE:
    if(! __glewFragmentMaterialfSGIX) {
        croak("glFragmentMaterialfSGIX not available on this machine");
    };
    glFragmentMaterialfSGIX(face, pname, param);

SV *
glFragmentMaterialfvEXT(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewFragmentMaterialfvEXT) {
        croak("glFragmentMaterialfvEXT not available on this machine");
    };
    glFragmentMaterialfvEXT(face, pname, params);

SV *
glFragmentMaterialfvSGIX(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewFragmentMaterialfvSGIX) {
        croak("glFragmentMaterialfvSGIX not available on this machine");
    };
    glFragmentMaterialfvSGIX(face, pname, params);

SV *
glFragmentMaterialiEXT(face, pname, param);
     GLenum face;
     GLenum pname;
     const GLint param;
CODE:
    if(! __glewFragmentMaterialiEXT) {
        croak("glFragmentMaterialiEXT not available on this machine");
    };
    glFragmentMaterialiEXT(face, pname, param);

SV *
glFragmentMaterialiSGIX(face, pname, param);
     GLenum face;
     GLenum pname;
     const GLint param;
CODE:
    if(! __glewFragmentMaterialiSGIX) {
        croak("glFragmentMaterialiSGIX not available on this machine");
    };
    glFragmentMaterialiSGIX(face, pname, param);

SV *
glFragmentMaterialivEXT(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewFragmentMaterialivEXT) {
        croak("glFragmentMaterialivEXT not available on this machine");
    };
    glFragmentMaterialivEXT(face, pname, params);

SV *
glFragmentMaterialivSGIX(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewFragmentMaterialivSGIX) {
        croak("glFragmentMaterialivSGIX not available on this machine");
    };
    glFragmentMaterialivSGIX(face, pname, params);

SV *
glFramebufferDrawBufferEXT(framebuffer, mode);
     GLuint framebuffer;
     GLenum mode;
CODE:
    if(! __glewFramebufferDrawBufferEXT) {
        croak("glFramebufferDrawBufferEXT not available on this machine");
    };
    glFramebufferDrawBufferEXT(framebuffer, mode);

SV *
glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
     GLuint framebuffer;
     GLsizei n;
     const GLenum* bufs;
CODE:
    if(! __glewFramebufferDrawBuffersEXT) {
        croak("glFramebufferDrawBuffersEXT not available on this machine");
    };
    glFramebufferDrawBuffersEXT(framebuffer, n, bufs);

SV *
glFramebufferParameteri(target, pname, param);
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewFramebufferParameteri) {
        croak("glFramebufferParameteri not available on this machine");
    };
    glFramebufferParameteri(target, pname, param);

SV *
glFramebufferReadBufferEXT(framebuffer, mode);
     GLuint framebuffer;
     GLenum mode;
CODE:
    if(! __glewFramebufferReadBufferEXT) {
        croak("glFramebufferReadBufferEXT not available on this machine");
    };
    glFramebufferReadBufferEXT(framebuffer, mode);

SV *
glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
     GLenum target;
     GLenum attachment;
     GLenum renderbuffertarget;
     GLuint renderbuffer;
CODE:
    if(! __glewFramebufferRenderbuffer) {
        croak("glFramebufferRenderbuffer not available on this machine");
    };
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);

SV *
glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
     GLenum target;
     GLenum attachment;
     GLenum renderbuffertarget;
     GLuint renderbuffer;
CODE:
    if(! __glewFramebufferRenderbufferEXT) {
        croak("glFramebufferRenderbufferEXT not available on this machine");
    };
    glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);

SV *
glFramebufferSampleLocationsfvARB(target, start, count, v);
     GLenum target;
     GLuint start;
     GLsizei count;
     const GLfloat* v;
CODE:
    if(! __glewFramebufferSampleLocationsfvARB) {
        croak("glFramebufferSampleLocationsfvARB not available on this machine");
    };
    glFramebufferSampleLocationsfvARB(target, start, count, v);

SV *
glFramebufferSampleLocationsfvNV(target, start, count, v);
     GLenum target;
     GLuint start;
     GLsizei count;
     const GLfloat* v;
CODE:
    if(! __glewFramebufferSampleLocationsfvNV) {
        croak("glFramebufferSampleLocationsfvNV not available on this machine");
    };
    glFramebufferSampleLocationsfvNV(target, start, count, v);

SV *
glFramebufferTexture(target, attachment, texture, level);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTexture) {
        croak("glFramebufferTexture not available on this machine");
    };
    glFramebufferTexture(target, attachment, texture, level);

SV *
glFramebufferTexture1D(target, attachment, textarget, texture, level);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTexture1D) {
        croak("glFramebufferTexture1D not available on this machine");
    };
    glFramebufferTexture1D(target, attachment, textarget, texture, level);

SV *
glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTexture1DEXT) {
        croak("glFramebufferTexture1DEXT not available on this machine");
    };
    glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);

SV *
glFramebufferTexture2D(target, attachment, textarget, texture, level);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTexture2D) {
        croak("glFramebufferTexture2D not available on this machine");
    };
    glFramebufferTexture2D(target, attachment, textarget, texture, level);

SV *
glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTexture2DEXT) {
        croak("glFramebufferTexture2DEXT not available on this machine");
    };
    glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);

SV *
glFramebufferTexture3D(target, attachment, textarget, texture, level, layer);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
     GLint layer;
CODE:
    if(! __glewFramebufferTexture3D) {
        croak("glFramebufferTexture3D not available on this machine");
    };
    glFramebufferTexture3D(target, attachment, textarget, texture, level, layer);

SV *
glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
     GLenum target;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
     GLint zoffset;
CODE:
    if(! __glewFramebufferTexture3DEXT) {
        croak("glFramebufferTexture3DEXT not available on this machine");
    };
    glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);

SV *
glFramebufferTextureARB(target, attachment, texture, level);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTextureARB) {
        croak("glFramebufferTextureARB not available on this machine");
    };
    glFramebufferTextureARB(target, attachment, texture, level);

SV *
glFramebufferTextureEXT(target, attachment, texture, level);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewFramebufferTextureEXT) {
        croak("glFramebufferTextureEXT not available on this machine");
    };
    glFramebufferTextureEXT(target, attachment, texture, level);

SV *
glFramebufferTextureFaceARB(target, attachment, texture, level, face);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLenum face;
CODE:
    if(! __glewFramebufferTextureFaceARB) {
        croak("glFramebufferTextureFaceARB not available on this machine");
    };
    glFramebufferTextureFaceARB(target, attachment, texture, level, face);

SV *
glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLenum face;
CODE:
    if(! __glewFramebufferTextureFaceEXT) {
        croak("glFramebufferTextureFaceEXT not available on this machine");
    };
    glFramebufferTextureFaceEXT(target, attachment, texture, level, face);

SV *
glFramebufferTextureLayer(target,attachment, texture,level,layer);
     GLenum target;
    GLenum attachment;
     GLuint texture;
    GLint level;
    GLint layer;
CODE:
    if(! __glewFramebufferTextureLayer) {
        croak("glFramebufferTextureLayer not available on this machine");
    };
    glFramebufferTextureLayer(target,attachment, texture,level,layer);

SV *
glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLint layer;
CODE:
    if(! __glewFramebufferTextureLayerARB) {
        croak("glFramebufferTextureLayerARB not available on this machine");
    };
    glFramebufferTextureLayerARB(target, attachment, texture, level, layer);

SV *
glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLint layer;
CODE:
    if(! __glewFramebufferTextureLayerEXT) {
        croak("glFramebufferTextureLayerEXT not available on this machine");
    };
    glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);

SV *
glFramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
     GLenum target;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLint baseViewIndex;
     GLsizei numViews;
CODE:
    if(! __glewFramebufferTextureMultiviewOVR) {
        croak("glFramebufferTextureMultiviewOVR not available on this machine");
    };
    glFramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);

SV *
glFrameTerminatorGREMEDY();
CODE:
    if(! __glewFrameTerminatorGREMEDY) {
        croak("glFrameTerminatorGREMEDY not available on this machine");
    };
    glFrameTerminatorGREMEDY();

SV *
glFrameZoomSGIX(factor);
     GLint factor;
CODE:
    if(! __glewFrameZoomSGIX) {
        croak("glFrameZoomSGIX not available on this machine");
    };
    glFrameZoomSGIX(factor);

SV *
glFreeObjectBufferATI(buffer);
     GLuint buffer;
CODE:
    if(! __glewFreeObjectBufferATI) {
        croak("glFreeObjectBufferATI not available on this machine");
    };
    glFreeObjectBufferATI(buffer);

SV *
glFrustumf(left, right, bottom, top, zNear, zFar);
     GLfloat left;
     GLfloat right;
     GLfloat bottom;
     GLfloat top;
     GLfloat zNear;
     GLfloat zFar;
CODE:
    if(! __glewFrustumf) {
        croak("glFrustumf not available on this machine");
    };
    glFrustumf(left, right, bottom, top, zNear, zFar);

SV *
glFrustumfOES(l, r, b, t, n, f);
     GLfloat l;
     GLfloat r;
     GLfloat b;
     GLfloat t;
     GLfloat n;
     GLfloat f;
CODE:
    if(! __glewFrustumfOES) {
        croak("glFrustumfOES not available on this machine");
    };
    glFrustumfOES(l, r, b, t, n, f);

SV *
glFrustumx(left, right, bottom, top, zNear, zFar);
     GLfixed left;
     GLfixed right;
     GLfixed bottom;
     GLfixed top;
     GLfixed zNear;
     GLfixed zFar;
CODE:
    if(! __glewFrustumx) {
        croak("glFrustumx not available on this machine");
    };
    glFrustumx(left, right, bottom, top, zNear, zFar);

GLuint
glGenAsyncMarkersSGIX(range);
     GLsizei range;
CODE:
    if(! __glewGenAsyncMarkersSGIX) {
        croak("glGenAsyncMarkersSGIX not available on this machine");
    };
    RETVAL = glGenAsyncMarkersSGIX(range);
OUTPUT:
    RETVAL

SV *
glGenBuffers(n, buffers);
     GLsizei n;
     GLuint* buffers;
CODE:
    if(! __glewGenBuffers) {
        croak("glGenBuffers not available on this machine");
    };
    glGenBuffers(n, buffers);

SV *
glGenBuffersARB(n, buffers);
     GLsizei n;
     GLuint* buffers;
CODE:
    if(! __glewGenBuffersARB) {
        croak("glGenBuffersARB not available on this machine");
    };
    glGenBuffersARB(n, buffers);

SV *
glGenerateMipmap(target);
     GLenum target;
CODE:
    if(! __glewGenerateMipmap) {
        croak("glGenerateMipmap not available on this machine");
    };
    glGenerateMipmap(target);

SV *
glGenerateMipmapEXT(target);
     GLenum target;
CODE:
    if(! __glewGenerateMipmapEXT) {
        croak("glGenerateMipmapEXT not available on this machine");
    };
    glGenerateMipmapEXT(target);

SV *
glGenerateMultiTexMipmapEXT(texunit, target);
     GLenum texunit;
     GLenum target;
CODE:
    if(! __glewGenerateMultiTexMipmapEXT) {
        croak("glGenerateMultiTexMipmapEXT not available on this machine");
    };
    glGenerateMultiTexMipmapEXT(texunit, target);

SV *
glGenerateTextureMipmap(texture);
     GLuint texture;
CODE:
    if(! __glewGenerateTextureMipmap) {
        croak("glGenerateTextureMipmap not available on this machine");
    };
    glGenerateTextureMipmap(texture);

SV *
glGenerateTextureMipmapEXT(texture, target);
     GLuint texture;
     GLenum target;
CODE:
    if(! __glewGenerateTextureMipmapEXT) {
        croak("glGenerateTextureMipmapEXT not available on this machine");
    };
    glGenerateTextureMipmapEXT(texture, target);

SV *
glGenFencesAPPLE(n, fences);
     GLsizei n;
     GLuint* fences;
CODE:
    if(! __glewGenFencesAPPLE) {
        croak("glGenFencesAPPLE not available on this machine");
    };
    glGenFencesAPPLE(n, fences);

SV *
glGenFencesNV(n, fences);
     GLsizei n;
     GLuint* fences;
CODE:
    if(! __glewGenFencesNV) {
        croak("glGenFencesNV not available on this machine");
    };
    glGenFencesNV(n, fences);

GLuint
glGenFragmentShadersATI(range);
     GLuint range;
CODE:
    if(! __glewGenFragmentShadersATI) {
        croak("glGenFragmentShadersATI not available on this machine");
    };
    RETVAL = glGenFragmentShadersATI(range);
OUTPUT:
    RETVAL

SV *
glGenFramebuffers(n, framebuffers);
     GLsizei n;
     GLuint* framebuffers;
CODE:
    if(! __glewGenFramebuffers) {
        croak("glGenFramebuffers not available on this machine");
    };
    glGenFramebuffers(n, framebuffers);

SV *
glGenFramebuffersEXT(n, framebuffers);
     GLsizei n;
     GLuint* framebuffers;
CODE:
    if(! __glewGenFramebuffersEXT) {
        croak("glGenFramebuffersEXT not available on this machine");
    };
    glGenFramebuffersEXT(n, framebuffers);

SV *
glGenNamesAMD(identifier, num, names);
     GLenum identifier;
     GLuint num;
     GLuint* names;
CODE:
    if(! __glewGenNamesAMD) {
        croak("glGenNamesAMD not available on this machine");
    };
    glGenNamesAMD(identifier, num, names);

SV *
glGenOcclusionQueriesNV(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenOcclusionQueriesNV) {
        croak("glGenOcclusionQueriesNV not available on this machine");
    };
    glGenOcclusionQueriesNV(n, ids);

GLuint
glGenPathsNV(range);
     GLsizei range;
CODE:
    if(! __glewGenPathsNV) {
        croak("glGenPathsNV not available on this machine");
    };
    RETVAL = glGenPathsNV(range);
OUTPUT:
    RETVAL

SV *
glGenPerfMonitorsAMD(n, monitors);
     GLsizei n;
     GLuint* monitors;
CODE:
    if(! __glewGenPerfMonitorsAMD) {
        croak("glGenPerfMonitorsAMD not available on this machine");
    };
    glGenPerfMonitorsAMD(n, monitors);

SV *
glGenProgramPipelines(n, pipelines);
     GLsizei n;
     GLuint* pipelines;
CODE:
    if(! __glewGenProgramPipelines) {
        croak("glGenProgramPipelines not available on this machine");
    };
    glGenProgramPipelines(n, pipelines);

SV *
glGenProgramsARB(n, programs);
     GLsizei n;
     GLuint* programs;
CODE:
    if(! __glewGenProgramsARB) {
        croak("glGenProgramsARB not available on this machine");
    };
    glGenProgramsARB(n, programs);

SV *
glGenProgramsNV(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenProgramsNV) {
        croak("glGenProgramsNV not available on this machine");
    };
    glGenProgramsNV(n, ids);

SV *
glGenQueries(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenQueries) {
        croak("glGenQueries not available on this machine");
    };
    glGenQueries(n, ids);

SV *
glGenQueriesANGLE(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenQueriesANGLE) {
        croak("glGenQueriesANGLE not available on this machine");
    };
    glGenQueriesANGLE(n, ids);

SV *
glGenQueriesARB(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenQueriesARB) {
        croak("glGenQueriesARB not available on this machine");
    };
    glGenQueriesARB(n, ids);

SV *
glGenRenderbuffers(n, renderbuffers);
     GLsizei n;
     GLuint* renderbuffers;
CODE:
    if(! __glewGenRenderbuffers) {
        croak("glGenRenderbuffers not available on this machine");
    };
    glGenRenderbuffers(n, renderbuffers);

SV *
glGenRenderbuffersEXT(n, renderbuffers);
     GLsizei n;
     GLuint* renderbuffers;
CODE:
    if(! __glewGenRenderbuffersEXT) {
        croak("glGenRenderbuffersEXT not available on this machine");
    };
    glGenRenderbuffersEXT(n, renderbuffers);

SV *
glGenSamplers(count, samplers);
     GLsizei count;
     GLuint* samplers;
CODE:
    if(! __glewGenSamplers) {
        croak("glGenSamplers not available on this machine");
    };
    glGenSamplers(count, samplers);

GLuint
glGenSymbolsEXT(dataType, storageType, range, components);
     GLenum dataType;
     GLenum storageType;
     GLenum range;
     GLuint components;
CODE:
    if(! __glewGenSymbolsEXT) {
        croak("glGenSymbolsEXT not available on this machine");
    };
    RETVAL = glGenSymbolsEXT(dataType, storageType, range, components);
OUTPUT:
    RETVAL

SV *
glGenTexturesEXT(n, textures);
     GLsizei n;
     GLuint* textures;
CODE:
    if(! __glewGenTexturesEXT) {
        croak("glGenTexturesEXT not available on this machine");
    };
    glGenTexturesEXT(n, textures);

SV *
glGenTransformFeedbacks(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenTransformFeedbacks) {
        croak("glGenTransformFeedbacks not available on this machine");
    };
    glGenTransformFeedbacks(n, ids);

SV *
glGenTransformFeedbacksNV(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewGenTransformFeedbacksNV) {
        croak("glGenTransformFeedbacksNV not available on this machine");
    };
    glGenTransformFeedbacksNV(n, ids);

SV *
glGenVertexArrays(n, arrays);
     GLsizei n;
     GLuint* arrays;
CODE:
    if(! __glewGenVertexArrays) {
        croak("glGenVertexArrays not available on this machine");
    };
    glGenVertexArrays(n, arrays);

SV *
glGenVertexArraysAPPLE(n, arrays);
     GLsizei n;
     const GLuint* arrays;
CODE:
    if(! __glewGenVertexArraysAPPLE) {
        croak("glGenVertexArraysAPPLE not available on this machine");
    };
    glGenVertexArraysAPPLE(n, arrays);

GLuint
glGenVertexShadersEXT(range);
     GLuint range;
CODE:
    if(! __glewGenVertexShadersEXT) {
        croak("glGenVertexShadersEXT not available on this machine");
    };
    RETVAL = glGenVertexShadersEXT(range);
OUTPUT:
    RETVAL

SV *
glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
     GLuint program;
     GLuint bufferIndex;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetActiveAtomicCounterBufferiv) {
        croak("glGetActiveAtomicCounterBufferiv not available on this machine");
    };
    glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);

SV *
glGetActiveAttrib(program, index, maxLength, length, size, type, name);
     GLuint program;
     GLuint index;
     GLsizei maxLength;
     GLsizei* length;
     GLint* size;
     GLenum* type;
     GLchar* name;
CODE:
    if(! __glewGetActiveAttrib) {
        croak("glGetActiveAttrib not available on this machine");
    };
    glGetActiveAttrib(program, index, maxLength, length, size, type, name);

SV *
glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
     GLhandleARB programObj;
     GLuint index;
     GLsizei maxLength;
     GLsizei* length;
     GLint *size;
     GLenum *type;
     GLcharARB *name;
CODE:
    if(! __glewGetActiveAttribARB) {
        croak("glGetActiveAttribARB not available on this machine");
    };
    glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);

SV *
glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
     GLuint program;
     GLenum shadertype;
     GLuint index;
     GLsizei bufsize;
     GLsizei* length;
     GLchar *name;
CODE:
    if(! __glewGetActiveSubroutineName) {
        croak("glGetActiveSubroutineName not available on this machine");
    };
    glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);

SV *
glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
     GLuint program;
     GLenum shadertype;
     GLuint index;
     GLenum pname;
     GLint* values;
CODE:
    if(! __glewGetActiveSubroutineUniformiv) {
        croak("glGetActiveSubroutineUniformiv not available on this machine");
    };
    glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);

SV *
glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
     GLuint program;
     GLenum shadertype;
     GLuint index;
     GLsizei bufsize;
     GLsizei* length;
     GLchar *name;
CODE:
    if(! __glewGetActiveSubroutineUniformName) {
        croak("glGetActiveSubroutineUniformName not available on this machine");
    };
    glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);

SV *
glGetActiveUniform(program, index, maxLength, length, size, type, name);
     GLuint program;
     GLuint index;
     GLsizei maxLength;
     GLsizei* length;
     GLint* size;
     GLenum* type;
     GLchar* name;
CODE:
    if(! __glewGetActiveUniform) {
        croak("glGetActiveUniform not available on this machine");
    };
    glGetActiveUniform(program, index, maxLength, length, size, type, name);

SV *
glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
     GLhandleARB programObj;
     GLuint index;
     GLsizei maxLength;
     GLsizei* length;
     GLint *size;
     GLenum *type;
     GLcharARB *name;
CODE:
    if(! __glewGetActiveUniformARB) {
        croak("glGetActiveUniformARB not available on this machine");
    };
    glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);

SV *
glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
     GLuint program;
     GLuint uniformBlockIndex;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetActiveUniformBlockiv) {
        croak("glGetActiveUniformBlockiv not available on this machine");
    };
    glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);

SV *
glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
     GLuint program;
     GLuint uniformBlockIndex;
     GLsizei bufSize;
     GLsizei* length;
     GLchar* uniformBlockName;
CODE:
    if(! __glewGetActiveUniformBlockName) {
        croak("glGetActiveUniformBlockName not available on this machine");
    };
    glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);

SV *
glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
     GLuint program;
     GLuint uniformIndex;
     GLsizei bufSize;
     GLsizei* length;
     GLchar* uniformName;
CODE:
    if(! __glewGetActiveUniformName) {
        croak("glGetActiveUniformName not available on this machine");
    };
    glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);

SV *
glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
     GLuint program;
     GLsizei uniformCount;
     const GLuint* uniformIndices;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetActiveUniformsiv) {
        croak("glGetActiveUniformsiv not available on this machine");
    };
    glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);

SV *
glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
     GLuint program;
     GLuint index;
     GLsizei bufSize;
     GLsizei *length;
     GLsizei *size;
     GLenum *type;
     GLchar *name;
CODE:
    if(! __glewGetActiveVaryingNV) {
        croak("glGetActiveVaryingNV not available on this machine");
    };
    glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);

SV *
glGetArrayObjectfvATI(array, pname, params);
     GLenum array;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetArrayObjectfvATI) {
        croak("glGetArrayObjectfvATI not available on this machine");
    };
    glGetArrayObjectfvATI(array, pname, params);

SV *
glGetArrayObjectivATI(array, pname, params);
     GLenum array;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetArrayObjectivATI) {
        croak("glGetArrayObjectivATI not available on this machine");
    };
    glGetArrayObjectivATI(array, pname, params);

SV *
glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
     GLhandleARB containerObj;
     GLsizei maxCount;
     GLsizei* count;
     GLhandleARB *obj;
CODE:
    if(! __glewGetAttachedObjectsARB) {
        croak("glGetAttachedObjectsARB not available on this machine");
    };
    glGetAttachedObjectsARB(containerObj, maxCount, count, obj);

SV *
glGetAttachedShaders(program, maxCount, count, shaders);
     GLuint program;
     GLsizei maxCount;
     GLsizei* count;
     GLuint* shaders;
CODE:
    if(! __glewGetAttachedShaders) {
        croak("glGetAttachedShaders not available on this machine");
    };
    glGetAttachedShaders(program, maxCount, count, shaders);

GLint
glGetAttribLocation(program, name);
     GLuint program;
     const GLchar* name;
CODE:
    if(! __glewGetAttribLocation) {
        croak("glGetAttribLocation not available on this machine");
    };
    RETVAL = glGetAttribLocation(program, name);
OUTPUT:
    RETVAL

GLint
glGetAttribLocationARB(programObj, name);
     GLhandleARB programObj;
     const GLcharARB* name;
CODE:
    if(! __glewGetAttribLocationARB) {
        croak("glGetAttribLocationARB not available on this machine");
    };
    RETVAL = glGetAttribLocationARB(programObj, name);
OUTPUT:
    RETVAL

SV *
glGetBooleanIndexedvEXT(value, index, data);
     GLenum value;
     GLuint index;
     GLboolean* data;
CODE:
    if(! __glewGetBooleanIndexedvEXT) {
        croak("glGetBooleanIndexedvEXT not available on this machine");
    };
    glGetBooleanIndexedvEXT(value, index, data);

SV *
glGetBooleani_v(pname, index, data);
     GLenum pname;
     GLuint index;
     GLboolean* data;
CODE:
    if(! __glewGetBooleani_v) {
        croak("glGetBooleani_v not available on this machine");
    };
    glGetBooleani_v(pname, index, data);

SV *
glGetBufferParameteri64v(target, value, data);
     GLenum target;
     GLenum value;
     GLint64 * data;
CODE:
    if(! __glewGetBufferParameteri64v) {
        croak("glGetBufferParameteri64v not available on this machine");
    };
    glGetBufferParameteri64v(target, value, data);

SV *
glGetBufferParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetBufferParameteriv) {
        croak("glGetBufferParameteriv not available on this machine");
    };
    glGetBufferParameteriv(target, pname, params);

SV *
glGetBufferParameterivARB(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetBufferParameterivARB) {
        croak("glGetBufferParameterivARB not available on this machine");
    };
    glGetBufferParameterivARB(target, pname, params);

SV *
glGetBufferParameterui64vNV(target, pname, params);
     GLenum target;
     GLenum pname;
     GLuint64EXT* params;
CODE:
    if(! __glewGetBufferParameterui64vNV) {
        croak("glGetBufferParameterui64vNV not available on this machine");
    };
    glGetBufferParameterui64vNV(target, pname, params);

SV *
glGetBufferPointerv(target, pname, params);
     GLenum target;
     GLenum pname;
     void** params;
CODE:
    if(! __glewGetBufferPointerv) {
        croak("glGetBufferPointerv not available on this machine");
    };
    glGetBufferPointerv(target, pname, params);

SV *
glGetBufferPointervARB(target, pname, params);
     GLenum target;
     GLenum pname;
     void** params;
CODE:
    if(! __glewGetBufferPointervARB) {
        croak("glGetBufferPointervARB not available on this machine");
    };
    glGetBufferPointervARB(target, pname, params);

SV *
glGetBufferSubData(target, offset, size, data);
     GLenum target;
     GLintptr offset;
     GLsizeiptr size;
     void* data;
CODE:
    if(! __glewGetBufferSubData) {
        croak("glGetBufferSubData not available on this machine");
    };
    glGetBufferSubData(target, offset, size, data);

SV *
glGetBufferSubDataARB(target, offset, size, data);
     GLenum target;
     GLintptrARB offset;
     GLsizeiptrARB size;
     void *data;
CODE:
    if(! __glewGetBufferSubDataARB) {
        croak("glGetBufferSubDataARB not available on this machine");
    };
    glGetBufferSubDataARB(target, offset, size, data);

SV *
glGetClipPlanef(pname, eqn);
     GLenum pname;
     GLfloat * eqn;
CODE:
    if(! __glewGetClipPlanef) {
        croak("glGetClipPlanef not available on this machine");
    };
    glGetClipPlanef(pname, eqn);

SV *
glGetClipPlanefOES(plane, equation);
     GLenum plane;
     GLfloat* equation;
CODE:
    if(! __glewGetClipPlanefOES) {
        croak("glGetClipPlanefOES not available on this machine");
    };
    glGetClipPlanefOES(plane, equation);

SV *
glGetClipPlanex(pname, eqn);
     GLenum pname;
     GLfixed * eqn;
CODE:
    if(! __glewGetClipPlanex) {
        croak("glGetClipPlanex not available on this machine");
    };
    glGetClipPlanex(pname, eqn);

SV *
glGetColorTable(target, format, type, table);
     GLenum target;
     GLenum format;
     GLenum type;
     void *table;
CODE:
    if(! __glewGetColorTable) {
        croak("glGetColorTable not available on this machine");
    };
    glGetColorTable(target, format, type, table);

SV *
glGetColorTableEXT(target, format, type, data);
     GLenum target;
     GLenum format;
     GLenum type;
     void *data;
CODE:
    if(! __glewGetColorTableEXT) {
        croak("glGetColorTableEXT not available on this machine");
    };
    glGetColorTableEXT(target, format, type, data);

SV *
glGetColorTableParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    if(! __glewGetColorTableParameterfv) {
        croak("glGetColorTableParameterfv not available on this machine");
    };
    glGetColorTableParameterfv(target, pname, params);

SV *
glGetColorTableParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetColorTableParameterfvEXT) {
        croak("glGetColorTableParameterfvEXT not available on this machine");
    };
    glGetColorTableParameterfvEXT(target, pname, params);

SV *
glGetColorTableParameterfvSGI(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetColorTableParameterfvSGI) {
        croak("glGetColorTableParameterfvSGI not available on this machine");
    };
    glGetColorTableParameterfvSGI(target, pname, params);

SV *
glGetColorTableParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetColorTableParameteriv) {
        croak("glGetColorTableParameteriv not available on this machine");
    };
    glGetColorTableParameteriv(target, pname, params);

SV *
glGetColorTableParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetColorTableParameterivEXT) {
        croak("glGetColorTableParameterivEXT not available on this machine");
    };
    glGetColorTableParameterivEXT(target, pname, params);

SV *
glGetColorTableParameterivSGI(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetColorTableParameterivSGI) {
        croak("glGetColorTableParameterivSGI not available on this machine");
    };
    glGetColorTableParameterivSGI(target, pname, params);

SV *
glGetColorTableSGI(target, format, type, table);
     GLenum target;
     GLenum format;
     GLenum type;
     void *table;
CODE:
    if(! __glewGetColorTableSGI) {
        croak("glGetColorTableSGI not available on this machine");
    };
    glGetColorTableSGI(target, format, type, table);

SV *
glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
     GLenum stage;
     GLenum portion;
     GLenum variable;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetCombinerInputParameterfvNV) {
        croak("glGetCombinerInputParameterfvNV not available on this machine");
    };
    glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);

SV *
glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
     GLenum stage;
     GLenum portion;
     GLenum variable;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetCombinerInputParameterivNV) {
        croak("glGetCombinerInputParameterivNV not available on this machine");
    };
    glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);

SV *
glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
     GLenum stage;
     GLenum portion;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetCombinerOutputParameterfvNV) {
        croak("glGetCombinerOutputParameterfvNV not available on this machine");
    };
    glGetCombinerOutputParameterfvNV(stage, portion, pname, params);

SV *
glGetCombinerOutputParameterivNV(stage, portion, pname, params);
     GLenum stage;
     GLenum portion;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetCombinerOutputParameterivNV) {
        croak("glGetCombinerOutputParameterivNV not available on this machine");
    };
    glGetCombinerOutputParameterivNV(stage, portion, pname, params);

SV *
glGetCombinerStageParameterfvNV(stage, pname, params);
     GLenum stage;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetCombinerStageParameterfvNV) {
        croak("glGetCombinerStageParameterfvNV not available on this machine");
    };
    glGetCombinerStageParameterfvNV(stage, pname, params);

GLuint
glGetCommandHeaderNV(tokenID, size);
     GLenum tokenID;
     GLuint size;
CODE:
    if(! __glewGetCommandHeaderNV) {
        croak("glGetCommandHeaderNV not available on this machine");
    };
    RETVAL = glGetCommandHeaderNV(tokenID, size);
OUTPUT:
    RETVAL

SV *
glGetCompressedMultiTexImageEXT(texunit, target, level, img);
     GLenum texunit;
     GLenum target;
     GLint level;
     void *img;
CODE:
    if(! __glewGetCompressedMultiTexImageEXT) {
        croak("glGetCompressedMultiTexImageEXT not available on this machine");
    };
    glGetCompressedMultiTexImageEXT(texunit, target, level, img);

SV *
glGetCompressedTexImage(target, lod, img);
     GLenum target;
     GLint lod;
     void *img;
CODE:
    if(! __glewGetCompressedTexImage) {
        croak("glGetCompressedTexImage not available on this machine");
    };
    glGetCompressedTexImage(target, lod, img);

SV *
glGetCompressedTexImageARB(target, lod, img);
     GLenum target;
     GLint lod;
     void *img;
CODE:
    if(! __glewGetCompressedTexImageARB) {
        croak("glGetCompressedTexImageARB not available on this machine");
    };
    glGetCompressedTexImageARB(target, lod, img);

SV *
glGetCompressedTextureImage(texture, level, bufSize, pixels);
     GLuint texture;
     GLint level;
     GLsizei bufSize;
     void *pixels;
CODE:
    if(! __glewGetCompressedTextureImage) {
        croak("glGetCompressedTextureImage not available on this machine");
    };
    glGetCompressedTextureImage(texture, level, bufSize, pixels);

SV *
glGetCompressedTextureImageEXT(texture, target, level, img);
     GLuint texture;
     GLenum target;
     GLint level;
     void *img;
CODE:
    if(! __glewGetCompressedTextureImageEXT) {
        croak("glGetCompressedTextureImageEXT not available on this machine");
    };
    glGetCompressedTextureImageEXT(texture, target, level, img);

SV *
glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLsizei bufSize;
     void *pixels;
CODE:
    if(! __glewGetCompressedTextureSubImage) {
        croak("glGetCompressedTextureSubImage not available on this machine");
    };
    glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);

SV *
glGetConvolutionFilter(target, format, type, image);
     GLenum target;
     GLenum format;
     GLenum type;
     void *image;
CODE:
    if(! __glewGetConvolutionFilter) {
        croak("glGetConvolutionFilter not available on this machine");
    };
    glGetConvolutionFilter(target, format, type, image);

SV *
glGetConvolutionFilterEXT(target, format, type, image);
     GLenum target;
     GLenum format;
     GLenum type;
     void *image;
CODE:
    if(! __glewGetConvolutionFilterEXT) {
        croak("glGetConvolutionFilterEXT not available on this machine");
    };
    glGetConvolutionFilterEXT(target, format, type, image);

SV *
glGetConvolutionParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    if(! __glewGetConvolutionParameterfv) {
        croak("glGetConvolutionParameterfv not available on this machine");
    };
    glGetConvolutionParameterfv(target, pname, params);

SV *
glGetConvolutionParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetConvolutionParameterfvEXT) {
        croak("glGetConvolutionParameterfvEXT not available on this machine");
    };
    glGetConvolutionParameterfvEXT(target, pname, params);

SV *
glGetConvolutionParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetConvolutionParameteriv) {
        croak("glGetConvolutionParameteriv not available on this machine");
    };
    glGetConvolutionParameteriv(target, pname, params);

SV *
glGetConvolutionParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetConvolutionParameterivEXT) {
        croak("glGetConvolutionParameterivEXT not available on this machine");
    };
    glGetConvolutionParameterivEXT(target, pname, params);

SV *
glGetCoverageModulationTableNV(bufsize, v);
     GLsizei bufsize;
     GLfloat* v;
CODE:
    if(! __glewGetCoverageModulationTableNV) {
        croak("glGetCoverageModulationTableNV not available on this machine");
    };
    glGetCoverageModulationTableNV(bufsize, v);

GLuint
glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
     GLuint count;
     GLsizei bufSize;
     GLenum* sources;
     GLenum* types;
     GLuint* ids;
     GLenum* severities;
     GLsizei* lengths;
     GLchar* messageLog;
CODE:
    if(! __glewGetDebugMessageLog) {
        croak("glGetDebugMessageLog not available on this machine");
    };
    RETVAL = glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
OUTPUT:
    RETVAL

GLuint
glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
     GLuint count;
     GLsizei bufsize;
     GLenum* categories;
     GLuint* severities;
     GLuint* ids;
     GLsizei* lengths;
     GLchar* message;
CODE:
    if(! __glewGetDebugMessageLogAMD) {
        croak("glGetDebugMessageLogAMD not available on this machine");
    };
    RETVAL = glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
OUTPUT:
    RETVAL

GLuint
glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
     GLuint count;
     GLsizei bufSize;
     GLenum* sources;
     GLenum* types;
     GLuint* ids;
     GLenum* severities;
     GLsizei* lengths;
     GLchar* messageLog;
CODE:
    if(! __glewGetDebugMessageLogARB) {
        croak("glGetDebugMessageLogARB not available on this machine");
    };
    RETVAL = glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
OUTPUT:
    RETVAL

SV *
glGetDetailTexFuncSGIS(target, points);
     GLenum target;
     GLfloat* points;
CODE:
    if(! __glewGetDetailTexFuncSGIS) {
        croak("glGetDetailTexFuncSGIS not available on this machine");
    };
    glGetDetailTexFuncSGIS(target, points);

SV *
glGetDoubleIndexedvEXT(target, index, params);
     GLenum target;
     GLuint index;
     GLdouble* params;
CODE:
    if(! __glewGetDoubleIndexedvEXT) {
        croak("glGetDoubleIndexedvEXT not available on this machine");
    };
    glGetDoubleIndexedvEXT(target, index, params);

SV *
glGetDoublei_v(target, index, data);
     GLenum target;
     GLuint index;
     GLdouble* data;
CODE:
    if(! __glewGetDoublei_v) {
        croak("glGetDoublei_v not available on this machine");
    };
    glGetDoublei_v(target, index, data);

SV *
glGetDoublei_vEXT(pname, index, params);
     GLenum pname;
     GLuint index;
     GLdouble* params;
CODE:
    if(! __glewGetDoublei_vEXT) {
        croak("glGetDoublei_vEXT not available on this machine");
    };
    glGetDoublei_vEXT(pname, index, params);

GLboolean
glGetExtensionREGAL(ext);
     const GLchar* ext;
CODE:
    if(! __glewGetExtensionREGAL) {
        croak("glGetExtensionREGAL not available on this machine");
    };
    RETVAL = glGetExtensionREGAL(ext);
OUTPUT:
    RETVAL

SV *
glGetFenceivNV(fence, pname, params);
     GLuint fence;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFenceivNV) {
        croak("glGetFenceivNV not available on this machine");
    };
    glGetFenceivNV(fence, pname, params);

SV *
glGetFinalCombinerInputParameterfvNV(variable, pname, params);
     GLenum variable;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetFinalCombinerInputParameterfvNV) {
        croak("glGetFinalCombinerInputParameterfvNV not available on this machine");
    };
    glGetFinalCombinerInputParameterfvNV(variable, pname, params);

SV *
glGetFinalCombinerInputParameterivNV(variable, pname, params);
     GLenum variable;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFinalCombinerInputParameterivNV) {
        croak("glGetFinalCombinerInputParameterivNV not available on this machine");
    };
    glGetFinalCombinerInputParameterivNV(variable, pname, params);

SV *
glGetFirstPerfQueryIdINTEL(queryId);
     GLuint* queryId;
CODE:
    if(! __glewGetFirstPerfQueryIdINTEL) {
        croak("glGetFirstPerfQueryIdINTEL not available on this machine");
    };
    glGetFirstPerfQueryIdINTEL(queryId);

SV *
glGetFixedv(pname, params);
     GLenum pname;
     GLfixed* params;
CODE:
    if(! __glewGetFixedv) {
        croak("glGetFixedv not available on this machine");
    };
    glGetFixedv(pname, params);

SV *
glGetFloatIndexedvEXT(target, index, params);
     GLenum target;
     GLuint index;
     GLfloat* params;
CODE:
    if(! __glewGetFloatIndexedvEXT) {
        croak("glGetFloatIndexedvEXT not available on this machine");
    };
    glGetFloatIndexedvEXT(target, index, params);

SV *
glGetFloati_v(target, index, data);
     GLenum target;
     GLuint index;
     GLfloat* data;
CODE:
    if(! __glewGetFloati_v) {
        croak("glGetFloati_v not available on this machine");
    };
    glGetFloati_v(target, index, data);

SV *
glGetFloati_vEXT(pname, index, params);
     GLenum pname;
     GLuint index;
     GLfloat* params;
CODE:
    if(! __glewGetFloati_vEXT) {
        croak("glGetFloati_vEXT not available on this machine");
    };
    glGetFloati_vEXT(pname, index, params);

SV *
glGetFogFuncSGIS(points);
     GLfloat* points;
CODE:
    if(! __glewGetFogFuncSGIS) {
        croak("glGetFogFuncSGIS not available on this machine");
    };
    glGetFogFuncSGIS(points);

GLint
glGetFragDataIndex(program, name);
     GLuint program;
     const GLchar * name;
CODE:
    if(! __glewGetFragDataIndex) {
        croak("glGetFragDataIndex not available on this machine");
    };
    RETVAL = glGetFragDataIndex(program, name);
OUTPUT:
    RETVAL

GLint
glGetFragDataLocation(program, name);
     GLuint program;
     const GLchar* name;
CODE:
    if(! __glewGetFragDataLocation) {
        croak("glGetFragDataLocation not available on this machine");
    };
    RETVAL = glGetFragDataLocation(program, name);
OUTPUT:
    RETVAL

GLint
glGetFragDataLocationEXT(program, name);
     GLuint program;
     const GLchar *name;
CODE:
    if(! __glewGetFragDataLocationEXT) {
        croak("glGetFragDataLocationEXT not available on this machine");
    };
    RETVAL = glGetFragDataLocationEXT(program, name);
OUTPUT:
    RETVAL

SV *
glGetFragmentLightfvEXT(light, pname, params);
     GLenum light;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetFragmentLightfvEXT) {
        croak("glGetFragmentLightfvEXT not available on this machine");
    };
    glGetFragmentLightfvEXT(light, pname, params);

SV *
glGetFragmentLightfvSGIX(light, value, data);
     GLenum light;
     GLenum value;
     GLfloat* data;
CODE:
    if(! __glewGetFragmentLightfvSGIX) {
        croak("glGetFragmentLightfvSGIX not available on this machine");
    };
    glGetFragmentLightfvSGIX(light, value, data);

SV *
glGetFragmentLightivEXT(light, pname, params);
     GLenum light;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFragmentLightivEXT) {
        croak("glGetFragmentLightivEXT not available on this machine");
    };
    glGetFragmentLightivEXT(light, pname, params);

SV *
glGetFragmentLightivSGIX(light, value, data);
     GLenum light;
     GLenum value;
     GLint* data;
CODE:
    if(! __glewGetFragmentLightivSGIX) {
        croak("glGetFragmentLightivSGIX not available on this machine");
    };
    glGetFragmentLightivSGIX(light, value, data);

SV *
glGetFragmentMaterialfvEXT(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewGetFragmentMaterialfvEXT) {
        croak("glGetFragmentMaterialfvEXT not available on this machine");
    };
    glGetFragmentMaterialfvEXT(face, pname, params);

SV *
glGetFragmentMaterialfvSGIX(face, pname, data);
     GLenum face;
     GLenum pname;
     const GLfloat* data;
CODE:
    if(! __glewGetFragmentMaterialfvSGIX) {
        croak("glGetFragmentMaterialfvSGIX not available on this machine");
    };
    glGetFragmentMaterialfvSGIX(face, pname, data);

SV *
glGetFragmentMaterialivEXT(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewGetFragmentMaterialivEXT) {
        croak("glGetFragmentMaterialivEXT not available on this machine");
    };
    glGetFragmentMaterialivEXT(face, pname, params);

SV *
glGetFragmentMaterialivSGIX(face, pname, data);
     GLenum face;
     GLenum pname;
     const GLint* data;
CODE:
    if(! __glewGetFragmentMaterialivSGIX) {
        croak("glGetFragmentMaterialivSGIX not available on this machine");
    };
    glGetFragmentMaterialivSGIX(face, pname, data);

SV *
glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
     GLenum target;
     GLenum attachment;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFramebufferAttachmentParameteriv) {
        croak("glGetFramebufferAttachmentParameteriv not available on this machine");
    };
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);

SV *
glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
     GLenum target;
     GLenum attachment;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFramebufferAttachmentParameterivEXT) {
        croak("glGetFramebufferAttachmentParameterivEXT not available on this machine");
    };
    glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);

SV *
glGetFramebufferParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetFramebufferParameteriv) {
        croak("glGetFramebufferParameteriv not available on this machine");
    };
    glGetFramebufferParameteriv(target, pname, params);

SV *
glGetFramebufferParameterivEXT(framebuffer, pname, param);
     GLuint framebuffer;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetFramebufferParameterivEXT) {
        croak("glGetFramebufferParameterivEXT not available on this machine");
    };
    glGetFramebufferParameterivEXT(framebuffer, pname, param);

GLenum
glGetGraphicsResetStatus();
CODE:
    if(! __glewGetGraphicsResetStatus) {
        croak("glGetGraphicsResetStatus not available on this machine");
    };
    RETVAL = glGetGraphicsResetStatus();
OUTPUT:
    RETVAL

GLenum
glGetGraphicsResetStatusARB();
CODE:
    if(! __glewGetGraphicsResetStatusARB) {
        croak("glGetGraphicsResetStatusARB not available on this machine");
    };
    RETVAL = glGetGraphicsResetStatusARB();
OUTPUT:
    RETVAL

GLhandleARB
glGetHandleARB(pname);
     GLenum pname;
CODE:
    if(! __glewGetHandleARB) {
        croak("glGetHandleARB not available on this machine");
    };
    RETVAL = glGetHandleARB(pname);
OUTPUT:
    RETVAL

SV *
glGetHistogram(target, reset, format, type, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum type;
     void *values;
CODE:
    if(! __glewGetHistogram) {
        croak("glGetHistogram not available on this machine");
    };
    glGetHistogram(target, reset, format, type, values);

SV *
glGetHistogramEXT(target, reset, format, type, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum type;
     void *values;
CODE:
    if(! __glewGetHistogramEXT) {
        croak("glGetHistogramEXT not available on this machine");
    };
    glGetHistogramEXT(target, reset, format, type, values);

SV *
glGetHistogramParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    if(! __glewGetHistogramParameterfv) {
        croak("glGetHistogramParameterfv not available on this machine");
    };
    glGetHistogramParameterfv(target, pname, params);

SV *
glGetHistogramParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetHistogramParameterfvEXT) {
        croak("glGetHistogramParameterfvEXT not available on this machine");
    };
    glGetHistogramParameterfvEXT(target, pname, params);

SV *
glGetHistogramParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetHistogramParameteriv) {
        croak("glGetHistogramParameteriv not available on this machine");
    };
    glGetHistogramParameteriv(target, pname, params);

SV *
glGetHistogramParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetHistogramParameterivEXT) {
        croak("glGetHistogramParameterivEXT not available on this machine");
    };
    glGetHistogramParameterivEXT(target, pname, params);

GLuint64
glGetImageHandleARB(texture, level, layered, layer, format);
     GLuint texture;
     GLint level;
     GLboolean layered;
     GLint layer;
     GLenum format;
CODE:
    if(! __glewGetImageHandleARB) {
        croak("glGetImageHandleARB not available on this machine");
    };
    RETVAL = glGetImageHandleARB(texture, level, layered, layer, format);
OUTPUT:
    RETVAL

GLuint64
glGetImageHandleNV(texture, level, layered, layer, format);
     GLuint texture;
     GLint level;
     GLboolean layered;
     GLint layer;
     GLenum format;
CODE:
    if(! __glewGetImageHandleNV) {
        croak("glGetImageHandleNV not available on this machine");
    };
    RETVAL = glGetImageHandleNV(texture, level, layered, layer, format);
OUTPUT:
    RETVAL

SV *
glGetImageTransformParameterfvHP(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewGetImageTransformParameterfvHP) {
        croak("glGetImageTransformParameterfvHP not available on this machine");
    };
    glGetImageTransformParameterfvHP(target, pname, params);

SV *
glGetImageTransformParameterivHP(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewGetImageTransformParameterivHP) {
        croak("glGetImageTransformParameterivHP not available on this machine");
    };
    glGetImageTransformParameterivHP(target, pname, params);

SV *
glGetInfoLogARB(obj, maxLength, length, infoLog);
     GLhandleARB obj;
     GLsizei maxLength;
     GLsizei* length;
     GLcharARB *infoLog;
CODE:
    if(! __glewGetInfoLogARB) {
        croak("glGetInfoLogARB not available on this machine");
    };
    glGetInfoLogARB(obj, maxLength, length, infoLog);

SV *
glGetInteger64i_v(pname, index, data);
     GLenum pname;
     GLuint index;
     GLint64 * data;
CODE:
    if(! __glewGetInteger64i_v) {
        croak("glGetInteger64i_v not available on this machine");
    };
    glGetInteger64i_v(pname, index, data);

SV *
glGetInteger64v(pname, params);
     GLenum pname;
     GLint64* params;
CODE:
    if(! __glewGetInteger64v) {
        croak("glGetInteger64v not available on this machine");
    };
    glGetInteger64v(pname, params);

SV *
glGetIntegerIndexedvEXT(value, index, data);
     GLenum value;
     GLuint index;
     GLint* data;
CODE:
    if(! __glewGetIntegerIndexedvEXT) {
        croak("glGetIntegerIndexedvEXT not available on this machine");
    };
    glGetIntegerIndexedvEXT(value, index, data);

SV *
glGetIntegeri_v(target, index, data);
     GLenum target;
     GLuint index;
     GLint* data;
CODE:
    if(! __glewGetIntegeri_v) {
        croak("glGetIntegeri_v not available on this machine");
    };
    glGetIntegeri_v(target, index, data);

SV *
glGetIntegerui64i_vNV(value, index, result);
     GLenum value;
     GLuint index;
     GLuint64EXT * result;
CODE:
    if(! __glewGetIntegerui64i_vNV) {
        croak("glGetIntegerui64i_vNV not available on this machine");
    };
    glGetIntegerui64i_vNV(value, index, result);

SV *
glGetIntegerui64vNV(value, result);
     GLenum value;
     GLuint64EXT* result;
CODE:
    if(! __glewGetIntegerui64vNV) {
        croak("glGetIntegerui64vNV not available on this machine");
    };
    glGetIntegerui64vNV(value, result);

SV *
glGetInternalformati64v(target, internalformat, pname, bufSize, params);
     GLenum target;
     GLenum internalformat;
     GLenum pname;
     GLsizei bufSize;
     GLint64* params;
CODE:
    if(! __glewGetInternalformati64v) {
        croak("glGetInternalformati64v not available on this machine");
    };
    glGetInternalformati64v(target, internalformat, pname, bufSize, params);

SV *
glGetInternalformativ(target, internalformat, pname, bufSize, params);
     GLenum target;
     GLenum internalformat;
     GLenum pname;
     GLsizei bufSize;
     GLint* params;
CODE:
    if(! __glewGetInternalformativ) {
        croak("glGetInternalformativ not available on this machine");
    };
    glGetInternalformativ(target, internalformat, pname, bufSize, params);

SV *
glGetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
     GLenum target;
     GLenum internalformat;
     GLsizei samples;
     GLenum pname;
     GLsizei bufSize;
     GLint* params;
CODE:
    if(! __glewGetInternalformatSampleivNV) {
        croak("glGetInternalformatSampleivNV not available on this machine");
    };
    glGetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);

SV *
glGetInvariantBooleanvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLboolean *data;
CODE:
    if(! __glewGetInvariantBooleanvEXT) {
        croak("glGetInvariantBooleanvEXT not available on this machine");
    };
    glGetInvariantBooleanvEXT(id, value, data);

SV *
glGetInvariantFloatvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLfloat *data;
CODE:
    if(! __glewGetInvariantFloatvEXT) {
        croak("glGetInvariantFloatvEXT not available on this machine");
    };
    glGetInvariantFloatvEXT(id, value, data);

SV *
glGetInvariantIntegervEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLint *data;
CODE:
    if(! __glewGetInvariantIntegervEXT) {
        croak("glGetInvariantIntegervEXT not available on this machine");
    };
    glGetInvariantIntegervEXT(id, value, data);

SV *
glGetLightxv(light, pname, params);
     GLenum light;
     GLenum pname;
     GLfixed* params;
CODE:
    if(! __glewGetLightxv) {
        croak("glGetLightxv not available on this machine");
    };
    glGetLightxv(light, pname, params);

SV *
glGetLocalConstantBooleanvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLboolean *data;
CODE:
    if(! __glewGetLocalConstantBooleanvEXT) {
        croak("glGetLocalConstantBooleanvEXT not available on this machine");
    };
    glGetLocalConstantBooleanvEXT(id, value, data);

SV *
glGetLocalConstantFloatvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLfloat *data;
CODE:
    if(! __glewGetLocalConstantFloatvEXT) {
        croak("glGetLocalConstantFloatvEXT not available on this machine");
    };
    glGetLocalConstantFloatvEXT(id, value, data);

SV *
glGetLocalConstantIntegervEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLint *data;
CODE:
    if(! __glewGetLocalConstantIntegervEXT) {
        croak("glGetLocalConstantIntegervEXT not available on this machine");
    };
    glGetLocalConstantIntegervEXT(id, value, data);

SV *
glGetMapAttribParameterfvNV(target, index, pname, params);
     GLenum target;
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMapAttribParameterfvNV) {
        croak("glGetMapAttribParameterfvNV not available on this machine");
    };
    glGetMapAttribParameterfvNV(target, index, pname, params);

SV *
glGetMapAttribParameterivNV(target, index, pname, params);
     GLenum target;
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMapAttribParameterivNV) {
        croak("glGetMapAttribParameterivNV not available on this machine");
    };
    glGetMapAttribParameterivNV(target, index, pname, params);

SV *
glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
     GLenum target;
     GLuint index;
     GLenum type;
     GLsizei ustride;
     GLsizei vstride;
     GLboolean packed;
     void *points;
CODE:
    if(! __glewGetMapControlPointsNV) {
        croak("glGetMapControlPointsNV not available on this machine");
    };
    glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);

SV *
glGetMapParameterfvNV(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMapParameterfvNV) {
        croak("glGetMapParameterfvNV not available on this machine");
    };
    glGetMapParameterfvNV(target, pname, params);

SV *
glGetMapParameterivNV(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMapParameterivNV) {
        croak("glGetMapParameterivNV not available on this machine");
    };
    glGetMapParameterivNV(target, pname, params);

SV *
glGetMaterialxv(face, pname, params);
     GLenum face;
     GLenum pname;
     GLfixed* params;
CODE:
    if(! __glewGetMaterialxv) {
        croak("glGetMaterialxv not available on this machine");
    };
    glGetMaterialxv(face, pname, params);

SV *
glGetMinmax(target, reset, format, types, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum types;
     void *values;
CODE:
    if(! __glewGetMinmax) {
        croak("glGetMinmax not available on this machine");
    };
    glGetMinmax(target, reset, format, types, values);

SV *
glGetMinmaxEXT(target, reset, format, type, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum type;
     void *values;
CODE:
    if(! __glewGetMinmaxEXT) {
        croak("glGetMinmaxEXT not available on this machine");
    };
    glGetMinmaxEXT(target, reset, format, type, values);

SV *
glGetMinmaxParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    if(! __glewGetMinmaxParameterfv) {
        croak("glGetMinmaxParameterfv not available on this machine");
    };
    glGetMinmaxParameterfv(target, pname, params);

SV *
glGetMinmaxParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMinmaxParameterfvEXT) {
        croak("glGetMinmaxParameterfvEXT not available on this machine");
    };
    glGetMinmaxParameterfvEXT(target, pname, params);

SV *
glGetMinmaxParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetMinmaxParameteriv) {
        croak("glGetMinmaxParameteriv not available on this machine");
    };
    glGetMinmaxParameteriv(target, pname, params);

SV *
glGetMinmaxParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMinmaxParameterivEXT) {
        croak("glGetMinmaxParameterivEXT not available on this machine");
    };
    glGetMinmaxParameterivEXT(target, pname, params);

SV *
glGetMultisamplefv(pname, index, val);
     GLenum pname;
     GLuint index;
     GLfloat* val;
CODE:
    if(! __glewGetMultisamplefv) {
        croak("glGetMultisamplefv not available on this machine");
    };
    glGetMultisamplefv(pname, index, val);

SV *
glGetMultisamplefvNV(pname, index, val);
     GLenum pname;
     GLuint index;
     GLfloat* val;
CODE:
    if(! __glewGetMultisamplefvNV) {
        croak("glGetMultisamplefvNV not available on this machine");
    };
    glGetMultisamplefvNV(pname, index, val);

SV *
glGetMultiTexEnvfvEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMultiTexEnvfvEXT) {
        croak("glGetMultiTexEnvfvEXT not available on this machine");
    };
    glGetMultiTexEnvfvEXT(texunit, target, pname, params);

SV *
glGetMultiTexEnvivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMultiTexEnvivEXT) {
        croak("glGetMultiTexEnvivEXT not available on this machine");
    };
    glGetMultiTexEnvivEXT(texunit, target, pname, params);

SV *
glGetMultiTexGendvEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetMultiTexGendvEXT) {
        croak("glGetMultiTexGendvEXT not available on this machine");
    };
    glGetMultiTexGendvEXT(texunit, coord, pname, params);

SV *
glGetMultiTexGenfvEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMultiTexGenfvEXT) {
        croak("glGetMultiTexGenfvEXT not available on this machine");
    };
    glGetMultiTexGenfvEXT(texunit, coord, pname, params);

SV *
glGetMultiTexGenivEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMultiTexGenivEXT) {
        croak("glGetMultiTexGenivEXT not available on this machine");
    };
    glGetMultiTexGenivEXT(texunit, coord, pname, params);

SV *
glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum format;
     GLenum type;
     void *pixels;
CODE:
    if(! __glewGetMultiTexImageEXT) {
        croak("glGetMultiTexImageEXT not available on this machine");
    };
    glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);

SV *
glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMultiTexLevelParameterfvEXT) {
        croak("glGetMultiTexLevelParameterfvEXT not available on this machine");
    };
    glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);

SV *
glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMultiTexLevelParameterivEXT) {
        croak("glGetMultiTexLevelParameterivEXT not available on this machine");
    };
    glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);

SV *
glGetMultiTexParameterfvEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetMultiTexParameterfvEXT) {
        croak("glGetMultiTexParameterfvEXT not available on this machine");
    };
    glGetMultiTexParameterfvEXT(texunit, target, pname, params);

SV *
glGetMultiTexParameterIivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMultiTexParameterIivEXT) {
        croak("glGetMultiTexParameterIivEXT not available on this machine");
    };
    glGetMultiTexParameterIivEXT(texunit, target, pname, params);

SV *
glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetMultiTexParameterIuivEXT) {
        croak("glGetMultiTexParameterIuivEXT not available on this machine");
    };
    glGetMultiTexParameterIuivEXT(texunit, target, pname, params);

SV *
glGetMultiTexParameterivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetMultiTexParameterivEXT) {
        croak("glGetMultiTexParameterivEXT not available on this machine");
    };
    glGetMultiTexParameterivEXT(texunit, target, pname, params);

SV *
glGetNamedBufferParameteri64v(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLint64* params;
CODE:
    if(! __glewGetNamedBufferParameteri64v) {
        croak("glGetNamedBufferParameteri64v not available on this machine");
    };
    glGetNamedBufferParameteri64v(buffer, pname, params);

SV *
glGetNamedBufferParameteriv(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedBufferParameteriv) {
        croak("glGetNamedBufferParameteriv not available on this machine");
    };
    glGetNamedBufferParameteriv(buffer, pname, params);

SV *
glGetNamedBufferParameterivEXT(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedBufferParameterivEXT) {
        croak("glGetNamedBufferParameterivEXT not available on this machine");
    };
    glGetNamedBufferParameterivEXT(buffer, pname, params);

SV *
glGetNamedBufferParameterui64vNV(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLuint64EXT* params;
CODE:
    if(! __glewGetNamedBufferParameterui64vNV) {
        croak("glGetNamedBufferParameterui64vNV not available on this machine");
    };
    glGetNamedBufferParameterui64vNV(buffer, pname, params);

SV *
glGetNamedBufferPointerv(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     void** params;
CODE:
    if(! __glewGetNamedBufferPointerv) {
        croak("glGetNamedBufferPointerv not available on this machine");
    };
    glGetNamedBufferPointerv(buffer, pname, params);

SV *
glGetNamedBufferPointervEXT(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     void** params;
CODE:
    if(! __glewGetNamedBufferPointervEXT) {
        croak("glGetNamedBufferPointervEXT not available on this machine");
    };
    glGetNamedBufferPointervEXT(buffer, pname, params);

SV *
glGetNamedBufferSubData(buffer, offset, size, data);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     void *data;
CODE:
    if(! __glewGetNamedBufferSubData) {
        croak("glGetNamedBufferSubData not available on this machine");
    };
    glGetNamedBufferSubData(buffer, offset, size, data);

SV *
glGetNamedBufferSubDataEXT(buffer, offset, size, data);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     void *data;
CODE:
    if(! __glewGetNamedBufferSubDataEXT) {
        croak("glGetNamedBufferSubDataEXT not available on this machine");
    };
    glGetNamedBufferSubDataEXT(buffer, offset, size, data);

SV *
glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
     GLuint framebuffer;
     GLenum attachment;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedFramebufferAttachmentParameteriv) {
        croak("glGetNamedFramebufferAttachmentParameteriv not available on this machine");
    };
    glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);

SV *
glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
     GLuint framebuffer;
     GLenum attachment;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedFramebufferAttachmentParameterivEXT) {
        croak("glGetNamedFramebufferAttachmentParameterivEXT not available on this machine");
    };
    glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);

SV *
glGetNamedFramebufferParameteriv(framebuffer, pname, param);
     GLuint framebuffer;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetNamedFramebufferParameteriv) {
        croak("glGetNamedFramebufferParameteriv not available on this machine");
    };
    glGetNamedFramebufferParameteriv(framebuffer, pname, param);

SV *
glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
     GLuint framebuffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedFramebufferParameterivEXT) {
        croak("glGetNamedFramebufferParameterivEXT not available on this machine");
    };
    glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);

SV *
glGetNamedProgramivEXT(program, target, pname, params);
     GLuint program;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedProgramivEXT) {
        croak("glGetNamedProgramivEXT not available on this machine");
    };
    glGetNamedProgramivEXT(program, target, pname, params);

SV *
glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLdouble* params;
CODE:
    if(! __glewGetNamedProgramLocalParameterdvEXT) {
        croak("glGetNamedProgramLocalParameterdvEXT not available on this machine");
    };
    glGetNamedProgramLocalParameterdvEXT(program, target, index, params);

SV *
glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLfloat* params;
CODE:
    if(! __glewGetNamedProgramLocalParameterfvEXT) {
        croak("glGetNamedProgramLocalParameterfvEXT not available on this machine");
    };
    glGetNamedProgramLocalParameterfvEXT(program, target, index, params);

SV *
glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLint* params;
CODE:
    if(! __glewGetNamedProgramLocalParameterIivEXT) {
        croak("glGetNamedProgramLocalParameterIivEXT not available on this machine");
    };
    glGetNamedProgramLocalParameterIivEXT(program, target, index, params);

SV *
glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLuint* params;
CODE:
    if(! __glewGetNamedProgramLocalParameterIuivEXT) {
        croak("glGetNamedProgramLocalParameterIuivEXT not available on this machine");
    };
    glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);

SV *
glGetNamedProgramStringEXT(program, target, pname, string);
     GLuint program;
     GLenum target;
     GLenum pname;
     void *string;
CODE:
    if(! __glewGetNamedProgramStringEXT) {
        croak("glGetNamedProgramStringEXT not available on this machine");
    };
    glGetNamedProgramStringEXT(program, target, pname, string);

SV *
glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
     GLuint renderbuffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedRenderbufferParameteriv) {
        croak("glGetNamedRenderbufferParameteriv not available on this machine");
    };
    glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);

SV *
glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
     GLuint renderbuffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetNamedRenderbufferParameterivEXT) {
        croak("glGetNamedRenderbufferParameterivEXT not available on this machine");
    };
    glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);

SV *
glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
     GLint namelen;
     const GLchar* name;
     GLsizei bufSize;
     GLint *stringlen;
     GLchar *string;
CODE:
    if(! __glewGetNamedStringARB) {
        croak("glGetNamedStringARB not available on this machine");
    };
    glGetNamedStringARB(namelen, name, bufSize, stringlen, string);

SV *
glGetNamedStringivARB(namelen, name, pname, params);
     GLint namelen;
     const GLchar* name;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetNamedStringivARB) {
        croak("glGetNamedStringivARB not available on this machine");
    };
    glGetNamedStringivARB(namelen, name, pname, params);

SV *
glGetnColorTableARB(target, format, type, bufSize, table);
     GLenum target;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* table;
CODE:
    if(! __glewGetnColorTableARB) {
        croak("glGetnColorTableARB not available on this machine");
    };
    glGetnColorTableARB(target, format, type, bufSize, table);

SV *
glGetnCompressedTexImage(target, lod, bufSize, pixels);
     GLenum target;
     GLint lod;
     GLsizei bufSize;
     GLvoid *pixels;
CODE:
    if(! __glewGetnCompressedTexImage) {
        croak("glGetnCompressedTexImage not available on this machine");
    };
    glGetnCompressedTexImage(target, lod, bufSize, pixels);

SV *
glGetnCompressedTexImageARB(target, lod, bufSize, img);
     GLenum target;
     GLint lod;
     GLsizei bufSize;
     void* img;
CODE:
    if(! __glewGetnCompressedTexImageARB) {
        croak("glGetnCompressedTexImageARB not available on this machine");
    };
    glGetnCompressedTexImageARB(target, lod, bufSize, img);

SV *
glGetnConvolutionFilterARB(target, format, type, bufSize, image);
     GLenum target;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* image;
CODE:
    if(! __glewGetnConvolutionFilterARB) {
        croak("glGetnConvolutionFilterARB not available on this machine");
    };
    glGetnConvolutionFilterARB(target, format, type, bufSize, image);

SV *
glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
     GLuint queryId;
     GLuint* nextQueryId;
CODE:
    if(! __glewGetNextPerfQueryIdINTEL) {
        croak("glGetNextPerfQueryIdINTEL not available on this machine");
    };
    glGetNextPerfQueryIdINTEL(queryId, nextQueryId);

SV *
glGetnHistogramARB(target, reset, format, type, bufSize, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* values;
CODE:
    if(! __glewGetnHistogramARB) {
        croak("glGetnHistogramARB not available on this machine");
    };
    glGetnHistogramARB(target, reset, format, type, bufSize, values);

SV *
glGetnMapdvARB(target, query, bufSize, v);
     GLenum target;
     GLenum query;
     GLsizei bufSize;
     GLdouble* v;
CODE:
    if(! __glewGetnMapdvARB) {
        croak("glGetnMapdvARB not available on this machine");
    };
    glGetnMapdvARB(target, query, bufSize, v);

SV *
glGetnMapfvARB(target, query, bufSize, v);
     GLenum target;
     GLenum query;
     GLsizei bufSize;
     GLfloat* v;
CODE:
    if(! __glewGetnMapfvARB) {
        croak("glGetnMapfvARB not available on this machine");
    };
    glGetnMapfvARB(target, query, bufSize, v);

SV *
glGetnMapivARB(target, query, bufSize, v);
     GLenum target;
     GLenum query;
     GLsizei bufSize;
     GLint* v;
CODE:
    if(! __glewGetnMapivARB) {
        croak("glGetnMapivARB not available on this machine");
    };
    glGetnMapivARB(target, query, bufSize, v);

SV *
glGetnMinmaxARB(target, reset, format, type, bufSize, values);
     GLenum target;
     GLboolean reset;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* values;
CODE:
    if(! __glewGetnMinmaxARB) {
        croak("glGetnMinmaxARB not available on this machine");
    };
    glGetnMinmaxARB(target, reset, format, type, bufSize, values);

SV *
glGetnPixelMapfvARB(map, bufSize, values);
     GLenum map;
     GLsizei bufSize;
     GLfloat* values;
CODE:
    if(! __glewGetnPixelMapfvARB) {
        croak("glGetnPixelMapfvARB not available on this machine");
    };
    glGetnPixelMapfvARB(map, bufSize, values);

SV *
glGetnPixelMapuivARB(map, bufSize, values);
     GLenum map;
     GLsizei bufSize;
     GLuint* values;
CODE:
    if(! __glewGetnPixelMapuivARB) {
        croak("glGetnPixelMapuivARB not available on this machine");
    };
    glGetnPixelMapuivARB(map, bufSize, values);

SV *
glGetnPixelMapusvARB(map, bufSize, values);
     GLenum map;
     GLsizei bufSize;
     GLushort* values;
CODE:
    if(! __glewGetnPixelMapusvARB) {
        croak("glGetnPixelMapusvARB not available on this machine");
    };
    glGetnPixelMapusvARB(map, bufSize, values);

SV *
glGetnPolygonStippleARB(bufSize, pattern);
     GLsizei bufSize;
     GLubyte* pattern;
CODE:
    if(! __glewGetnPolygonStippleARB) {
        croak("glGetnPolygonStippleARB not available on this machine");
    };
    glGetnPolygonStippleARB(bufSize, pattern);

SV *
glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
     GLenum target;
     GLenum format;
     GLenum type;
     GLsizei rowBufSize;
     void* row;
     GLsizei columnBufSize;
     void*column;
     void*span;
CODE:
    if(! __glewGetnSeparableFilterARB) {
        croak("glGetnSeparableFilterARB not available on this machine");
    };
    glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);

SV *
glGetnTexImage(tex, level, format, type, bufSize, pixels);
     GLenum tex;
     GLint level;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     GLvoid *pixels;
CODE:
    if(! __glewGetnTexImage) {
        croak("glGetnTexImage not available on this machine");
    };
    glGetnTexImage(tex, level, format, type, bufSize, pixels);

SV *
glGetnTexImageARB(target, level, format, type, bufSize, img);
     GLenum target;
     GLint level;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* img;
CODE:
    if(! __glewGetnTexImageARB) {
        croak("glGetnTexImageARB not available on this machine");
    };
    glGetnTexImageARB(target, level, format, type, bufSize, img);

SV *
glGetnUniformdv(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLdouble *params;
CODE:
    if(! __glewGetnUniformdv) {
        croak("glGetnUniformdv not available on this machine");
    };
    glGetnUniformdv(program, location, bufSize, params);

SV *
glGetnUniformdvARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLdouble* params;
CODE:
    if(! __glewGetnUniformdvARB) {
        croak("glGetnUniformdvARB not available on this machine");
    };
    glGetnUniformdvARB(program, location, bufSize, params);

SV *
glGetnUniformfv(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLfloat* params;
CODE:
    if(! __glewGetnUniformfv) {
        croak("glGetnUniformfv not available on this machine");
    };
    glGetnUniformfv(program, location, bufSize, params);

SV *
glGetnUniformfvARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLfloat* params;
CODE:
    if(! __glewGetnUniformfvARB) {
        croak("glGetnUniformfvARB not available on this machine");
    };
    glGetnUniformfvARB(program, location, bufSize, params);

SV *
glGetnUniformi64vARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLint64* params;
CODE:
    if(! __glewGetnUniformi64vARB) {
        croak("glGetnUniformi64vARB not available on this machine");
    };
    glGetnUniformi64vARB(program, location, bufSize, params);

SV *
glGetnUniformiv(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLint* params;
CODE:
    if(! __glewGetnUniformiv) {
        croak("glGetnUniformiv not available on this machine");
    };
    glGetnUniformiv(program, location, bufSize, params);

SV *
glGetnUniformivARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLint* params;
CODE:
    if(! __glewGetnUniformivARB) {
        croak("glGetnUniformivARB not available on this machine");
    };
    glGetnUniformivARB(program, location, bufSize, params);

SV *
glGetnUniformui64vARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLuint64* params;
CODE:
    if(! __glewGetnUniformui64vARB) {
        croak("glGetnUniformui64vARB not available on this machine");
    };
    glGetnUniformui64vARB(program, location, bufSize, params);

SV *
glGetnUniformuiv(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLuint* params;
CODE:
    if(! __glewGetnUniformuiv) {
        croak("glGetnUniformuiv not available on this machine");
    };
    glGetnUniformuiv(program, location, bufSize, params);

SV *
glGetnUniformuivARB(program, location, bufSize, params);
     GLuint program;
     GLint location;
     GLsizei bufSize;
     GLuint* params;
CODE:
    if(! __glewGetnUniformuivARB) {
        croak("glGetnUniformuivARB not available on this machine");
    };
    glGetnUniformuivARB(program, location, bufSize, params);

SV *
glGetObjectBufferfvATI(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetObjectBufferfvATI) {
        croak("glGetObjectBufferfvATI not available on this machine");
    };
    glGetObjectBufferfvATI(buffer, pname, params);

SV *
glGetObjectBufferivATI(buffer, pname, params);
     GLuint buffer;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetObjectBufferivATI) {
        croak("glGetObjectBufferivATI not available on this machine");
    };
    glGetObjectBufferivATI(buffer, pname, params);

SV *
glGetObjectLabel(identifier, name, bufSize, length, label);
     GLenum identifier;
     GLuint name;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *label;
CODE:
    if(! __glewGetObjectLabel) {
        croak("glGetObjectLabel not available on this machine");
    };
    glGetObjectLabel(identifier, name, bufSize, length, label);

SV *
glGetObjectLabelEXT(type, object, bufSize, length, label);
     GLenum type;
     GLuint object;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *label;
CODE:
    if(! __glewGetObjectLabelEXT) {
        croak("glGetObjectLabelEXT not available on this machine");
    };
    glGetObjectLabelEXT(type, object, bufSize, length, label);

SV *
glGetObjectParameterfvARB(obj, pname, params);
     GLhandleARB obj;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetObjectParameterfvARB) {
        croak("glGetObjectParameterfvARB not available on this machine");
    };
    glGetObjectParameterfvARB(obj, pname, params);

SV *
glGetObjectParameterivAPPLE(objectType, name, pname, params);
     GLenum objectType;
     GLuint name;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetObjectParameterivAPPLE) {
        croak("glGetObjectParameterivAPPLE not available on this machine");
    };
    glGetObjectParameterivAPPLE(objectType, name, pname, params);

SV *
glGetObjectParameterivARB(obj, pname, params);
     GLhandleARB obj;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetObjectParameterivARB) {
        croak("glGetObjectParameterivARB not available on this machine");
    };
    glGetObjectParameterivARB(obj, pname, params);

SV *
glGetObjectPtrLabel(ptr, bufSize, length, label);
     const void *ptr;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *label;
CODE:
    if(! __glewGetObjectPtrLabel) {
        croak("glGetObjectPtrLabel not available on this machine");
    };
    glGetObjectPtrLabel(ptr, bufSize, length, label);

SV *
glGetOcclusionQueryivNV(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetOcclusionQueryivNV) {
        croak("glGetOcclusionQueryivNV not available on this machine");
    };
    glGetOcclusionQueryivNV(id, pname, params);

SV *
glGetOcclusionQueryuivNV(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetOcclusionQueryuivNV) {
        croak("glGetOcclusionQueryuivNV not available on this machine");
    };
    glGetOcclusionQueryuivNV(id, pname, params);

SV *
glGetPathColorGenfvNV(color, pname, value);
     GLenum color;
     GLenum pname;
     GLfloat* value;
CODE:
    if(! __glewGetPathColorGenfvNV) {
        croak("glGetPathColorGenfvNV not available on this machine");
    };
    glGetPathColorGenfvNV(color, pname, value);

SV *
glGetPathColorGenivNV(color, pname, value);
     GLenum color;
     GLenum pname;
     GLint* value;
CODE:
    if(! __glewGetPathColorGenivNV) {
        croak("glGetPathColorGenivNV not available on this machine");
    };
    glGetPathColorGenivNV(color, pname, value);

SV *
glGetPathCommandsNV(path, commands);
     GLuint path;
     GLubyte* commands;
CODE:
    if(! __glewGetPathCommandsNV) {
        croak("glGetPathCommandsNV not available on this machine");
    };
    glGetPathCommandsNV(path, commands);

SV *
glGetPathCoordsNV(path, coords);
     GLuint path;
     GLfloat* coords;
CODE:
    if(! __glewGetPathCoordsNV) {
        croak("glGetPathCoordsNV not available on this machine");
    };
    glGetPathCoordsNV(path, coords);

SV *
glGetPathDashArrayNV(path, dashArray);
     GLuint path;
     GLfloat* dashArray;
CODE:
    if(! __glewGetPathDashArrayNV) {
        croak("glGetPathDashArrayNV not available on this machine");
    };
    glGetPathDashArrayNV(path, dashArray);

GLfloat
glGetPathLengthNV(path, startSegment, numSegments);
     GLuint path;
     GLsizei startSegment;
     GLsizei numSegments;
CODE:
    if(! __glewGetPathLengthNV) {
        croak("glGetPathLengthNV not available on this machine");
    };
    RETVAL = glGetPathLengthNV(path, startSegment, numSegments);
OUTPUT:
    RETVAL

SV *
glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
     GLbitfield metricQueryMask;
     GLuint firstPathName;
     GLsizei numPaths;
     GLsizei stride;
     GLfloat* metrics;
CODE:
    if(! __glewGetPathMetricRangeNV) {
        croak("glGetPathMetricRangeNV not available on this machine");
    };
    glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);

SV *
glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
     GLbitfield metricQueryMask;
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLsizei stride;
     GLfloat *metrics;
CODE:
    if(! __glewGetPathMetricsNV) {
        croak("glGetPathMetricsNV not available on this machine");
    };
    glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);

SV *
glGetPathParameterfvNV(path, pname, value);
     GLuint path;
     GLenum pname;
     GLfloat* value;
CODE:
    if(! __glewGetPathParameterfvNV) {
        croak("glGetPathParameterfvNV not available on this machine");
    };
    glGetPathParameterfvNV(path, pname, value);

SV *
glGetPathParameterivNV(path, pname, value);
     GLuint path;
     GLenum pname;
     GLint* value;
CODE:
    if(! __glewGetPathParameterivNV) {
        croak("glGetPathParameterivNV not available on this machine");
    };
    glGetPathParameterivNV(path, pname, value);

SV *
glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
     GLenum pathListMode;
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLfloat advanceScale;
     GLfloat kerningScale;
     GLenum transformType;
     GLfloat *returnedSpacing;
CODE:
    if(! __glewGetPathSpacingNV) {
        croak("glGetPathSpacingNV not available on this machine");
    };
    glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);

SV *
glGetPathTexGenfvNV(texCoordSet, pname, value);
     GLenum texCoordSet;
     GLenum pname;
     GLfloat* value;
CODE:
    if(! __glewGetPathTexGenfvNV) {
        croak("glGetPathTexGenfvNV not available on this machine");
    };
    glGetPathTexGenfvNV(texCoordSet, pname, value);

SV *
glGetPathTexGenivNV(texCoordSet, pname, value);
     GLenum texCoordSet;
     GLenum pname;
     GLint* value;
CODE:
    if(! __glewGetPathTexGenivNV) {
        croak("glGetPathTexGenivNV not available on this machine");
    };
    glGetPathTexGenivNV(texCoordSet, pname, value);

SV *
glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
     GLuint queryId;
     GLuint counterId;
     GLuint counterNameLength;
     GLchar* counterName;
     GLuint counterDescLength;
     GLchar *counterDesc;
     GLuint *counterOffset;
     GLuint *counterDataSize;
     GLuint *counterTypeEnum;
     GLuint *counterDataTypeEnum;
     GLuint64 *rawCounterMaxValue;
CODE:
    if(! __glewGetPerfCounterInfoINTEL) {
        croak("glGetPerfCounterInfoINTEL not available on this machine");
    };
    glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);

SV *
glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
     GLuint monitor;
     GLenum pname;
     GLsizei dataSize;
     GLuint* data;
     GLint *bytesWritten;
CODE:
    if(! __glewGetPerfMonitorCounterDataAMD) {
        croak("glGetPerfMonitorCounterDataAMD not available on this machine");
    };
    glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);

SV *
glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
     GLuint group;
     GLuint counter;
     GLenum pname;
     void *data;
CODE:
    if(! __glewGetPerfMonitorCounterInfoAMD) {
        croak("glGetPerfMonitorCounterInfoAMD not available on this machine");
    };
    glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);

SV *
glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, countersSize, counters);
     GLuint group;
     GLint* numCounters;
     GLint *maxActiveCounters;
     GLsizei countersSize;
     GLuint *counters;
CODE:
    if(! __glewGetPerfMonitorCountersAMD) {
        croak("glGetPerfMonitorCountersAMD not available on this machine");
    };
    glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, countersSize, counters);

SV *
glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
     GLuint group;
     GLuint counter;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *counterString;
CODE:
    if(! __glewGetPerfMonitorCounterStringAMD) {
        croak("glGetPerfMonitorCounterStringAMD not available on this machine");
    };
    glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);

SV *
glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
     GLint* numGroups;
     GLsizei groupsSize;
     GLuint *groups;
CODE:
    if(! __glewGetPerfMonitorGroupsAMD) {
        croak("glGetPerfMonitorGroupsAMD not available on this machine");
    };
    glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);

SV *
glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
     GLuint group;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *groupString;
CODE:
    if(! __glewGetPerfMonitorGroupStringAMD) {
        croak("glGetPerfMonitorGroupStringAMD not available on this machine");
    };
    glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);

SV *
glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
     GLuint queryHandle;
     GLuint flags;
     GLsizei dataSize;
     void *data;
     GLuint *bytesWritten;
CODE:
    if(! __glewGetPerfQueryDataINTEL) {
        croak("glGetPerfQueryDataINTEL not available on this machine");
    };
    glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);

SV *
glGetPerfQueryIdByNameINTEL(queryName, queryId);
     GLchar* queryName;
     GLuint *queryId;
CODE:
    if(! __glewGetPerfQueryIdByNameINTEL) {
        croak("glGetPerfQueryIdByNameINTEL not available on this machine");
    };
    glGetPerfQueryIdByNameINTEL(queryName, queryId);

SV *
glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
     GLuint queryId;
     GLuint queryNameLength;
     GLchar* queryName;
     GLuint *dataSize;
     GLuint *noCounters;
     GLuint *noInstances;
     GLuint *capsMask;
CODE:
    if(! __glewGetPerfQueryInfoINTEL) {
        croak("glGetPerfQueryInfoINTEL not available on this machine");
    };
    glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);

SV *
glGetPixelTransformParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewGetPixelTransformParameterfvEXT) {
        croak("glGetPixelTransformParameterfvEXT not available on this machine");
    };
    glGetPixelTransformParameterfvEXT(target, pname, params);

SV *
glGetPixelTransformParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewGetPixelTransformParameterivEXT) {
        croak("glGetPixelTransformParameterivEXT not available on this machine");
    };
    glGetPixelTransformParameterivEXT(target, pname, params);

SV *
glGetPointerIndexedvEXT(target, index, params);
     GLenum target;
     GLuint index;
     void** params;
CODE:
    if(! __glewGetPointerIndexedvEXT) {
        croak("glGetPointerIndexedvEXT not available on this machine");
    };
    glGetPointerIndexedvEXT(target, index, params);

SV *
glGetPointeri_vEXT(pname, index, params);
     GLenum pname;
     GLuint index;
     void** params;
CODE:
    if(! __glewGetPointeri_vEXT) {
        croak("glGetPointeri_vEXT not available on this machine");
    };
    glGetPointeri_vEXT(pname, index, params);

SV *
glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
     GLuint program;
     GLsizei bufSize;
     GLsizei* length;
     GLenum *binaryFormat;
     void*binary;
CODE:
    if(! __glewGetProgramBinary) {
        croak("glGetProgramBinary not available on this machine");
    };
    glGetProgramBinary(program, bufSize, length, binaryFormat, binary);

SV *
glGetProgramEnvParameterdvARB(target, index, params);
     GLenum target;
     GLuint index;
     GLdouble* params;
CODE:
    if(! __glewGetProgramEnvParameterdvARB) {
        croak("glGetProgramEnvParameterdvARB not available on this machine");
    };
    glGetProgramEnvParameterdvARB(target, index, params);

SV *
glGetProgramEnvParameterfvARB(target, index, params);
     GLenum target;
     GLuint index;
     GLfloat* params;
CODE:
    if(! __glewGetProgramEnvParameterfvARB) {
        croak("glGetProgramEnvParameterfvARB not available on this machine");
    };
    glGetProgramEnvParameterfvARB(target, index, params);

SV *
glGetProgramInfoLog(program, bufSize, length, infoLog);
     GLuint program;
     GLsizei bufSize;
     GLsizei* length;
     GLchar* infoLog;
CODE:
    if(! __glewGetProgramInfoLog) {
        croak("glGetProgramInfoLog not available on this machine");
    };
    glGetProgramInfoLog(program, bufSize, length, infoLog);

SV *
glGetProgramInterfaceiv(program, programInterface, pname, params);
     GLuint program;
     GLenum programInterface;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetProgramInterfaceiv) {
        croak("glGetProgramInterfaceiv not available on this machine");
    };
    glGetProgramInterfaceiv(program, programInterface, pname, params);

SV *
glGetProgramiv(program, pname, param);
     GLuint program;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetProgramiv) {
        croak("glGetProgramiv not available on this machine");
    };
    glGetProgramiv(program, pname, param);

SV *
glGetProgramivARB(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetProgramivARB) {
        croak("glGetProgramivARB not available on this machine");
    };
    glGetProgramivARB(target, pname, params);

SV *
glGetProgramivNV(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetProgramivNV) {
        croak("glGetProgramivNV not available on this machine");
    };
    glGetProgramivNV(id, pname, params);

SV *
glGetProgramLocalParameterdvARB(target, index, params);
     GLenum target;
     GLuint index;
     GLdouble* params;
CODE:
    if(! __glewGetProgramLocalParameterdvARB) {
        croak("glGetProgramLocalParameterdvARB not available on this machine");
    };
    glGetProgramLocalParameterdvARB(target, index, params);

SV *
glGetProgramLocalParameterfvARB(target, index, params);
     GLenum target;
     GLuint index;
     GLfloat* params;
CODE:
    if(! __glewGetProgramLocalParameterfvARB) {
        croak("glGetProgramLocalParameterfvARB not available on this machine");
    };
    glGetProgramLocalParameterfvARB(target, index, params);

SV *
glGetProgramNamedParameterdvNV(id, len, name, params);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     GLdouble *params;
CODE:
    if(! __glewGetProgramNamedParameterdvNV) {
        croak("glGetProgramNamedParameterdvNV not available on this machine");
    };
    glGetProgramNamedParameterdvNV(id, len, name, params);

SV *
glGetProgramNamedParameterfvNV(id, len, name, params);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     GLfloat *params;
CODE:
    if(! __glewGetProgramNamedParameterfvNV) {
        croak("glGetProgramNamedParameterfvNV not available on this machine");
    };
    glGetProgramNamedParameterfvNV(id, len, name, params);

SV *
glGetProgramParameterdvNV(target, index, pname, params);
     GLenum target;
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetProgramParameterdvNV) {
        croak("glGetProgramParameterdvNV not available on this machine");
    };
    glGetProgramParameterdvNV(target, index, pname, params);

SV *
glGetProgramParameterfvNV(target, index, pname, params);
     GLenum target;
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetProgramParameterfvNV) {
        croak("glGetProgramParameterfvNV not available on this machine");
    };
    glGetProgramParameterfvNV(target, index, pname, params);

SV *
glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
     GLuint pipeline;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *infoLog;
CODE:
    if(! __glewGetProgramPipelineInfoLog) {
        croak("glGetProgramPipelineInfoLog not available on this machine");
    };
    glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);

SV *
glGetProgramPipelineiv(pipeline, pname, params);
     GLuint pipeline;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetProgramPipelineiv) {
        croak("glGetProgramPipelineiv not available on this machine");
    };
    glGetProgramPipelineiv(pipeline, pname, params);

SV *
glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
     GLuint program;
     GLenum programInterface;
     GLuint index;
     GLsizei propCount;
     const GLenum* props;
     GLsizei bufSize;
     GLsizei *length;
     GLfloat *params;
CODE:
    if(! __glewGetProgramResourcefvNV) {
        croak("glGetProgramResourcefvNV not available on this machine");
    };
    glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);

GLuint
glGetProgramResourceIndex(program, programInterface, name);
     GLuint program;
     GLenum programInterface;
     const GLchar* name;
CODE:
    if(! __glewGetProgramResourceIndex) {
        croak("glGetProgramResourceIndex not available on this machine");
    };
    RETVAL = glGetProgramResourceIndex(program, programInterface, name);
OUTPUT:
    RETVAL

SV *
glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
     GLuint program;
     GLenum programInterface;
     GLuint index;
     GLsizei propCount;
     const GLenum* props;
     GLsizei bufSize;
     GLsizei *length;
     GLint *params;
CODE:
    if(! __glewGetProgramResourceiv) {
        croak("glGetProgramResourceiv not available on this machine");
    };
    glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);

GLint
glGetProgramResourceLocation(program, programInterface, name);
     GLuint program;
     GLenum programInterface;
     const GLchar* name;
CODE:
    if(! __glewGetProgramResourceLocation) {
        croak("glGetProgramResourceLocation not available on this machine");
    };
    RETVAL = glGetProgramResourceLocation(program, programInterface, name);
OUTPUT:
    RETVAL

GLint
glGetProgramResourceLocationIndex(program, programInterface, name);
     GLuint program;
     GLenum programInterface;
     const GLchar* name;
CODE:
    if(! __glewGetProgramResourceLocationIndex) {
        croak("glGetProgramResourceLocationIndex not available on this machine");
    };
    RETVAL = glGetProgramResourceLocationIndex(program, programInterface, name);
OUTPUT:
    RETVAL

SV *
glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
     GLuint program;
     GLenum programInterface;
     GLuint index;
     GLsizei bufSize;
     GLsizei* length;
     GLchar *name;
CODE:
    if(! __glewGetProgramResourceName) {
        croak("glGetProgramResourceName not available on this machine");
    };
    glGetProgramResourceName(program, programInterface, index, bufSize, length, name);

SV *
glGetProgramStageiv(program, shadertype, pname, values);
     GLuint program;
     GLenum shadertype;
     GLenum pname;
     GLint* values;
CODE:
    if(! __glewGetProgramStageiv) {
        croak("glGetProgramStageiv not available on this machine");
    };
    glGetProgramStageiv(program, shadertype, pname, values);

SV *
glGetProgramStringARB(target, pname, string);
     GLenum target;
     GLenum pname;
     void *string;
CODE:
    if(! __glewGetProgramStringARB) {
        croak("glGetProgramStringARB not available on this machine");
    };
    glGetProgramStringARB(target, pname, string);

SV *
glGetProgramStringNV(id, pname, program);
     GLuint id;
     GLenum pname;
     GLubyte* program;
CODE:
    if(! __glewGetProgramStringNV) {
        croak("glGetProgramStringNV not available on this machine");
    };
    glGetProgramStringNV(id, pname, program);

SV *
glGetQueryBufferObjecti64v(id,buffer,pname,offset);
     GLuint id;
    GLuint buffer;
    GLenum pname;
    GLintptr offset;
CODE:
    if(! __glewGetQueryBufferObjecti64v) {
        croak("glGetQueryBufferObjecti64v not available on this machine");
    };
    glGetQueryBufferObjecti64v(id,buffer,pname,offset);

SV *
glGetQueryBufferObjectiv(id,buffer,pname,offset);
     GLuint id;
    GLuint buffer;
    GLenum pname;
    GLintptr offset;
CODE:
    if(! __glewGetQueryBufferObjectiv) {
        croak("glGetQueryBufferObjectiv not available on this machine");
    };
    glGetQueryBufferObjectiv(id,buffer,pname,offset);

SV *
glGetQueryBufferObjectui64v(id,buffer,pname,offset);
     GLuint id;
    GLuint buffer;
    GLenum pname;
    GLintptr offset;
CODE:
    if(! __glewGetQueryBufferObjectui64v) {
        croak("glGetQueryBufferObjectui64v not available on this machine");
    };
    glGetQueryBufferObjectui64v(id,buffer,pname,offset);

SV *
glGetQueryBufferObjectuiv(id,buffer,pname,offset);
     GLuint id;
    GLuint buffer;
    GLenum pname;
    GLintptr offset;
CODE:
    if(! __glewGetQueryBufferObjectuiv) {
        croak("glGetQueryBufferObjectuiv not available on this machine");
    };
    glGetQueryBufferObjectuiv(id,buffer,pname,offset);

SV *
glGetQueryIndexediv(target, index, pname, params);
     GLenum target;
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryIndexediv) {
        croak("glGetQueryIndexediv not available on this machine");
    };
    glGetQueryIndexediv(target, index, pname, params);

SV *
glGetQueryiv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryiv) {
        croak("glGetQueryiv not available on this machine");
    };
    glGetQueryiv(target, pname, params);

SV *
glGetQueryivANGLE(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryivANGLE) {
        croak("glGetQueryivANGLE not available on this machine");
    };
    glGetQueryivANGLE(target, pname, params);

SV *
glGetQueryivARB(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryivARB) {
        croak("glGetQueryivARB not available on this machine");
    };
    glGetQueryivARB(target, pname, params);

SV *
glGetQueryObjecti64v(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint64* params;
CODE:
    if(! __glewGetQueryObjecti64v) {
        croak("glGetQueryObjecti64v not available on this machine");
    };
    glGetQueryObjecti64v(id, pname, params);

SV *
glGetQueryObjecti64vANGLE(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint64* params;
CODE:
    if(! __glewGetQueryObjecti64vANGLE) {
        croak("glGetQueryObjecti64vANGLE not available on this machine");
    };
    glGetQueryObjecti64vANGLE(id, pname, params);

SV *
glGetQueryObjecti64vEXT(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint64EXT *params;
CODE:
    if(! __glewGetQueryObjecti64vEXT) {
        croak("glGetQueryObjecti64vEXT not available on this machine");
    };
    glGetQueryObjecti64vEXT(id, pname, params);

SV *
glGetQueryObjectiv(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryObjectiv) {
        croak("glGetQueryObjectiv not available on this machine");
    };
    glGetQueryObjectiv(id, pname, params);

SV *
glGetQueryObjectivANGLE(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryObjectivANGLE) {
        croak("glGetQueryObjectivANGLE not available on this machine");
    };
    glGetQueryObjectivANGLE(id, pname, params);

SV *
glGetQueryObjectivARB(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetQueryObjectivARB) {
        croak("glGetQueryObjectivARB not available on this machine");
    };
    glGetQueryObjectivARB(id, pname, params);

SV *
glGetQueryObjectui64v(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint64* params;
CODE:
    if(! __glewGetQueryObjectui64v) {
        croak("glGetQueryObjectui64v not available on this machine");
    };
    glGetQueryObjectui64v(id, pname, params);

SV *
glGetQueryObjectui64vANGLE(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint64* params;
CODE:
    if(! __glewGetQueryObjectui64vANGLE) {
        croak("glGetQueryObjectui64vANGLE not available on this machine");
    };
    glGetQueryObjectui64vANGLE(id, pname, params);

SV *
glGetQueryObjectui64vEXT(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint64EXT *params;
CODE:
    if(! __glewGetQueryObjectui64vEXT) {
        croak("glGetQueryObjectui64vEXT not available on this machine");
    };
    glGetQueryObjectui64vEXT(id, pname, params);

SV *
glGetQueryObjectuiv(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetQueryObjectuiv) {
        croak("glGetQueryObjectuiv not available on this machine");
    };
    glGetQueryObjectuiv(id, pname, params);

SV *
glGetQueryObjectuivANGLE(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetQueryObjectuivANGLE) {
        croak("glGetQueryObjectuivANGLE not available on this machine");
    };
    glGetQueryObjectuivANGLE(id, pname, params);

SV *
glGetQueryObjectuivARB(id, pname, params);
     GLuint id;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetQueryObjectuivARB) {
        croak("glGetQueryObjectuivARB not available on this machine");
    };
    glGetQueryObjectuivARB(id, pname, params);

SV *
glGetRenderbufferParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetRenderbufferParameteriv) {
        croak("glGetRenderbufferParameteriv not available on this machine");
    };
    glGetRenderbufferParameteriv(target, pname, params);

SV *
glGetRenderbufferParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetRenderbufferParameterivEXT) {
        croak("glGetRenderbufferParameterivEXT not available on this machine");
    };
    glGetRenderbufferParameterivEXT(target, pname, params);

SV *
glGetSamplerParameterfv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetSamplerParameterfv) {
        croak("glGetSamplerParameterfv not available on this machine");
    };
    glGetSamplerParameterfv(sampler, pname, params);

SV *
glGetSamplerParameterIiv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetSamplerParameterIiv) {
        croak("glGetSamplerParameterIiv not available on this machine");
    };
    glGetSamplerParameterIiv(sampler, pname, params);

SV *
glGetSamplerParameterIuiv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetSamplerParameterIuiv) {
        croak("glGetSamplerParameterIuiv not available on this machine");
    };
    glGetSamplerParameterIuiv(sampler, pname, params);

SV *
glGetSamplerParameteriv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetSamplerParameteriv) {
        croak("glGetSamplerParameteriv not available on this machine");
    };
    glGetSamplerParameteriv(sampler, pname, params);

SV *
glGetSeparableFilter(target, format, type, row, column, span);
     GLenum target;
     GLenum format;
     GLenum type;
     void *row;
     void *column;
     void *span;
CODE:
    if(! __glewGetSeparableFilter) {
        croak("glGetSeparableFilter not available on this machine");
    };
    glGetSeparableFilter(target, format, type, row, column, span);

SV *
glGetSeparableFilterEXT(target, format, type, row, column, span);
     GLenum target;
     GLenum format;
     GLenum type;
     void *row;
     void *column;
     void *span;
CODE:
    if(! __glewGetSeparableFilterEXT) {
        croak("glGetSeparableFilterEXT not available on this machine");
    };
    glGetSeparableFilterEXT(target, format, type, row, column, span);

SV *
glGetShaderInfoLog(shader, bufSize, length, infoLog);
     GLuint shader;
     GLsizei bufSize;
     GLsizei* length;
     GLchar* infoLog;
CODE:
    if(! __glewGetShaderInfoLog) {
        croak("glGetShaderInfoLog not available on this machine");
    };
    printf("length addr: %x\n", length);
    printf("length value: %d\n", (int) *length);
    printf("infolog addr: %x\n", infoLog);
    printf("infolog value: '%s'\n", infoLog);
    glGetShaderInfoLog(shader, bufSize, length, infoLog);

SV *
glGetShaderiv(shader, pname, param);
     GLuint shader;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetShaderiv) {
        croak("glGetShaderiv not available on this machine");
    };
    glGetShaderiv(shader, pname, param);

SV *
glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
     GLenum shadertype;
     GLenum precisiontype;
     GLint* range;
     GLint *precision;
CODE:
    if(! __glewGetShaderPrecisionFormat) {
        croak("glGetShaderPrecisionFormat not available on this machine");
    };
    glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);

SV *
glGetShaderSource(obj, maxLength, length, source);
     GLuint obj;
     GLsizei maxLength;
     GLsizei* length;
     GLchar* source;
CODE:
    if(! __glewGetShaderSource) {
        croak("glGetShaderSource not available on this machine");
    };
    glGetShaderSource(obj, maxLength, length, source);

SV *
glGetShaderSourceARB(obj, maxLength, length, source);
     GLhandleARB obj;
     GLsizei maxLength;
     GLsizei* length;
     GLcharARB *source;
CODE:
    if(! __glewGetShaderSourceARB) {
        croak("glGetShaderSourceARB not available on this machine");
    };
    glGetShaderSourceARB(obj, maxLength, length, source);

SV *
glGetSharpenTexFuncSGIS(target, points);
     GLenum target;
     GLfloat* points;
CODE:
    if(! __glewGetSharpenTexFuncSGIS) {
        croak("glGetSharpenTexFuncSGIS not available on this machine");
    };
    glGetSharpenTexFuncSGIS(target, points);

GLushort
glGetStageIndexNV(shadertype);
     GLenum shadertype;
CODE:
    if(! __glewGetStageIndexNV) {
        croak("glGetStageIndexNV not available on this machine");
    };
    RETVAL = glGetStageIndexNV(shadertype);
OUTPUT:
    RETVAL

GLuint
glGetSubroutineIndex(program, shadertype, name);
     GLuint program;
     GLenum shadertype;
     const GLchar* name;
CODE:
    if(! __glewGetSubroutineIndex) {
        croak("glGetSubroutineIndex not available on this machine");
    };
    RETVAL = glGetSubroutineIndex(program, shadertype, name);
OUTPUT:
    RETVAL

GLint
glGetSubroutineUniformLocation(program, shadertype, name);
     GLuint program;
     GLenum shadertype;
     const GLchar* name;
CODE:
    if(! __glewGetSubroutineUniformLocation) {
        croak("glGetSubroutineUniformLocation not available on this machine");
    };
    RETVAL = glGetSubroutineUniformLocation(program, shadertype, name);
OUTPUT:
    RETVAL

SV *
glGetSynciv(GLsync,pname,bufSize,length, values);
     GLsync GLsync;
    GLenum pname;
    GLsizei bufSize;
    GLsizei* length;
     GLint *values;
CODE:
    if(! __glewGetSynciv) {
        croak("glGetSynciv not available on this machine");
    };
    glGetSynciv(GLsync,pname,bufSize,length, values);

SV *
glGetTexBumpParameterfvATI(pname, param);
     GLenum pname;
     GLfloat *param;
CODE:
    if(! __glewGetTexBumpParameterfvATI) {
        croak("glGetTexBumpParameterfvATI not available on this machine");
    };
    glGetTexBumpParameterfvATI(pname, param);

SV *
glGetTexBumpParameterivATI(pname, param);
     GLenum pname;
     GLint *param;
CODE:
    if(! __glewGetTexBumpParameterivATI) {
        croak("glGetTexBumpParameterivATI not available on this machine");
    };
    glGetTexBumpParameterivATI(pname, param);

SV *
glGetTexEnvxv(env, pname, params);
     GLenum env;
     GLenum pname;
     GLfixed* params;
CODE:
    if(! __glewGetTexEnvxv) {
        croak("glGetTexEnvxv not available on this machine");
    };
    glGetTexEnvxv(env, pname, params);

SV *
glGetTexFilterFuncSGIS(target, filter, weights);
     GLenum target;
     GLenum filter;
     GLfloat* weights;
CODE:
    if(! __glewGetTexFilterFuncSGIS) {
        croak("glGetTexFilterFuncSGIS not available on this machine");
    };
    glGetTexFilterFuncSGIS(target, filter, weights);

SV *
glGetTexParameterIiv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTexParameterIiv) {
        croak("glGetTexParameterIiv not available on this machine");
    };
    glGetTexParameterIiv(target, pname, params);

SV *
glGetTexParameterIivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetTexParameterIivEXT) {
        croak("glGetTexParameterIivEXT not available on this machine");
    };
    glGetTexParameterIivEXT(target, pname, params);

SV *
glGetTexParameterIuiv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetTexParameterIuiv) {
        croak("glGetTexParameterIuiv not available on this machine");
    };
    glGetTexParameterIuiv(target, pname, params);

SV *
glGetTexParameterIuivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     GLuint *params;
CODE:
    if(! __glewGetTexParameterIuivEXT) {
        croak("glGetTexParameterIuivEXT not available on this machine");
    };
    glGetTexParameterIuivEXT(target, pname, params);

SV *
glGetTexParameterPointervAPPLE(target, pname, params);
     GLenum target;
     GLenum pname;
     void **params;
CODE:
    if(! __glewGetTexParameterPointervAPPLE) {
        croak("glGetTexParameterPointervAPPLE not available on this machine");
    };
    glGetTexParameterPointervAPPLE(target, pname, params);

SV *
glGetTexParameterxv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfixed* params;
CODE:
    if(! __glewGetTexParameterxv) {
        croak("glGetTexParameterxv not available on this machine");
    };
    glGetTexParameterxv(target, pname, params);

GLuint64
glGetTextureHandleARB(texture);
     GLuint texture;
CODE:
    if(! __glewGetTextureHandleARB) {
        croak("glGetTextureHandleARB not available on this machine");
    };
    RETVAL = glGetTextureHandleARB(texture);
OUTPUT:
    RETVAL

GLuint64
glGetTextureHandleNV(texture);
     GLuint texture;
CODE:
    if(! __glewGetTextureHandleNV) {
        croak("glGetTextureHandleNV not available on this machine");
    };
    RETVAL = glGetTextureHandleNV(texture);
OUTPUT:
    RETVAL

SV *
glGetTextureImage(texture, level, format, type, bufSize, pixels);
     GLuint texture;
     GLint level;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void *pixels;
CODE:
    if(! __glewGetTextureImage) {
        croak("glGetTextureImage not available on this machine");
    };
    glGetTextureImage(texture, level, format, type, bufSize, pixels);

SV *
glGetTextureImageEXT(texture, target, level, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum format;
     GLenum type;
     void *pixels;
CODE:
    if(! __glewGetTextureImageEXT) {
        croak("glGetTextureImageEXT not available on this machine");
    };
    glGetTextureImageEXT(texture, target, level, format, type, pixels);

SV *
glGetTextureLevelParameterfv(texture, level, pname, params);
     GLuint texture;
     GLint level;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetTextureLevelParameterfv) {
        croak("glGetTextureLevelParameterfv not available on this machine");
    };
    glGetTextureLevelParameterfv(texture, level, pname, params);

SV *
glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetTextureLevelParameterfvEXT) {
        croak("glGetTextureLevelParameterfvEXT not available on this machine");
    };
    glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);

SV *
glGetTextureLevelParameteriv(texture, level, pname, params);
     GLuint texture;
     GLint level;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureLevelParameteriv) {
        croak("glGetTextureLevelParameteriv not available on this machine");
    };
    glGetTextureLevelParameteriv(texture, level, pname, params);

SV *
glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
     GLuint texture;
     GLenum target;
     GLint level;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureLevelParameterivEXT) {
        croak("glGetTextureLevelParameterivEXT not available on this machine");
    };
    glGetTextureLevelParameterivEXT(texture, target, level, pname, params);

SV *
glGetTextureParameterfv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetTextureParameterfv) {
        croak("glGetTextureParameterfv not available on this machine");
    };
    glGetTextureParameterfv(texture, pname, params);

SV *
glGetTextureParameterfvEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetTextureParameterfvEXT) {
        croak("glGetTextureParameterfvEXT not available on this machine");
    };
    glGetTextureParameterfvEXT(texture, target, pname, params);

SV *
glGetTextureParameterIiv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureParameterIiv) {
        croak("glGetTextureParameterIiv not available on this machine");
    };
    glGetTextureParameterIiv(texture, pname, params);

SV *
glGetTextureParameterIivEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureParameterIivEXT) {
        croak("glGetTextureParameterIivEXT not available on this machine");
    };
    glGetTextureParameterIivEXT(texture, target, pname, params);

SV *
glGetTextureParameterIuiv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetTextureParameterIuiv) {
        croak("glGetTextureParameterIuiv not available on this machine");
    };
    glGetTextureParameterIuiv(texture, pname, params);

SV *
glGetTextureParameterIuivEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetTextureParameterIuivEXT) {
        croak("glGetTextureParameterIuivEXT not available on this machine");
    };
    glGetTextureParameterIuivEXT(texture, target, pname, params);

SV *
glGetTextureParameteriv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureParameteriv) {
        croak("glGetTextureParameteriv not available on this machine");
    };
    glGetTextureParameteriv(texture, pname, params);

SV *
glGetTextureParameterivEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTextureParameterivEXT) {
        croak("glGetTextureParameterivEXT not available on this machine");
    };
    glGetTextureParameterivEXT(texture, target, pname, params);

GLuint64
glGetTextureSamplerHandleARB(texture, sampler);
     GLuint texture;
     GLuint sampler;
CODE:
    if(! __glewGetTextureSamplerHandleARB) {
        croak("glGetTextureSamplerHandleARB not available on this machine");
    };
    RETVAL = glGetTextureSamplerHandleARB(texture, sampler);
OUTPUT:
    RETVAL

GLuint64
glGetTextureSamplerHandleNV(texture, sampler);
     GLuint texture;
     GLuint sampler;
CODE:
    if(! __glewGetTextureSamplerHandleNV) {
        croak("glGetTextureSamplerHandleNV not available on this machine");
    };
    RETVAL = glGetTextureSamplerHandleNV(texture, sampler);
OUTPUT:
    RETVAL

SV *
glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void *pixels;
CODE:
    if(! __glewGetTextureSubImage) {
        croak("glGetTextureSubImage not available on this machine");
    };
    glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);

SV *
glGetTrackMatrixivNV(target, address, pname, params);
     GLenum target;
     GLuint address;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetTrackMatrixivNV) {
        croak("glGetTrackMatrixivNV not available on this machine");
    };
    glGetTrackMatrixivNV(target, address, pname, params);

SV *
glGetTransformFeedbacki64_v(xfb, pname, index, param);
     GLuint xfb;
     GLenum pname;
     GLuint index;
     GLint64* param;
CODE:
    if(! __glewGetTransformFeedbacki64_v) {
        croak("glGetTransformFeedbacki64_v not available on this machine");
    };
    glGetTransformFeedbacki64_v(xfb, pname, index, param);

SV *
glGetTransformFeedbackiv(xfb, pname, param);
     GLuint xfb;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetTransformFeedbackiv) {
        croak("glGetTransformFeedbackiv not available on this machine");
    };
    glGetTransformFeedbackiv(xfb, pname, param);

SV *
glGetTransformFeedbacki_v(xfb, pname, index, param);
     GLuint xfb;
     GLenum pname;
     GLuint index;
     GLint* param;
CODE:
    if(! __glewGetTransformFeedbacki_v) {
        croak("glGetTransformFeedbacki_v not available on this machine");
    };
    glGetTransformFeedbacki_v(xfb, pname, index, param);

SV *
glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
     GLuint program;
     GLuint index;
     GLsizei bufSize;
     GLsizei * length;
     GLsizei * size;
     GLenum * type;
     GLchar * name;
CODE:
    if(! __glewGetTransformFeedbackVarying) {
        croak("glGetTransformFeedbackVarying not available on this machine");
    };
    glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);

SV *
glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
     GLuint program;
     GLuint index;
     GLsizei bufSize;
     GLsizei* length;
     GLsizei *size;
     GLenum *type;
     GLchar *name;
CODE:
    if(! __glewGetTransformFeedbackVaryingEXT) {
        croak("glGetTransformFeedbackVaryingEXT not available on this machine");
    };
    glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);

SV *
glGetTransformFeedbackVaryingNV(program, index, location);
     GLuint program;
     GLuint index;
     GLint *location;
CODE:
    if(! __glewGetTransformFeedbackVaryingNV) {
        croak("glGetTransformFeedbackVaryingNV not available on this machine");
    };
    glGetTransformFeedbackVaryingNV(program, index, location);

SV *
glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
     GLuint shader;
     GLsizei bufsize;
     GLsizei* length;
     GLchar* source;
CODE:
    if(! __glewGetTranslatedShaderSourceANGLE) {
        croak("glGetTranslatedShaderSourceANGLE not available on this machine");
    };
    glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);

GLuint
glGetUniformBlockIndex(program, uniformBlockName);
     GLuint program;
     const GLchar* uniformBlockName;
CODE:
    if(! __glewGetUniformBlockIndex) {
        croak("glGetUniformBlockIndex not available on this machine");
    };
    RETVAL = glGetUniformBlockIndex(program, uniformBlockName);
OUTPUT:
    RETVAL

GLint
glGetUniformBufferSizeEXT(program, location);
     GLuint program;
     GLint location;
CODE:
    if(! __glewGetUniformBufferSizeEXT) {
        croak("glGetUniformBufferSizeEXT not available on this machine");
    };
    RETVAL = glGetUniformBufferSizeEXT(program, location);
OUTPUT:
    RETVAL

SV *
glGetUniformdv(program, location, params);
     GLuint program;
     GLint location;
     GLdouble* params;
CODE:
    if(! __glewGetUniformdv) {
        croak("glGetUniformdv not available on this machine");
    };
    glGetUniformdv(program, location, params);

SV *
glGetUniformfv(program, location, params);
     GLuint program;
     GLint location;
     GLfloat* params;
CODE:
    if(! __glewGetUniformfv) {
        croak("glGetUniformfv not available on this machine");
    };
    glGetUniformfv(program, location, params);

SV *
glGetUniformfvARB(programObj, location, params);
     GLhandleARB programObj;
     GLint location;
     GLfloat* params;
CODE:
    if(! __glewGetUniformfvARB) {
        croak("glGetUniformfvARB not available on this machine");
    };
    glGetUniformfvARB(programObj, location, params);

SV *
glGetUniformi64vARB(program, location, params);
     GLuint program;
     GLint location;
     GLint64* params;
CODE:
    if(! __glewGetUniformi64vARB) {
        croak("glGetUniformi64vARB not available on this machine");
    };
    glGetUniformi64vARB(program, location, params);

SV *
glGetUniformi64vNV(program, location, params);
     GLuint program;
     GLint location;
     GLint64EXT* params;
CODE:
    if(! __glewGetUniformi64vNV) {
        croak("glGetUniformi64vNV not available on this machine");
    };
    glGetUniformi64vNV(program, location, params);

SV *
glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
     GLuint program;
     GLsizei uniformCount;
     const GLchar* const * uniformNames;
     GLuint* uniformIndices;
CODE:
    if(! __glewGetUniformIndices) {
        croak("glGetUniformIndices not available on this machine");
    };
    glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);

SV *
glGetUniformiv(program, location, params);
     GLuint program;
     GLint location;
     GLint* params;
CODE:
    if(! __glewGetUniformiv) {
        croak("glGetUniformiv not available on this machine");
    };
    glGetUniformiv(program, location, params);

SV *
glGetUniformivARB(programObj, location, params);
     GLhandleARB programObj;
     GLint location;
     GLint* params;
CODE:
    if(! __glewGetUniformivARB) {
        croak("glGetUniformivARB not available on this machine");
    };
    glGetUniformivARB(programObj, location, params);

GLint
glGetUniformLocation(program, name);
     GLuint program;
     const GLchar* name;
CODE:
    if(! __glewGetUniformLocation) {
        croak("glGetUniformLocation not available on this machine");
    };
    RETVAL = glGetUniformLocation(program, name);
OUTPUT:
    RETVAL

GLint
glGetUniformLocationARB(programObj, name);
     GLhandleARB programObj;
     const GLcharARB* name;
CODE:
    if(! __glewGetUniformLocationARB) {
        croak("glGetUniformLocationARB not available on this machine");
    };
    RETVAL = glGetUniformLocationARB(programObj, name);
OUTPUT:
    RETVAL

GLintptr
glGetUniformOffsetEXT(program, location);
     GLuint program;
     GLint location;
CODE:
    if(! __glewGetUniformOffsetEXT) {
        croak("glGetUniformOffsetEXT not available on this machine");
    };
    RETVAL = glGetUniformOffsetEXT(program, location);
OUTPUT:
    RETVAL

SV *
glGetUniformSubroutineuiv(shadertype, location, params);
     GLenum shadertype;
     GLint location;
     GLuint* params;
CODE:
    if(! __glewGetUniformSubroutineuiv) {
        croak("glGetUniformSubroutineuiv not available on this machine");
    };
    glGetUniformSubroutineuiv(shadertype, location, params);

SV *
glGetUniformui64vARB(program, location, params);
     GLuint program;
     GLint location;
     GLuint64* params;
CODE:
    if(! __glewGetUniformui64vARB) {
        croak("glGetUniformui64vARB not available on this machine");
    };
    glGetUniformui64vARB(program, location, params);

SV *
glGetUniformui64vNV(program, location, params);
     GLuint program;
     GLint location;
     GLuint64EXT* params;
CODE:
    if(! __glewGetUniformui64vNV) {
        croak("glGetUniformui64vNV not available on this machine");
    };
    glGetUniformui64vNV(program, location, params);

SV *
glGetUniformuiv(program, location, params);
     GLuint program;
     GLint location;
     GLuint* params;
CODE:
    if(! __glewGetUniformuiv) {
        croak("glGetUniformuiv not available on this machine");
    };
    glGetUniformuiv(program, location, params);

SV *
glGetUniformuivEXT(program, location, params);
     GLuint program;
     GLint location;
     GLuint *params;
CODE:
    if(! __glewGetUniformuivEXT) {
        croak("glGetUniformuivEXT not available on this machine");
    };
    glGetUniformuivEXT(program, location, params);

SV *
glGetVariantArrayObjectfvATI(id, pname, params);
     GLuint id;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVariantArrayObjectfvATI) {
        croak("glGetVariantArrayObjectfvATI not available on this machine");
    };
    glGetVariantArrayObjectfvATI(id, pname, params);

SV *
glGetVariantArrayObjectivATI(id, pname, params);
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVariantArrayObjectivATI) {
        croak("glGetVariantArrayObjectivATI not available on this machine");
    };
    glGetVariantArrayObjectivATI(id, pname, params);

SV *
glGetVariantBooleanvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLboolean *data;
CODE:
    if(! __glewGetVariantBooleanvEXT) {
        croak("glGetVariantBooleanvEXT not available on this machine");
    };
    glGetVariantBooleanvEXT(id, value, data);

SV *
glGetVariantFloatvEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLfloat *data;
CODE:
    if(! __glewGetVariantFloatvEXT) {
        croak("glGetVariantFloatvEXT not available on this machine");
    };
    glGetVariantFloatvEXT(id, value, data);

SV *
glGetVariantIntegervEXT(id, value, data);
     GLuint id;
     GLenum value;
     GLint *data;
CODE:
    if(! __glewGetVariantIntegervEXT) {
        croak("glGetVariantIntegervEXT not available on this machine");
    };
    glGetVariantIntegervEXT(id, value, data);

SV *
glGetVariantPointervEXT(id, value, data);
     GLuint id;
     GLenum value;
     void **data;
CODE:
    if(! __glewGetVariantPointervEXT) {
        croak("glGetVariantPointervEXT not available on this machine");
    };
    glGetVariantPointervEXT(id, value, data);

GLint
glGetVaryingLocationNV(program, name);
     GLuint program;
     const GLchar *name;
CODE:
    if(! __glewGetVaryingLocationNV) {
        croak("glGetVaryingLocationNV not available on this machine");
    };
    RETVAL = glGetVaryingLocationNV(program, name);
OUTPUT:
    RETVAL

SV *
glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
     GLuint vaobj;
     GLuint index;
     GLenum pname;
     GLint64* param;
CODE:
    if(! __glewGetVertexArrayIndexed64iv) {
        croak("glGetVertexArrayIndexed64iv not available on this machine");
    };
    glGetVertexArrayIndexed64iv(vaobj, index, pname, param);

SV *
glGetVertexArrayIndexediv(vaobj, index, pname, param);
     GLuint vaobj;
     GLuint index;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetVertexArrayIndexediv) {
        croak("glGetVertexArrayIndexediv not available on this machine");
    };
    glGetVertexArrayIndexediv(vaobj, index, pname, param);

SV *
glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
     GLuint vaobj;
     GLuint index;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetVertexArrayIntegeri_vEXT) {
        croak("glGetVertexArrayIntegeri_vEXT not available on this machine");
    };
    glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);

SV *
glGetVertexArrayIntegervEXT(vaobj, pname, param);
     GLuint vaobj;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetVertexArrayIntegervEXT) {
        croak("glGetVertexArrayIntegervEXT not available on this machine");
    };
    glGetVertexArrayIntegervEXT(vaobj, pname, param);

SV *
glGetVertexArrayiv(vaobj, pname, param);
     GLuint vaobj;
     GLenum pname;
     GLint* param;
CODE:
    if(! __glewGetVertexArrayiv) {
        croak("glGetVertexArrayiv not available on this machine");
    };
    glGetVertexArrayiv(vaobj, pname, param);

SV *
glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
     GLuint vaobj;
     GLuint index;
     GLenum pname;
     void** param;
CODE:
    if(! __glewGetVertexArrayPointeri_vEXT) {
        croak("glGetVertexArrayPointeri_vEXT not available on this machine");
    };
    glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);

SV *
glGetVertexArrayPointervEXT(vaobj, pname, param);
     GLuint vaobj;
     GLenum pname;
     void** param;
CODE:
    if(! __glewGetVertexArrayPointervEXT) {
        croak("glGetVertexArrayPointervEXT not available on this machine");
    };
    glGetVertexArrayPointervEXT(vaobj, pname, param);

SV *
glGetVertexAttribArrayObjectfvATI(index, pname, params);
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVertexAttribArrayObjectfvATI) {
        croak("glGetVertexAttribArrayObjectfvATI not available on this machine");
    };
    glGetVertexAttribArrayObjectfvATI(index, pname, params);

SV *
glGetVertexAttribArrayObjectivATI(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVertexAttribArrayObjectivATI) {
        croak("glGetVertexAttribArrayObjectivATI not available on this machine");
    };
    glGetVertexAttribArrayObjectivATI(index, pname, params);

SV *
glGetVertexAttribdv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVertexAttribdv) {
        croak("glGetVertexAttribdv not available on this machine");
    };
    glGetVertexAttribdv(index, pname, params);

SV *
glGetVertexAttribdvARB(index, pname, params);
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVertexAttribdvARB) {
        croak("glGetVertexAttribdvARB not available on this machine");
    };
    glGetVertexAttribdvARB(index, pname, params);

SV *
glGetVertexAttribdvNV(index, pname, params);
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVertexAttribdvNV) {
        croak("glGetVertexAttribdvNV not available on this machine");
    };
    glGetVertexAttribdvNV(index, pname, params);

SV *
glGetVertexAttribfv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVertexAttribfv) {
        croak("glGetVertexAttribfv not available on this machine");
    };
    glGetVertexAttribfv(index, pname, params);

SV *
glGetVertexAttribfvARB(index, pname, params);
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVertexAttribfvARB) {
        croak("glGetVertexAttribfvARB not available on this machine");
    };
    glGetVertexAttribfvARB(index, pname, params);

SV *
glGetVertexAttribfvNV(index, pname, params);
     GLuint index;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVertexAttribfvNV) {
        croak("glGetVertexAttribfvNV not available on this machine");
    };
    glGetVertexAttribfvNV(index, pname, params);

SV *
glGetVertexAttribIiv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVertexAttribIiv) {
        croak("glGetVertexAttribIiv not available on this machine");
    };
    glGetVertexAttribIiv(index, pname, params);

SV *
glGetVertexAttribIivEXT(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint *params;
CODE:
    if(! __glewGetVertexAttribIivEXT) {
        croak("glGetVertexAttribIivEXT not available on this machine");
    };
    glGetVertexAttribIivEXT(index, pname, params);

SV *
glGetVertexAttribIuiv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetVertexAttribIuiv) {
        croak("glGetVertexAttribIuiv not available on this machine");
    };
    glGetVertexAttribIuiv(index, pname, params);

SV *
glGetVertexAttribIuivEXT(index, pname, params);
     GLuint index;
     GLenum pname;
     GLuint *params;
CODE:
    if(! __glewGetVertexAttribIuivEXT) {
        croak("glGetVertexAttribIuivEXT not available on this machine");
    };
    glGetVertexAttribIuivEXT(index, pname, params);

SV *
glGetVertexAttribiv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVertexAttribiv) {
        croak("glGetVertexAttribiv not available on this machine");
    };
    glGetVertexAttribiv(index, pname, params);

SV *
glGetVertexAttribivARB(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVertexAttribivARB) {
        croak("glGetVertexAttribivARB not available on this machine");
    };
    glGetVertexAttribivARB(index, pname, params);

SV *
glGetVertexAttribivNV(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVertexAttribivNV) {
        croak("glGetVertexAttribivNV not available on this machine");
    };
    glGetVertexAttribivNV(index, pname, params);

SV *
glGetVertexAttribLdv(index, pname, params);
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVertexAttribLdv) {
        croak("glGetVertexAttribLdv not available on this machine");
    };
    glGetVertexAttribLdv(index, pname, params);

SV *
glGetVertexAttribLdvEXT(index, pname, params);
     GLuint index;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVertexAttribLdvEXT) {
        croak("glGetVertexAttribLdvEXT not available on this machine");
    };
    glGetVertexAttribLdvEXT(index, pname, params);

SV *
glGetVertexAttribLi64vNV(index, pname, params);
     GLuint index;
     GLenum pname;
     GLint64EXT* params;
CODE:
    if(! __glewGetVertexAttribLi64vNV) {
        croak("glGetVertexAttribLi64vNV not available on this machine");
    };
    glGetVertexAttribLi64vNV(index, pname, params);

SV *
glGetVertexAttribLui64vARB(index, pname, params);
     GLuint index;
     GLenum pname;
     GLuint64EXT* params;
CODE:
    if(! __glewGetVertexAttribLui64vARB) {
        croak("glGetVertexAttribLui64vARB not available on this machine");
    };
    glGetVertexAttribLui64vARB(index, pname, params);

SV *
glGetVertexAttribLui64vNV(index, pname, params);
     GLuint index;
     GLenum pname;
     GLuint64EXT* params;
CODE:
    if(! __glewGetVertexAttribLui64vNV) {
        croak("glGetVertexAttribLui64vNV not available on this machine");
    };
    glGetVertexAttribLui64vNV(index, pname, params);

SV *
glGetVertexAttribPointerv(index, pname, pointer);
     GLuint index;
     GLenum pname;
     void** pointer;
CODE:
    if(! __glewGetVertexAttribPointerv) {
        croak("glGetVertexAttribPointerv not available on this machine");
    };
    glGetVertexAttribPointerv(index, pname, pointer);

SV *
glGetVertexAttribPointervARB(index, pname, pointer);
     GLuint index;
     GLenum pname;
     void** pointer;
CODE:
    if(! __glewGetVertexAttribPointervARB) {
        croak("glGetVertexAttribPointervARB not available on this machine");
    };
    glGetVertexAttribPointervARB(index, pname, pointer);

SV *
glGetVertexAttribPointervNV(index, pname, pointer);
     GLuint index;
     GLenum pname;
     void** pointer;
CODE:
    if(! __glewGetVertexAttribPointervNV) {
        croak("glGetVertexAttribPointervNV not available on this machine");
    };
    glGetVertexAttribPointervNV(index, pname, pointer);

SV *
glGetVideoCaptureivNV(video_capture_slot, pname, params);
     GLuint video_capture_slot;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVideoCaptureivNV) {
        croak("glGetVideoCaptureivNV not available on this machine");
    };
    glGetVideoCaptureivNV(video_capture_slot, pname, params);

SV *
glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     GLdouble* params;
CODE:
    if(! __glewGetVideoCaptureStreamdvNV) {
        croak("glGetVideoCaptureStreamdvNV not available on this machine");
    };
    glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);

SV *
glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewGetVideoCaptureStreamfvNV) {
        croak("glGetVideoCaptureStreamfvNV not available on this machine");
    };
    glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);

SV *
glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVideoCaptureStreamivNV) {
        croak("glGetVideoCaptureStreamivNV not available on this machine");
    };
    glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);

SV *
glGetVideoi64vNV(video_slot, pname, params);
     GLuint video_slot;
     GLenum pname;
     GLint64EXT* params;
CODE:
    if(! __glewGetVideoi64vNV) {
        croak("glGetVideoi64vNV not available on this machine");
    };
    glGetVideoi64vNV(video_slot, pname, params);

SV *
glGetVideoivNV(video_slot, pname, params);
     GLuint video_slot;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewGetVideoivNV) {
        croak("glGetVideoivNV not available on this machine");
    };
    glGetVideoivNV(video_slot, pname, params);

SV *
glGetVideoui64vNV(video_slot, pname, params);
     GLuint video_slot;
     GLenum pname;
     GLuint64EXT* params;
CODE:
    if(! __glewGetVideoui64vNV) {
        croak("glGetVideoui64vNV not available on this machine");
    };
    glGetVideoui64vNV(video_slot, pname, params);

SV *
glGetVideouivNV(video_slot, pname, params);
     GLuint video_slot;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewGetVideouivNV) {
        croak("glGetVideouivNV not available on this machine");
    };
    glGetVideouivNV(video_slot, pname, params);

GLVULKANPROCNV
glGetVkProcAddrNV(name);
     const GLchar* name;
CODE:
    if(! __glewGetVkProcAddrNV) {
        croak("glGetVkProcAddrNV not available on this machine");
    };
    RETVAL = glGetVkProcAddrNV(name);
OUTPUT:
    RETVAL

SV *
glGlobalAlphaFactorbSUN(factor);
     GLbyte factor;
CODE:
    if(! __glewGlobalAlphaFactorbSUN) {
        croak("glGlobalAlphaFactorbSUN not available on this machine");
    };
    glGlobalAlphaFactorbSUN(factor);

SV *
glGlobalAlphaFactordSUN(factor);
     GLdouble factor;
CODE:
    if(! __glewGlobalAlphaFactordSUN) {
        croak("glGlobalAlphaFactordSUN not available on this machine");
    };
    glGlobalAlphaFactordSUN(factor);

SV *
glGlobalAlphaFactorfSUN(factor);
     GLfloat factor;
CODE:
    if(! __glewGlobalAlphaFactorfSUN) {
        croak("glGlobalAlphaFactorfSUN not available on this machine");
    };
    glGlobalAlphaFactorfSUN(factor);

SV *
glGlobalAlphaFactoriSUN(factor);
     GLint factor;
CODE:
    if(! __glewGlobalAlphaFactoriSUN) {
        croak("glGlobalAlphaFactoriSUN not available on this machine");
    };
    glGlobalAlphaFactoriSUN(factor);

SV *
glGlobalAlphaFactorsSUN(factor);
     GLshort factor;
CODE:
    if(! __glewGlobalAlphaFactorsSUN) {
        croak("glGlobalAlphaFactorsSUN not available on this machine");
    };
    glGlobalAlphaFactorsSUN(factor);

SV *
glGlobalAlphaFactorubSUN(factor);
     GLubyte factor;
CODE:
    if(! __glewGlobalAlphaFactorubSUN) {
        croak("glGlobalAlphaFactorubSUN not available on this machine");
    };
    glGlobalAlphaFactorubSUN(factor);

SV *
glGlobalAlphaFactoruiSUN(factor);
     GLuint factor;
CODE:
    if(! __glewGlobalAlphaFactoruiSUN) {
        croak("glGlobalAlphaFactoruiSUN not available on this machine");
    };
    glGlobalAlphaFactoruiSUN(factor);

SV *
glGlobalAlphaFactorusSUN(factor);
     GLushort factor;
CODE:
    if(! __glewGlobalAlphaFactorusSUN) {
        croak("glGlobalAlphaFactorusSUN not available on this machine");
    };
    glGlobalAlphaFactorusSUN(factor);

SV *
glHistogram(target, width, internalformat, sink);
     GLenum target;
     GLsizei width;
     GLenum internalformat;
     GLboolean sink;
CODE:
    if(! __glewHistogram) {
        croak("glHistogram not available on this machine");
    };
    glHistogram(target, width, internalformat, sink);

SV *
glHistogramEXT(target, width, internalformat, sink);
     GLenum target;
     GLsizei width;
     GLenum internalformat;
     GLboolean sink;
CODE:
    if(! __glewHistogramEXT) {
        croak("glHistogramEXT not available on this machine");
    };
    glHistogramEXT(target, width, internalformat, sink);

SV *
glImageTransformParameterfHP(target, pname, param);
     GLenum target;
     GLenum pname;
     const GLfloat param;
CODE:
    if(! __glewImageTransformParameterfHP) {
        croak("glImageTransformParameterfHP not available on this machine");
    };
    glImageTransformParameterfHP(target, pname, param);

SV *
glImageTransformParameterfvHP(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewImageTransformParameterfvHP) {
        croak("glImageTransformParameterfvHP not available on this machine");
    };
    glImageTransformParameterfvHP(target, pname, params);

SV *
glImageTransformParameteriHP(target, pname, param);
     GLenum target;
     GLenum pname;
     const GLint param;
CODE:
    if(! __glewImageTransformParameteriHP) {
        croak("glImageTransformParameteriHP not available on this machine");
    };
    glImageTransformParameteriHP(target, pname, param);

SV *
glImageTransformParameterivHP(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewImageTransformParameterivHP) {
        croak("glImageTransformParameterivHP not available on this machine");
    };
    glImageTransformParameterivHP(target, pname, params);

GLsync
glImportSyncEXT(external_sync_type, external_sync, flags);
     GLenum external_sync_type;
     GLintptr external_sync;
     GLbitfield flags;
CODE:
    if(! __glewImportSyncEXT) {
        croak("glImportSyncEXT not available on this machine");
    };
    RETVAL = glImportSyncEXT(external_sync_type, external_sync, flags);
OUTPUT:
    RETVAL

SV *
glIndexFormatNV(type, stride);
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewIndexFormatNV) {
        croak("glIndexFormatNV not available on this machine");
    };
    glIndexFormatNV(type, stride);

SV *
glIndexFuncEXT(func, ref);
     GLenum func;
     GLfloat ref;
CODE:
    if(! __glewIndexFuncEXT) {
        croak("glIndexFuncEXT not available on this machine");
    };
    glIndexFuncEXT(func, ref);

SV *
glIndexMaterialEXT(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    if(! __glewIndexMaterialEXT) {
        croak("glIndexMaterialEXT not available on this machine");
    };
    glIndexMaterialEXT(face, mode);

SV *
glIndexPointerEXT(type, stride, count, pointer);
     GLenum type;
     GLsizei stride;
     GLsizei count;
     const void *pointer;
CODE:
    if(! __glewIndexPointerEXT) {
        croak("glIndexPointerEXT not available on this machine");
    };
    glIndexPointerEXT(type, stride, count, pointer);

SV *
glIndexPointerListIBM(type, stride, pointer, ptrstride);
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewIndexPointerListIBM) {
        croak("glIndexPointerListIBM not available on this machine");
    };
    glIndexPointerListIBM(type, stride, pointer, ptrstride);

SV *
glInsertComponentEXT(res, src, num);
     GLuint res;
     GLuint src;
     GLuint num;
CODE:
    if(! __glewInsertComponentEXT) {
        croak("glInsertComponentEXT not available on this machine");
    };
    glInsertComponentEXT(res, src, num);

SV *
glInsertEventMarkerEXT(length, marker);
     GLsizei length;
     const GLchar* marker;
CODE:
    if(! __glewInsertEventMarkerEXT) {
        croak("glInsertEventMarkerEXT not available on this machine");
    };
    glInsertEventMarkerEXT(length, marker);

SV *
glInterpolatePathsNV(resultPath, pathA, pathB, weight);
     GLuint resultPath;
     GLuint pathA;
     GLuint pathB;
     GLfloat weight;
CODE:
    if(! __glewInterpolatePathsNV) {
        croak("glInterpolatePathsNV not available on this machine");
    };
    glInterpolatePathsNV(resultPath, pathA, pathB, weight);

SV *
glInvalidateBufferData(buffer);
     GLuint buffer;
CODE:
    if(! __glewInvalidateBufferData) {
        croak("glInvalidateBufferData not available on this machine");
    };
    glInvalidateBufferData(buffer);

SV *
glInvalidateBufferSubData(buffer, offset, length);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr length;
CODE:
    if(! __glewInvalidateBufferSubData) {
        croak("glInvalidateBufferSubData not available on this machine");
    };
    glInvalidateBufferSubData(buffer, offset, length);

SV *
glInvalidateFramebuffer(target, numAttachments, attachments);
     GLenum target;
     GLsizei numAttachments;
     const GLenum* attachments;
CODE:
    if(! __glewInvalidateFramebuffer) {
        croak("glInvalidateFramebuffer not available on this machine");
    };
    glInvalidateFramebuffer(target, numAttachments, attachments);

SV *
glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
     GLuint framebuffer;
     GLsizei numAttachments;
     const GLenum* attachments;
CODE:
    if(! __glewInvalidateNamedFramebufferData) {
        croak("glInvalidateNamedFramebufferData not available on this machine");
    };
    glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);

SV *
glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
     GLuint framebuffer;
     GLsizei numAttachments;
     const GLenum* attachments;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewInvalidateNamedFramebufferSubData) {
        croak("glInvalidateNamedFramebufferSubData not available on this machine");
    };
    glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);

SV *
glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
     GLenum target;
     GLsizei numAttachments;
     const GLenum* attachments;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewInvalidateSubFramebuffer) {
        croak("glInvalidateSubFramebuffer not available on this machine");
    };
    glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);

SV *
glInvalidateTexImage(texture, level);
     GLuint texture;
     GLint level;
CODE:
    if(! __glewInvalidateTexImage) {
        croak("glInvalidateTexImage not available on this machine");
    };
    glInvalidateTexImage(texture, level);

SV *
glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewInvalidateTexSubImage) {
        croak("glInvalidateTexSubImage not available on this machine");
    };
    glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);

GLboolean
glIsAsyncMarkerSGIX(marker);
     GLuint marker;
CODE:
    if(! __glewIsAsyncMarkerSGIX) {
        croak("glIsAsyncMarkerSGIX not available on this machine");
    };
    RETVAL = glIsAsyncMarkerSGIX(marker);
OUTPUT:
    RETVAL

GLboolean
glIsBuffer(buffer);
     GLuint buffer;
CODE:
    if(! __glewIsBuffer) {
        croak("glIsBuffer not available on this machine");
    };
    RETVAL = glIsBuffer(buffer);
OUTPUT:
    RETVAL

GLboolean
glIsBufferARB(buffer);
     GLuint buffer;
CODE:
    if(! __glewIsBufferARB) {
        croak("glIsBufferARB not available on this machine");
    };
    RETVAL = glIsBufferARB(buffer);
OUTPUT:
    RETVAL

GLboolean
glIsBufferResidentNV(target);
     GLenum target;
CODE:
    if(! __glewIsBufferResidentNV) {
        croak("glIsBufferResidentNV not available on this machine");
    };
    RETVAL = glIsBufferResidentNV(target);
OUTPUT:
    RETVAL

GLboolean
glIsCommandListNV(list);
     GLuint list;
CODE:
    if(! __glewIsCommandListNV) {
        croak("glIsCommandListNV not available on this machine");
    };
    RETVAL = glIsCommandListNV(list);
OUTPUT:
    RETVAL

GLboolean
glIsEnabledi(cap, index);
     GLenum cap;
     GLuint index;
CODE:
    if(! __glewIsEnabledi) {
        croak("glIsEnabledi not available on this machine");
    };
    RETVAL = glIsEnabledi(cap, index);
OUTPUT:
    RETVAL

GLboolean
glIsEnabledIndexedEXT(target, index);
     GLenum target;
     GLuint index;
CODE:
    if(! __glewIsEnabledIndexedEXT) {
        croak("glIsEnabledIndexedEXT not available on this machine");
    };
    RETVAL = glIsEnabledIndexedEXT(target, index);
OUTPUT:
    RETVAL

GLboolean
glIsFenceAPPLE(fence);
     GLuint fence;
CODE:
    if(! __glewIsFenceAPPLE) {
        croak("glIsFenceAPPLE not available on this machine");
    };
    RETVAL = glIsFenceAPPLE(fence);
OUTPUT:
    RETVAL

GLboolean
glIsFenceNV(fence);
     GLuint fence;
CODE:
    if(! __glewIsFenceNV) {
        croak("glIsFenceNV not available on this machine");
    };
    RETVAL = glIsFenceNV(fence);
OUTPUT:
    RETVAL

GLboolean
glIsFramebuffer(framebuffer);
     GLuint framebuffer;
CODE:
    if(! __glewIsFramebuffer) {
        croak("glIsFramebuffer not available on this machine");
    };
    RETVAL = glIsFramebuffer(framebuffer);
OUTPUT:
    RETVAL

GLboolean
glIsFramebufferEXT(framebuffer);
     GLuint framebuffer;
CODE:
    if(! __glewIsFramebufferEXT) {
        croak("glIsFramebufferEXT not available on this machine");
    };
    RETVAL = glIsFramebufferEXT(framebuffer);
OUTPUT:
    RETVAL

GLboolean
glIsImageHandleResidentARB(handle);
     GLuint64 handle;
CODE:
    if(! __glewIsImageHandleResidentARB) {
        croak("glIsImageHandleResidentARB not available on this machine");
    };
    RETVAL = glIsImageHandleResidentARB(handle);
OUTPUT:
    RETVAL

GLboolean
glIsImageHandleResidentNV(handle);
     GLuint64 handle;
CODE:
    if(! __glewIsImageHandleResidentNV) {
        croak("glIsImageHandleResidentNV not available on this machine");
    };
    RETVAL = glIsImageHandleResidentNV(handle);
OUTPUT:
    RETVAL

GLboolean
glIsNameAMD(identifier, name);
     GLenum identifier;
     GLuint name;
CODE:
    if(! __glewIsNameAMD) {
        croak("glIsNameAMD not available on this machine");
    };
    RETVAL = glIsNameAMD(identifier, name);
OUTPUT:
    RETVAL

GLboolean
glIsNamedBufferResidentNV(buffer);
     GLuint buffer;
CODE:
    if(! __glewIsNamedBufferResidentNV) {
        croak("glIsNamedBufferResidentNV not available on this machine");
    };
    RETVAL = glIsNamedBufferResidentNV(buffer);
OUTPUT:
    RETVAL

GLboolean
glIsNamedStringARB(namelen, name);
     GLint namelen;
     const GLchar* name;
CODE:
    if(! __glewIsNamedStringARB) {
        croak("glIsNamedStringARB not available on this machine");
    };
    RETVAL = glIsNamedStringARB(namelen, name);
OUTPUT:
    RETVAL

GLboolean
glIsObjectBufferATI(buffer);
     GLuint buffer;
CODE:
    if(! __glewIsObjectBufferATI) {
        croak("glIsObjectBufferATI not available on this machine");
    };
    RETVAL = glIsObjectBufferATI(buffer);
OUTPUT:
    RETVAL

GLboolean
glIsOcclusionQueryNV(id);
     GLuint id;
CODE:
    if(! __glewIsOcclusionQueryNV) {
        croak("glIsOcclusionQueryNV not available on this machine");
    };
    RETVAL = glIsOcclusionQueryNV(id);
OUTPUT:
    RETVAL

GLboolean
glIsPathNV(path);
     GLuint path;
CODE:
    if(! __glewIsPathNV) {
        croak("glIsPathNV not available on this machine");
    };
    RETVAL = glIsPathNV(path);
OUTPUT:
    RETVAL

GLboolean
glIsPointInFillPathNV(path, mask, x, y);
     GLuint path;
     GLuint mask;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewIsPointInFillPathNV) {
        croak("glIsPointInFillPathNV not available on this machine");
    };
    RETVAL = glIsPointInFillPathNV(path, mask, x, y);
OUTPUT:
    RETVAL

GLboolean
glIsPointInStrokePathNV(path, x, y);
     GLuint path;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewIsPointInStrokePathNV) {
        croak("glIsPointInStrokePathNV not available on this machine");
    };
    RETVAL = glIsPointInStrokePathNV(path, x, y);
OUTPUT:
    RETVAL

GLboolean
glIsProgram(program);
     GLuint program;
CODE:
    if(! __glewIsProgram) {
        croak("glIsProgram not available on this machine");
    };
    RETVAL = glIsProgram(program);
OUTPUT:
    RETVAL

GLboolean
glIsProgramARB(program);
     GLuint program;
CODE:
    if(! __glewIsProgramARB) {
        croak("glIsProgramARB not available on this machine");
    };
    RETVAL = glIsProgramARB(program);
OUTPUT:
    RETVAL

GLboolean
glIsProgramNV(id);
     GLuint id;
CODE:
    if(! __glewIsProgramNV) {
        croak("glIsProgramNV not available on this machine");
    };
    RETVAL = glIsProgramNV(id);
OUTPUT:
    RETVAL

GLboolean
glIsProgramPipeline(pipeline);
     GLuint pipeline;
CODE:
    if(! __glewIsProgramPipeline) {
        croak("glIsProgramPipeline not available on this machine");
    };
    RETVAL = glIsProgramPipeline(pipeline);
OUTPUT:
    RETVAL

GLboolean
glIsQuery(id);
     GLuint id;
CODE:
    if(! __glewIsQuery) {
        croak("glIsQuery not available on this machine");
    };
    RETVAL = glIsQuery(id);
OUTPUT:
    RETVAL

GLboolean
glIsQueryANGLE(id);
     GLuint id;
CODE:
    if(! __glewIsQueryANGLE) {
        croak("glIsQueryANGLE not available on this machine");
    };
    RETVAL = glIsQueryANGLE(id);
OUTPUT:
    RETVAL

GLboolean
glIsQueryARB(id);
     GLuint id;
CODE:
    if(! __glewIsQueryARB) {
        croak("glIsQueryARB not available on this machine");
    };
    RETVAL = glIsQueryARB(id);
OUTPUT:
    RETVAL

GLboolean
glIsRenderbuffer(renderbuffer);
     GLuint renderbuffer;
CODE:
    if(! __glewIsRenderbuffer) {
        croak("glIsRenderbuffer not available on this machine");
    };
    RETVAL = glIsRenderbuffer(renderbuffer);
OUTPUT:
    RETVAL

GLboolean
glIsRenderbufferEXT(renderbuffer);
     GLuint renderbuffer;
CODE:
    if(! __glewIsRenderbufferEXT) {
        croak("glIsRenderbufferEXT not available on this machine");
    };
    RETVAL = glIsRenderbufferEXT(renderbuffer);
OUTPUT:
    RETVAL

GLboolean
glIsSampler(sampler);
     GLuint sampler;
CODE:
    if(! __glewIsSampler) {
        croak("glIsSampler not available on this machine");
    };
    RETVAL = glIsSampler(sampler);
OUTPUT:
    RETVAL

GLboolean
glIsShader(shader);
     GLuint shader;
CODE:
    if(! __glewIsShader) {
        croak("glIsShader not available on this machine");
    };
    RETVAL = glIsShader(shader);
OUTPUT:
    RETVAL

GLboolean
glIsStateNV(state);
     GLuint state;
CODE:
    if(! __glewIsStateNV) {
        croak("glIsStateNV not available on this machine");
    };
    RETVAL = glIsStateNV(state);
OUTPUT:
    RETVAL

GLboolean
glIsSupportedREGAL(ext);
     const GLchar* ext;
CODE:
    if(! __glewIsSupportedREGAL) {
        croak("glIsSupportedREGAL not available on this machine");
    };
    RETVAL = glIsSupportedREGAL(ext);
OUTPUT:
    RETVAL

GLboolean
glIsSync(GLsync);
     GLsync GLsync;
CODE:
    if(! __glewIsSync) {
        croak("glIsSync not available on this machine");
    };
    RETVAL = glIsSync(GLsync);
OUTPUT:
    RETVAL

GLboolean
glIsTextureEXT(texture);
     GLuint texture;
CODE:
    if(! __glewIsTextureEXT) {
        croak("glIsTextureEXT not available on this machine");
    };
    RETVAL = glIsTextureEXT(texture);
OUTPUT:
    RETVAL

GLboolean
glIsTextureHandleResidentARB(handle);
     GLuint64 handle;
CODE:
    if(! __glewIsTextureHandleResidentARB) {
        croak("glIsTextureHandleResidentARB not available on this machine");
    };
    RETVAL = glIsTextureHandleResidentARB(handle);
OUTPUT:
    RETVAL

GLboolean
glIsTextureHandleResidentNV(handle);
     GLuint64 handle;
CODE:
    if(! __glewIsTextureHandleResidentNV) {
        croak("glIsTextureHandleResidentNV not available on this machine");
    };
    RETVAL = glIsTextureHandleResidentNV(handle);
OUTPUT:
    RETVAL

GLboolean
glIsTransformFeedback(id);
     GLuint id;
CODE:
    if(! __glewIsTransformFeedback) {
        croak("glIsTransformFeedback not available on this machine");
    };
    RETVAL = glIsTransformFeedback(id);
OUTPUT:
    RETVAL

GLboolean
glIsTransformFeedbackNV(id);
     GLuint id;
CODE:
    if(! __glewIsTransformFeedbackNV) {
        croak("glIsTransformFeedbackNV not available on this machine");
    };
    RETVAL = glIsTransformFeedbackNV(id);
OUTPUT:
    RETVAL

GLboolean
glIsVariantEnabledEXT(id, cap);
     GLuint id;
     GLenum cap;
CODE:
    if(! __glewIsVariantEnabledEXT) {
        croak("glIsVariantEnabledEXT not available on this machine");
    };
    RETVAL = glIsVariantEnabledEXT(id, cap);
OUTPUT:
    RETVAL

GLboolean
glIsVertexArray(array);
     GLuint array;
CODE:
    if(! __glewIsVertexArray) {
        croak("glIsVertexArray not available on this machine");
    };
    RETVAL = glIsVertexArray(array);
OUTPUT:
    RETVAL

GLboolean
glIsVertexArrayAPPLE(array);
     GLuint array;
CODE:
    if(! __glewIsVertexArrayAPPLE) {
        croak("glIsVertexArrayAPPLE not available on this machine");
    };
    RETVAL = glIsVertexArrayAPPLE(array);
OUTPUT:
    RETVAL

GLboolean
glIsVertexAttribEnabledAPPLE(index, pname);
     GLuint index;
     GLenum pname;
CODE:
    if(! __glewIsVertexAttribEnabledAPPLE) {
        croak("glIsVertexAttribEnabledAPPLE not available on this machine");
    };
    RETVAL = glIsVertexAttribEnabledAPPLE(index, pname);
OUTPUT:
    RETVAL

SV *
glLabelObjectEXT(type, object, length, label);
     GLenum type;
     GLuint object;
     GLsizei length;
     const GLchar* label;
CODE:
    if(! __glewLabelObjectEXT) {
        croak("glLabelObjectEXT not available on this machine");
    };
    glLabelObjectEXT(type, object, length, label);

SV *
glLGPUCopyImageSubDataNVX(sourceGpu, destinationGpuMask, srcName, srcTarget, srcLevel, srcX, srxY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
     GLuint sourceGpu;
     GLbitfield destinationGpuMask;
     GLuint srcName;
     GLenum srcTarget;
     GLint srcLevel;
     GLint srcX;
     GLint srxY;
     GLint srcZ;
     GLuint dstName;
     GLenum dstTarget;
     GLint dstLevel;
     GLint dstX;
     GLint dstY;
     GLint dstZ;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewLGPUCopyImageSubDataNVX) {
        croak("glLGPUCopyImageSubDataNVX not available on this machine");
    };
    glLGPUCopyImageSubDataNVX(sourceGpu, destinationGpuMask, srcName, srcTarget, srcLevel, srcX, srxY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);

SV *
glLGPUInterlockNVX();
CODE:
    if(! __glewLGPUInterlockNVX) {
        croak("glLGPUInterlockNVX not available on this machine");
    };
    glLGPUInterlockNVX();

SV *
glLGPUNamedBufferSubDataNVX(gpuMask, buffer, offset, size, data);
     GLbitfield gpuMask;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     const void *data;
CODE:
    if(! __glewLGPUNamedBufferSubDataNVX) {
        croak("glLGPUNamedBufferSubDataNVX not available on this machine");
    };
    glLGPUNamedBufferSubDataNVX(gpuMask, buffer, offset, size, data);

SV *
glLightEnviEXT(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewLightEnviEXT) {
        croak("glLightEnviEXT not available on this machine");
    };
    glLightEnviEXT(pname, param);

SV *
glLightModelx(pname, param);
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewLightModelx) {
        croak("glLightModelx not available on this machine");
    };
    glLightModelx(pname, param);

SV *
glLightModelxv(pname, params);
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewLightModelxv) {
        croak("glLightModelxv not available on this machine");
    };
    glLightModelxv(pname, params);

SV *
glLightx(light, pname, param);
     GLenum light;
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewLightx) {
        croak("glLightx not available on this machine");
    };
    glLightx(light, pname, param);

SV *
glLightxv(light, pname, params);
     GLenum light;
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewLightxv) {
        croak("glLightxv not available on this machine");
    };
    glLightxv(light, pname, params);

SV *
glLineWidthx(width);
     GLfixed width;
CODE:
    if(! __glewLineWidthx) {
        croak("glLineWidthx not available on this machine");
    };
    glLineWidthx(width);

SV *
glLinkProgram(program);
     GLuint program;
CODE:
    if(! __glewLinkProgram) {
        croak("glLinkProgram not available on this machine");
    };
    glLinkProgram(program);

SV *
glLinkProgramARB(programObj);
     GLhandleARB programObj;
CODE:
    if(! __glewLinkProgramARB) {
        croak("glLinkProgramARB not available on this machine");
    };
    glLinkProgramARB(programObj);

SV *
glListDrawCommandsStatesClientNV(list, segment, indirects, sizes, states, fbos, count);
     GLuint list;
     GLuint segment;
     const void** indirects;
     const GLsizei* sizes;
     const GLuint* states;
     const GLuint* fbos;
     GLuint count;
CODE:
    if(! __glewListDrawCommandsStatesClientNV) {
        croak("glListDrawCommandsStatesClientNV not available on this machine");
    };
    glListDrawCommandsStatesClientNV(list, segment, indirects, sizes, states, fbos, count);

SV *
glLoadMatrixx(m);
     const GLfixed* m;
CODE:
    if(! __glewLoadMatrixx) {
        croak("glLoadMatrixx not available on this machine");
    };
    glLoadMatrixx(m);

SV *
glLoadProgramNV(target, id, len, program);
     GLenum target;
     GLuint id;
     GLsizei len;
     const GLubyte* program;
CODE:
    if(! __glewLoadProgramNV) {
        croak("glLoadProgramNV not available on this machine");
    };
    glLoadProgramNV(target, id, len, program);

SV *
glLoadTransposeMatrixd(m);
          const GLdouble * m;
CODE:
    if(! __glewLoadTransposeMatrixd) {
        croak("glLoadTransposeMatrixd not available on this machine");
    };
    glLoadTransposeMatrixd(m);

SV *
glLoadTransposeMatrixdARB(m);
          GLdouble * m;
CODE:
    if(! __glewLoadTransposeMatrixdARB) {
        croak("glLoadTransposeMatrixdARB not available on this machine");
    };
    glLoadTransposeMatrixdARB(m);

SV *
glLoadTransposeMatrixf(m);
          const GLfloat * m;
CODE:
    if(! __glewLoadTransposeMatrixf) {
        croak("glLoadTransposeMatrixf not available on this machine");
    };
    glLoadTransposeMatrixf(m);

SV *
glLoadTransposeMatrixfARB(m);
          GLfloat * m;
CODE:
    if(! __glewLoadTransposeMatrixfARB) {
        croak("glLoadTransposeMatrixfARB not available on this machine");
    };
    glLoadTransposeMatrixfARB(m);

SV *
glLockArraysEXT(first, count);
     GLint first;
     GLsizei count;
CODE:
    if(! __glewLockArraysEXT) {
        croak("glLockArraysEXT not available on this machine");
    };
    glLockArraysEXT(first, count);

SV *
glLogMessageCallbackREGAL(callback);
     GLLOGPROCREGAL callback;
CODE:
    if(! __glewLogMessageCallbackREGAL) {
        croak("glLogMessageCallbackREGAL not available on this machine");
    };
    glLogMessageCallbackREGAL(callback);

SV *
glMakeBufferNonResidentNV(target);
     GLenum target;
CODE:
    if(! __glewMakeBufferNonResidentNV) {
        croak("glMakeBufferNonResidentNV not available on this machine");
    };
    glMakeBufferNonResidentNV(target);

SV *
glMakeBufferResidentNV(target, access);
     GLenum target;
     GLenum access;
CODE:
    if(! __glewMakeBufferResidentNV) {
        croak("glMakeBufferResidentNV not available on this machine");
    };
    glMakeBufferResidentNV(target, access);

SV *
glMakeImageHandleNonResidentARB(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeImageHandleNonResidentARB) {
        croak("glMakeImageHandleNonResidentARB not available on this machine");
    };
    glMakeImageHandleNonResidentARB(handle);

SV *
glMakeImageHandleNonResidentNV(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeImageHandleNonResidentNV) {
        croak("glMakeImageHandleNonResidentNV not available on this machine");
    };
    glMakeImageHandleNonResidentNV(handle);

SV *
glMakeImageHandleResidentARB(handle, access);
     GLuint64 handle;
     GLenum access;
CODE:
    if(! __glewMakeImageHandleResidentARB) {
        croak("glMakeImageHandleResidentARB not available on this machine");
    };
    glMakeImageHandleResidentARB(handle, access);

SV *
glMakeImageHandleResidentNV(handle, access);
     GLuint64 handle;
     GLenum access;
CODE:
    if(! __glewMakeImageHandleResidentNV) {
        croak("glMakeImageHandleResidentNV not available on this machine");
    };
    glMakeImageHandleResidentNV(handle, access);

SV *
glMakeNamedBufferNonResidentNV(buffer);
     GLuint buffer;
CODE:
    if(! __glewMakeNamedBufferNonResidentNV) {
        croak("glMakeNamedBufferNonResidentNV not available on this machine");
    };
    glMakeNamedBufferNonResidentNV(buffer);

SV *
glMakeNamedBufferResidentNV(buffer, access);
     GLuint buffer;
     GLenum access;
CODE:
    if(! __glewMakeNamedBufferResidentNV) {
        croak("glMakeNamedBufferResidentNV not available on this machine");
    };
    glMakeNamedBufferResidentNV(buffer, access);

SV *
glMakeTextureHandleNonResidentARB(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeTextureHandleNonResidentARB) {
        croak("glMakeTextureHandleNonResidentARB not available on this machine");
    };
    glMakeTextureHandleNonResidentARB(handle);

SV *
glMakeTextureHandleNonResidentNV(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeTextureHandleNonResidentNV) {
        croak("glMakeTextureHandleNonResidentNV not available on this machine");
    };
    glMakeTextureHandleNonResidentNV(handle);

SV *
glMakeTextureHandleResidentARB(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeTextureHandleResidentARB) {
        croak("glMakeTextureHandleResidentARB not available on this machine");
    };
    glMakeTextureHandleResidentARB(handle);

SV *
glMakeTextureHandleResidentNV(handle);
     GLuint64 handle;
CODE:
    if(! __glewMakeTextureHandleResidentNV) {
        croak("glMakeTextureHandleResidentNV not available on this machine");
    };
    glMakeTextureHandleResidentNV(handle);

SV *
glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
     GLenum target;
     GLuint index;
     GLenum type;
     GLsizei ustride;
     GLsizei vstride;
     GLint uorder;
     GLint vorder;
     GLboolean packed;
     const void *points;
CODE:
    if(! __glewMapControlPointsNV) {
        croak("glMapControlPointsNV not available on this machine");
    };
    glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);

SV *
glMapParameterfvNV(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewMapParameterfvNV) {
        croak("glMapParameterfvNV not available on this machine");
    };
    glMapParameterfvNV(target, pname, params);

SV *
glMapParameterivNV(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewMapParameterivNV) {
        croak("glMapParameterivNV not available on this machine");
    };
    glMapParameterivNV(target, pname, params);

SV *
glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
     GLuint index;
     GLuint size;
     GLdouble u1;
     GLdouble u2;
     GLint stride;
     GLint order;
     const GLdouble* points;
CODE:
    if(! __glewMapVertexAttrib1dAPPLE) {
        croak("glMapVertexAttrib1dAPPLE not available on this machine");
    };
    glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);

SV *
glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
     GLuint index;
     GLuint size;
     GLfloat u1;
     GLfloat u2;
     GLint stride;
     GLint order;
     const GLfloat* points;
CODE:
    if(! __glewMapVertexAttrib1fAPPLE) {
        croak("glMapVertexAttrib1fAPPLE not available on this machine");
    };
    glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);

SV *
glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
     GLuint index;
     GLuint size;
     GLdouble u1;
     GLdouble u2;
     GLint ustride;
     GLint uorder;
     GLdouble v1;
     GLdouble v2;
     GLint vstride;
     GLint vorder;
     const GLdouble* points;
CODE:
    if(! __glewMapVertexAttrib2dAPPLE) {
        croak("glMapVertexAttrib2dAPPLE not available on this machine");
    };
    glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);

SV *
glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
     GLuint index;
     GLuint size;
     GLfloat u1;
     GLfloat u2;
     GLint ustride;
     GLint uorder;
     GLfloat v1;
     GLfloat v2;
     GLint vstride;
     GLint vorder;
     const GLfloat* points;
CODE:
    if(! __glewMapVertexAttrib2fAPPLE) {
        croak("glMapVertexAttrib2fAPPLE not available on this machine");
    };
    glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);

SV *
glMaterialx(face, pname, param);
     GLenum face;
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewMaterialx) {
        croak("glMaterialx not available on this machine");
    };
    glMaterialx(face, pname, param);

SV *
glMaterialxv(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewMaterialxv) {
        croak("glMaterialxv not available on this machine");
    };
    glMaterialxv(face, pname, params);

SV *
glMatrixFrustumEXT(matrixMode, l, r, b, t, n, f);
     GLenum matrixMode;
     GLdouble l;
     GLdouble r;
     GLdouble b;
     GLdouble t;
     GLdouble n;
     GLdouble f;
CODE:
    if(! __glewMatrixFrustumEXT) {
        croak("glMatrixFrustumEXT not available on this machine");
    };
    glMatrixFrustumEXT(matrixMode, l, r, b, t, n, f);

SV *
glMatrixIndexPointerARB(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     void *pointer;
CODE:
    if(! __glewMatrixIndexPointerARB) {
        croak("glMatrixIndexPointerARB not available on this machine");
    };
    glMatrixIndexPointerARB(size, type, stride, pointer);

SV *
glMatrixIndexubvARB(size, indices);
     GLint size;
     GLubyte *indices;
CODE:
    if(! __glewMatrixIndexubvARB) {
        croak("glMatrixIndexubvARB not available on this machine");
    };
    glMatrixIndexubvARB(size, indices);

SV *
glMatrixIndexuivARB(size, indices);
     GLint size;
     GLuint *indices;
CODE:
    if(! __glewMatrixIndexuivARB) {
        croak("glMatrixIndexuivARB not available on this machine");
    };
    glMatrixIndexuivARB(size, indices);

SV *
glMatrixIndexusvARB(size, indices);
     GLint size;
     GLushort *indices;
CODE:
    if(! __glewMatrixIndexusvARB) {
        croak("glMatrixIndexusvARB not available on this machine");
    };
    glMatrixIndexusvARB(size, indices);

SV *
glMatrixLoad3x2fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixLoad3x2fNV) {
        croak("glMatrixLoad3x2fNV not available on this machine");
    };
    glMatrixLoad3x2fNV(matrixMode, m);

SV *
glMatrixLoad3x3fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixLoad3x3fNV) {
        croak("glMatrixLoad3x3fNV not available on this machine");
    };
    glMatrixLoad3x3fNV(matrixMode, m);

SV *
glMatrixLoaddEXT(matrixMode, m);
     GLenum matrixMode;
     const GLdouble* m;
CODE:
    if(! __glewMatrixLoaddEXT) {
        croak("glMatrixLoaddEXT not available on this machine");
    };
    glMatrixLoaddEXT(matrixMode, m);

SV *
glMatrixLoadfEXT(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixLoadfEXT) {
        croak("glMatrixLoadfEXT not available on this machine");
    };
    glMatrixLoadfEXT(matrixMode, m);

SV *
glMatrixLoadIdentityEXT(matrixMode);
     GLenum matrixMode;
CODE:
    if(! __glewMatrixLoadIdentityEXT) {
        croak("glMatrixLoadIdentityEXT not available on this machine");
    };
    glMatrixLoadIdentityEXT(matrixMode);

SV *
glMatrixLoadTranspose3x3fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixLoadTranspose3x3fNV) {
        croak("glMatrixLoadTranspose3x3fNV not available on this machine");
    };
    glMatrixLoadTranspose3x3fNV(matrixMode, m);

SV *
glMatrixLoadTransposedEXT(matrixMode, m);
     GLenum matrixMode;
     const GLdouble* m;
CODE:
    if(! __glewMatrixLoadTransposedEXT) {
        croak("glMatrixLoadTransposedEXT not available on this machine");
    };
    glMatrixLoadTransposedEXT(matrixMode, m);

SV *
glMatrixLoadTransposefEXT(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixLoadTransposefEXT) {
        croak("glMatrixLoadTransposefEXT not available on this machine");
    };
    glMatrixLoadTransposefEXT(matrixMode, m);

SV *
glMatrixMult3x2fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixMult3x2fNV) {
        croak("glMatrixMult3x2fNV not available on this machine");
    };
    glMatrixMult3x2fNV(matrixMode, m);

SV *
glMatrixMult3x3fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixMult3x3fNV) {
        croak("glMatrixMult3x3fNV not available on this machine");
    };
    glMatrixMult3x3fNV(matrixMode, m);

SV *
glMatrixMultdEXT(matrixMode, m);
     GLenum matrixMode;
     const GLdouble* m;
CODE:
    if(! __glewMatrixMultdEXT) {
        croak("glMatrixMultdEXT not available on this machine");
    };
    glMatrixMultdEXT(matrixMode, m);

SV *
glMatrixMultfEXT(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixMultfEXT) {
        croak("glMatrixMultfEXT not available on this machine");
    };
    glMatrixMultfEXT(matrixMode, m);

SV *
glMatrixMultTranspose3x3fNV(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixMultTranspose3x3fNV) {
        croak("glMatrixMultTranspose3x3fNV not available on this machine");
    };
    glMatrixMultTranspose3x3fNV(matrixMode, m);

SV *
glMatrixMultTransposedEXT(matrixMode, m);
     GLenum matrixMode;
     const GLdouble* m;
CODE:
    if(! __glewMatrixMultTransposedEXT) {
        croak("glMatrixMultTransposedEXT not available on this machine");
    };
    glMatrixMultTransposedEXT(matrixMode, m);

SV *
glMatrixMultTransposefEXT(matrixMode, m);
     GLenum matrixMode;
     const GLfloat* m;
CODE:
    if(! __glewMatrixMultTransposefEXT) {
        croak("glMatrixMultTransposefEXT not available on this machine");
    };
    glMatrixMultTransposefEXT(matrixMode, m);

SV *
glMatrixOrthoEXT(matrixMode, l, r, b, t, n, f);
     GLenum matrixMode;
     GLdouble l;
     GLdouble r;
     GLdouble b;
     GLdouble t;
     GLdouble n;
     GLdouble f;
CODE:
    if(! __glewMatrixOrthoEXT) {
        croak("glMatrixOrthoEXT not available on this machine");
    };
    glMatrixOrthoEXT(matrixMode, l, r, b, t, n, f);

SV *
glMatrixPopEXT(matrixMode);
     GLenum matrixMode;
CODE:
    if(! __glewMatrixPopEXT) {
        croak("glMatrixPopEXT not available on this machine");
    };
    glMatrixPopEXT(matrixMode);

SV *
glMatrixPushEXT(matrixMode);
     GLenum matrixMode;
CODE:
    if(! __glewMatrixPushEXT) {
        croak("glMatrixPushEXT not available on this machine");
    };
    glMatrixPushEXT(matrixMode);

SV *
glMatrixRotatedEXT(matrixMode, angle, x, y, z);
     GLenum matrixMode;
     GLdouble angle;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewMatrixRotatedEXT) {
        croak("glMatrixRotatedEXT not available on this machine");
    };
    glMatrixRotatedEXT(matrixMode, angle, x, y, z);

SV *
glMatrixRotatefEXT(matrixMode, angle, x, y, z);
     GLenum matrixMode;
     GLfloat angle;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewMatrixRotatefEXT) {
        croak("glMatrixRotatefEXT not available on this machine");
    };
    glMatrixRotatefEXT(matrixMode, angle, x, y, z);

SV *
glMatrixScaledEXT(matrixMode, x, y, z);
     GLenum matrixMode;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewMatrixScaledEXT) {
        croak("glMatrixScaledEXT not available on this machine");
    };
    glMatrixScaledEXT(matrixMode, x, y, z);

SV *
glMatrixScalefEXT(matrixMode, x, y, z);
     GLenum matrixMode;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewMatrixScalefEXT) {
        croak("glMatrixScalefEXT not available on this machine");
    };
    glMatrixScalefEXT(matrixMode, x, y, z);

SV *
glMatrixTranslatedEXT(matrixMode, x, y, z);
     GLenum matrixMode;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewMatrixTranslatedEXT) {
        croak("glMatrixTranslatedEXT not available on this machine");
    };
    glMatrixTranslatedEXT(matrixMode, x, y, z);

SV *
glMatrixTranslatefEXT(matrixMode, x, y, z);
     GLenum matrixMode;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewMatrixTranslatefEXT) {
        croak("glMatrixTranslatefEXT not available on this machine");
    };
    glMatrixTranslatefEXT(matrixMode, x, y, z);

SV *
glMaxShaderCompilerThreadsARB(count);
     GLuint count;
CODE:
    if(! __glewMaxShaderCompilerThreadsARB) {
        croak("glMaxShaderCompilerThreadsARB not available on this machine");
    };
    glMaxShaderCompilerThreadsARB(count);

SV *
glMemoryBarrier(barriers);
     GLbitfield barriers;
CODE:
    if(! __glewMemoryBarrier) {
        croak("glMemoryBarrier not available on this machine");
    };
    glMemoryBarrier(barriers);

SV *
glMemoryBarrierByRegion(barriers);
     GLbitfield barriers;
CODE:
    if(! __glewMemoryBarrierByRegion) {
        croak("glMemoryBarrierByRegion not available on this machine");
    };
    glMemoryBarrierByRegion(barriers);

SV *
glMemoryBarrierEXT(barriers);
     GLbitfield barriers;
CODE:
    if(! __glewMemoryBarrierEXT) {
        croak("glMemoryBarrierEXT not available on this machine");
    };
    glMemoryBarrierEXT(barriers);

SV *
glMinmax(target, internalformat, sink);
     GLenum target;
     GLenum internalformat;
     GLboolean sink;
CODE:
    if(! __glewMinmax) {
        croak("glMinmax not available on this machine");
    };
    glMinmax(target, internalformat, sink);

SV *
glMinmaxEXT(target, internalformat, sink);
     GLenum target;
     GLenum internalformat;
     GLboolean sink;
CODE:
    if(! __glewMinmaxEXT) {
        croak("glMinmaxEXT not available on this machine");
    };
    glMinmaxEXT(target, internalformat, sink);

SV *
glMinSampleShading(value);
     GLclampf value;
CODE:
    if(! __glewMinSampleShading) {
        croak("glMinSampleShading not available on this machine");
    };
    glMinSampleShading(value);

SV *
glMinSampleShadingARB(value);
     GLclampf value;
CODE:
    if(! __glewMinSampleShadingARB) {
        croak("glMinSampleShadingARB not available on this machine");
    };
    glMinSampleShadingARB(value);

SV *
glMulticastBarrierNV();
CODE:
    if(! __glewMulticastBarrierNV) {
        croak("glMulticastBarrierNV not available on this machine");
    };
    glMulticastBarrierNV();

SV *
glMulticastBlitFramebufferNV(srcGpu, dstGpu, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
     GLuint srcGpu;
     GLuint dstGpu;
     GLint srcX0;
     GLint srcY0;
     GLint srcX1;
     GLint srcY1;
     GLint dstX0;
     GLint dstY0;
     GLint dstX1;
     GLint dstY1;
     GLbitfield mask;
     GLenum filter;
CODE:
    if(! __glewMulticastBlitFramebufferNV) {
        croak("glMulticastBlitFramebufferNV not available on this machine");
    };
    glMulticastBlitFramebufferNV(srcGpu, dstGpu, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

SV *
glMulticastBufferSubDataNV(gpuMask, buffer, offset, size, data);
     GLbitfield gpuMask;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     const void *data;
CODE:
    if(! __glewMulticastBufferSubDataNV) {
        croak("glMulticastBufferSubDataNV not available on this machine");
    };
    glMulticastBufferSubDataNV(gpuMask, buffer, offset, size, data);

SV *
glMulticastCopyBufferSubDataNV(readGpu, writeGpuMask, readBuffer, writeBuffer, readOffset, writeOffset, size);
     GLuint readGpu;
     GLbitfield writeGpuMask;
     GLuint readBuffer;
     GLuint writeBuffer;
     GLintptr readOffset;
     GLintptr writeOffset;
     GLsizeiptr size;
CODE:
    if(! __glewMulticastCopyBufferSubDataNV) {
        croak("glMulticastCopyBufferSubDataNV not available on this machine");
    };
    glMulticastCopyBufferSubDataNV(readGpu, writeGpuMask, readBuffer, writeBuffer, readOffset, writeOffset, size);

SV *
glMulticastCopyImageSubDataNV(srcGpu, dstGpuMask, srcName, srcTarget, srcLevel, srcX, srxY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
     GLuint srcGpu;
     GLbitfield dstGpuMask;
     GLuint srcName;
     GLenum srcTarget;
     GLint srcLevel;
     GLint srcX;
     GLint srxY;
     GLint srcZ;
     GLuint dstName;
     GLenum dstTarget;
     GLint dstLevel;
     GLint dstX;
     GLint dstY;
     GLint dstZ;
     GLsizei srcWidth;
     GLsizei srcHeight;
     GLsizei srcDepth;
CODE:
    if(! __glewMulticastCopyImageSubDataNV) {
        croak("glMulticastCopyImageSubDataNV not available on this machine");
    };
    glMulticastCopyImageSubDataNV(srcGpu, dstGpuMask, srcName, srcTarget, srcLevel, srcX, srxY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);

SV *
glMulticastFramebufferSampleLocationsfvNV(gpu, framebuffer, start, count, v);
     GLuint gpu;
     GLuint framebuffer;
     GLuint start;
     GLsizei count;
     const GLfloat* v;
CODE:
    if(! __glewMulticastFramebufferSampleLocationsfvNV) {
        croak("glMulticastFramebufferSampleLocationsfvNV not available on this machine");
    };
    glMulticastFramebufferSampleLocationsfvNV(gpu, framebuffer, start, count, v);

SV *
glMulticastGetQueryObjecti64vNV(gpu, id, pname, params);
     GLuint gpu;
     GLuint id;
     GLenum pname;
     GLint64* params;
CODE:
    if(! __glewMulticastGetQueryObjecti64vNV) {
        croak("glMulticastGetQueryObjecti64vNV not available on this machine");
    };
    glMulticastGetQueryObjecti64vNV(gpu, id, pname, params);

SV *
glMulticastGetQueryObjectivNV(gpu, id, pname, params);
     GLuint gpu;
     GLuint id;
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewMulticastGetQueryObjectivNV) {
        croak("glMulticastGetQueryObjectivNV not available on this machine");
    };
    glMulticastGetQueryObjectivNV(gpu, id, pname, params);

SV *
glMulticastGetQueryObjectui64vNV(gpu, id, pname, params);
     GLuint gpu;
     GLuint id;
     GLenum pname;
     GLuint64* params;
CODE:
    if(! __glewMulticastGetQueryObjectui64vNV) {
        croak("glMulticastGetQueryObjectui64vNV not available on this machine");
    };
    glMulticastGetQueryObjectui64vNV(gpu, id, pname, params);

SV *
glMulticastGetQueryObjectuivNV(gpu, id, pname, params);
     GLuint gpu;
     GLuint id;
     GLenum pname;
     GLuint* params;
CODE:
    if(! __glewMulticastGetQueryObjectuivNV) {
        croak("glMulticastGetQueryObjectuivNV not available on this machine");
    };
    glMulticastGetQueryObjectuivNV(gpu, id, pname, params);

SV *
glMulticastWaitSyncNV(signalGpu, waitGpuMask);
     GLuint signalGpu;
     GLbitfield waitGpuMask;
CODE:
    if(! __glewMulticastWaitSyncNV) {
        croak("glMulticastWaitSyncNV not available on this machine");
    };
    glMulticastWaitSyncNV(signalGpu, waitGpuMask);

SV *
glMultiDrawArrays(mode, first, count, drawcount);
     GLenum mode;
     const GLint *first;
     const GLsizei *count;
     GLsizei drawcount;
CODE:
    if(! __glewMultiDrawArrays) {
        croak("glMultiDrawArrays not available on this machine");
    };
    glMultiDrawArrays(mode, first, count, drawcount);

SV *
glMultiDrawArraysEXT(mode, first, count, primcount);
     GLenum mode;
     const GLint* first;
     const GLsizei *count;
     GLsizei primcount;
CODE:
    if(! __glewMultiDrawArraysEXT) {
        croak("glMultiDrawArraysEXT not available on this machine");
    };
    glMultiDrawArraysEXT(mode, first, count, primcount);

SV *
glMultiDrawArraysIndirect(mode, indirect, primcount, stride);
     GLenum mode;
     const void *indirect;
     GLsizei primcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawArraysIndirect) {
        croak("glMultiDrawArraysIndirect not available on this machine");
    };
    glMultiDrawArraysIndirect(mode, indirect, primcount, stride);

SV *
glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
     GLenum mode;
     const void *indirect;
     GLsizei primcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawArraysIndirectAMD) {
        croak("glMultiDrawArraysIndirectAMD not available on this machine");
    };
    glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);

SV *
glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
     GLenum mode;
     const void *indirect;
     GLintptr drawCount;
     GLsizei maxDrawCount;
     GLsizei stride;
     GLint vertexBufferCount;
CODE:
    if(! __glewMultiDrawArraysIndirectBindlessCountNV) {
        croak("glMultiDrawArraysIndirectBindlessCountNV not available on this machine");
    };
    glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);

SV *
glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
     GLenum mode;
     const void *indirect;
     GLsizei drawCount;
     GLsizei stride;
     GLint vertexBufferCount;
CODE:
    if(! __glewMultiDrawArraysIndirectBindlessNV) {
        croak("glMultiDrawArraysIndirectBindlessNV not available on this machine");
    };
    glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);

SV *
glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
     GLenum mode;
     const void *indirect;
     GLintptr drawcount;
     GLsizei maxdrawcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawArraysIndirectCountARB) {
        croak("glMultiDrawArraysIndirectCountARB not available on this machine");
    };
    glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);

SV *
glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
     GLenum mode;
     const GLint* first;
     const GLsizei *count;
     GLsizei primcount;
CODE:
    if(! __glewMultiDrawElementArrayAPPLE) {
        croak("glMultiDrawElementArrayAPPLE not available on this machine");
    };
    glMultiDrawElementArrayAPPLE(mode, first, count, primcount);

SV *
glMultiDrawElements(mode, count, type, indices, drawcount);
     GLenum mode;
     const GLsizei *count;
     GLenum type;
     const void *const* indices;
     GLsizei drawcount;
CODE:
    if(! __glewMultiDrawElements) {
        croak("glMultiDrawElements not available on this machine");
    };
    glMultiDrawElements(mode, count, type, indices, drawcount);

SV *
glMultiDrawElementsBaseVertex(mode, count, type, indices, primcount, basevertex);
     GLenum mode;
     const GLsizei* count;
     GLenum type;
     const void *const *indices;
     GLsizei primcount;
     const GLint *basevertex;
CODE:
    if(! __glewMultiDrawElementsBaseVertex) {
        croak("glMultiDrawElementsBaseVertex not available on this machine");
    };
    glMultiDrawElementsBaseVertex(mode, count, type, indices, primcount, basevertex);

SV *
glMultiDrawElementsEXT(mode, count, type, indices, primcount);
     GLenum mode;
     GLsizei* count;
     GLenum type;
     const void *const *indices;
     GLsizei primcount;
CODE:
    if(! __glewMultiDrawElementsEXT) {
        croak("glMultiDrawElementsEXT not available on this machine");
    };
    glMultiDrawElementsEXT(mode, count, type, indices, primcount);

SV *
glMultiDrawElementsIndirect(mode, type, indirect, primcount, stride);
     GLenum mode;
     GLenum type;
     const void *indirect;
     GLsizei primcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawElementsIndirect) {
        croak("glMultiDrawElementsIndirect not available on this machine");
    };
    glMultiDrawElementsIndirect(mode, type, indirect, primcount, stride);

SV *
glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
     GLenum mode;
     GLenum type;
     const void *indirect;
     GLsizei primcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawElementsIndirectAMD) {
        croak("glMultiDrawElementsIndirectAMD not available on this machine");
    };
    glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);

SV *
glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
     GLenum mode;
     GLenum type;
     const void *indirect;
     GLintptr drawCount;
     GLsizei maxDrawCount;
     GLsizei stride;
     GLint vertexBufferCount;
CODE:
    if(! __glewMultiDrawElementsIndirectBindlessCountNV) {
        croak("glMultiDrawElementsIndirectBindlessCountNV not available on this machine");
    };
    glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);

SV *
glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
     GLenum mode;
     GLenum type;
     const void *indirect;
     GLsizei drawCount;
     GLsizei stride;
     GLint vertexBufferCount;
CODE:
    if(! __glewMultiDrawElementsIndirectBindlessNV) {
        croak("glMultiDrawElementsIndirectBindlessNV not available on this machine");
    };
    glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);

SV *
glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
     GLenum mode;
     GLenum type;
     const void *indirect;
     GLintptr drawcount;
     GLsizei maxdrawcount;
     GLsizei stride;
CODE:
    if(! __glewMultiDrawElementsIndirectCountARB) {
        croak("glMultiDrawElementsIndirectCountARB not available on this machine");
    };
    glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);

SV *
glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
     GLenum mode;
     GLuint start;
     GLuint end;
     const GLint* first;
     const GLsizei *count;
     GLsizei primcount;
CODE:
    if(! __glewMultiDrawRangeElementArrayAPPLE) {
        croak("glMultiDrawRangeElementArrayAPPLE not available on this machine");
    };
    glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);

SV *
glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
     const GLenum* mode;
     const GLint *first;
     const GLsizei *count;
     GLsizei primcount;
     GLint modestride;
CODE:
    if(! __glewMultiModeDrawArraysIBM) {
        croak("glMultiModeDrawArraysIBM not available on this machine");
    };
    glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);

SV *
glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
     const GLenum* mode;
     const GLsizei *count;
     GLenum type;
     const void *const *indices;
     GLsizei primcount;
     GLint modestride;
CODE:
    if(! __glewMultiModeDrawElementsIBM) {
        croak("glMultiModeDrawElementsIBM not available on this machine");
    };
    glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);

SV *
glMultiTexBufferEXT(texunit, target, internalformat, buffer);
     GLenum texunit;
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
CODE:
    if(! __glewMultiTexBufferEXT) {
        croak("glMultiTexBufferEXT not available on this machine");
    };
    glMultiTexBufferEXT(texunit, target, internalformat, buffer);

SV *
glMultiTexCoord1d(target, s);
     GLenum target;
     GLdouble s;
CODE:
    if(! __glewMultiTexCoord1d) {
        croak("glMultiTexCoord1d not available on this machine");
    };
    glMultiTexCoord1d(target, s);

SV *
glMultiTexCoord1dARB(target, s);
     GLenum target;
     GLdouble s;
CODE:
    if(! __glewMultiTexCoord1dARB) {
        croak("glMultiTexCoord1dARB not available on this machine");
    };
    glMultiTexCoord1dARB(target, s);

SV *
glMultiTexCoord1dv(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord1dv) {
        croak("glMultiTexCoord1dv not available on this machine");
    };
    glMultiTexCoord1dv(target, v);

SV *
glMultiTexCoord1dvARB(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord1dvARB) {
        croak("glMultiTexCoord1dvARB not available on this machine");
    };
    glMultiTexCoord1dvARB(target, v);

SV *
glMultiTexCoord1f(target, s);
     GLenum target;
     GLfloat s;
CODE:
    if(! __glewMultiTexCoord1f) {
        croak("glMultiTexCoord1f not available on this machine");
    };
    glMultiTexCoord1f(target, s);

SV *
glMultiTexCoord1fARB(target, s);
     GLenum target;
     GLfloat s;
CODE:
    if(! __glewMultiTexCoord1fARB) {
        croak("glMultiTexCoord1fARB not available on this machine");
    };
    glMultiTexCoord1fARB(target, s);

SV *
glMultiTexCoord1fv(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord1fv) {
        croak("glMultiTexCoord1fv not available on this machine");
    };
    glMultiTexCoord1fv(target, v);

SV *
glMultiTexCoord1fvARB(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord1fvARB) {
        croak("glMultiTexCoord1fvARB not available on this machine");
    };
    glMultiTexCoord1fvARB(target, v);

SV *
glMultiTexCoord1hNV(target, s);
     GLenum target;
     GLhalf s;
CODE:
    if(! __glewMultiTexCoord1hNV) {
        croak("glMultiTexCoord1hNV not available on this machine");
    };
    glMultiTexCoord1hNV(target, s);

SV *
glMultiTexCoord1hvNV(target, v);
     GLenum target;
     const GLhalf* v;
CODE:
    if(! __glewMultiTexCoord1hvNV) {
        croak("glMultiTexCoord1hvNV not available on this machine");
    };
    glMultiTexCoord1hvNV(target, v);

SV *
glMultiTexCoord1i(target, s);
     GLenum target;
     GLint s;
CODE:
    if(! __glewMultiTexCoord1i) {
        croak("glMultiTexCoord1i not available on this machine");
    };
    glMultiTexCoord1i(target, s);

SV *
glMultiTexCoord1iARB(target, s);
     GLenum target;
     GLint s;
CODE:
    if(! __glewMultiTexCoord1iARB) {
        croak("glMultiTexCoord1iARB not available on this machine");
    };
    glMultiTexCoord1iARB(target, s);

SV *
glMultiTexCoord1iv(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord1iv) {
        croak("glMultiTexCoord1iv not available on this machine");
    };
    glMultiTexCoord1iv(target, v);

SV *
glMultiTexCoord1ivARB(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord1ivARB) {
        croak("glMultiTexCoord1ivARB not available on this machine");
    };
    glMultiTexCoord1ivARB(target, v);

SV *
glMultiTexCoord1s(target, s);
     GLenum target;
     GLshort s;
CODE:
    if(! __glewMultiTexCoord1s) {
        croak("glMultiTexCoord1s not available on this machine");
    };
    glMultiTexCoord1s(target, s);

SV *
glMultiTexCoord1sARB(target, s);
     GLenum target;
     GLshort s;
CODE:
    if(! __glewMultiTexCoord1sARB) {
        croak("glMultiTexCoord1sARB not available on this machine");
    };
    glMultiTexCoord1sARB(target, s);

SV *
glMultiTexCoord1sv(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord1sv) {
        croak("glMultiTexCoord1sv not available on this machine");
    };
    glMultiTexCoord1sv(target, v);

SV *
glMultiTexCoord1svARB(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord1svARB) {
        croak("glMultiTexCoord1svARB not available on this machine");
    };
    glMultiTexCoord1svARB(target, v);

SV *
glMultiTexCoord2d(target, s, t);
     GLenum target;
     GLdouble s;
     GLdouble t;
CODE:
    if(! __glewMultiTexCoord2d) {
        croak("glMultiTexCoord2d not available on this machine");
    };
    glMultiTexCoord2d(target, s, t);

SV *
glMultiTexCoord2dARB(target, s, t);
     GLenum target;
     GLdouble s;
     GLdouble t;
CODE:
    if(! __glewMultiTexCoord2dARB) {
        croak("glMultiTexCoord2dARB not available on this machine");
    };
    glMultiTexCoord2dARB(target, s, t);

SV *
glMultiTexCoord2dv(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord2dv) {
        croak("glMultiTexCoord2dv not available on this machine");
    };
    glMultiTexCoord2dv(target, v);

SV *
glMultiTexCoord2dvARB(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord2dvARB) {
        croak("glMultiTexCoord2dvARB not available on this machine");
    };
    glMultiTexCoord2dvARB(target, v);

SV *
glMultiTexCoord2f(target, s, t);
     GLenum target;
     GLfloat s;
     GLfloat t;
CODE:
    if(! __glewMultiTexCoord2f) {
        croak("glMultiTexCoord2f not available on this machine");
    };
    glMultiTexCoord2f(target, s, t);

SV *
glMultiTexCoord2fARB(target, s, t);
     GLenum target;
     GLfloat s;
     GLfloat t;
CODE:
    if(! __glewMultiTexCoord2fARB) {
        croak("glMultiTexCoord2fARB not available on this machine");
    };
    glMultiTexCoord2fARB(target, s, t);

SV *
glMultiTexCoord2fv(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord2fv) {
        croak("glMultiTexCoord2fv not available on this machine");
    };
    glMultiTexCoord2fv(target, v);

SV *
glMultiTexCoord2fvARB(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord2fvARB) {
        croak("glMultiTexCoord2fvARB not available on this machine");
    };
    glMultiTexCoord2fvARB(target, v);

SV *
glMultiTexCoord2hNV(target, s, t);
     GLenum target;
     GLhalf s;
     GLhalf t;
CODE:
    if(! __glewMultiTexCoord2hNV) {
        croak("glMultiTexCoord2hNV not available on this machine");
    };
    glMultiTexCoord2hNV(target, s, t);

SV *
glMultiTexCoord2hvNV(target, v);
     GLenum target;
     const GLhalf* v;
CODE:
    if(! __glewMultiTexCoord2hvNV) {
        croak("glMultiTexCoord2hvNV not available on this machine");
    };
    glMultiTexCoord2hvNV(target, v);

SV *
glMultiTexCoord2i(target, s, t);
     GLenum target;
     GLint s;
     GLint t;
CODE:
    if(! __glewMultiTexCoord2i) {
        croak("glMultiTexCoord2i not available on this machine");
    };
    glMultiTexCoord2i(target, s, t);

SV *
glMultiTexCoord2iARB(target, s, t);
     GLenum target;
     GLint s;
     GLint t;
CODE:
    if(! __glewMultiTexCoord2iARB) {
        croak("glMultiTexCoord2iARB not available on this machine");
    };
    glMultiTexCoord2iARB(target, s, t);

SV *
glMultiTexCoord2iv(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord2iv) {
        croak("glMultiTexCoord2iv not available on this machine");
    };
    glMultiTexCoord2iv(target, v);

SV *
glMultiTexCoord2ivARB(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord2ivARB) {
        croak("glMultiTexCoord2ivARB not available on this machine");
    };
    glMultiTexCoord2ivARB(target, v);

SV *
glMultiTexCoord2s(target, s, t);
     GLenum target;
     GLshort s;
     GLshort t;
CODE:
    if(! __glewMultiTexCoord2s) {
        croak("glMultiTexCoord2s not available on this machine");
    };
    glMultiTexCoord2s(target, s, t);

SV *
glMultiTexCoord2sARB(target, s, t);
     GLenum target;
     GLshort s;
     GLshort t;
CODE:
    if(! __glewMultiTexCoord2sARB) {
        croak("glMultiTexCoord2sARB not available on this machine");
    };
    glMultiTexCoord2sARB(target, s, t);

SV *
glMultiTexCoord2sv(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord2sv) {
        croak("glMultiTexCoord2sv not available on this machine");
    };
    glMultiTexCoord2sv(target, v);

SV *
glMultiTexCoord2svARB(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord2svARB) {
        croak("glMultiTexCoord2svARB not available on this machine");
    };
    glMultiTexCoord2svARB(target, v);

SV *
glMultiTexCoord3d(target, s, t, r);
     GLenum target;
     GLdouble s;
     GLdouble t;
     GLdouble r;
CODE:
    if(! __glewMultiTexCoord3d) {
        croak("glMultiTexCoord3d not available on this machine");
    };
    glMultiTexCoord3d(target, s, t, r);

SV *
glMultiTexCoord3dARB(target, s, t, r);
     GLenum target;
     GLdouble s;
     GLdouble t;
     GLdouble r;
CODE:
    if(! __glewMultiTexCoord3dARB) {
        croak("glMultiTexCoord3dARB not available on this machine");
    };
    glMultiTexCoord3dARB(target, s, t, r);

SV *
glMultiTexCoord3dv(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord3dv) {
        croak("glMultiTexCoord3dv not available on this machine");
    };
    glMultiTexCoord3dv(target, v);

SV *
glMultiTexCoord3dvARB(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord3dvARB) {
        croak("glMultiTexCoord3dvARB not available on this machine");
    };
    glMultiTexCoord3dvARB(target, v);

SV *
glMultiTexCoord3f(target, s, t, r);
     GLenum target;
     GLfloat s;
     GLfloat t;
     GLfloat r;
CODE:
    if(! __glewMultiTexCoord3f) {
        croak("glMultiTexCoord3f not available on this machine");
    };
    glMultiTexCoord3f(target, s, t, r);

SV *
glMultiTexCoord3fARB(target, s, t, r);
     GLenum target;
     GLfloat s;
     GLfloat t;
     GLfloat r;
CODE:
    if(! __glewMultiTexCoord3fARB) {
        croak("glMultiTexCoord3fARB not available on this machine");
    };
    glMultiTexCoord3fARB(target, s, t, r);

SV *
glMultiTexCoord3fv(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord3fv) {
        croak("glMultiTexCoord3fv not available on this machine");
    };
    glMultiTexCoord3fv(target, v);

SV *
glMultiTexCoord3fvARB(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord3fvARB) {
        croak("glMultiTexCoord3fvARB not available on this machine");
    };
    glMultiTexCoord3fvARB(target, v);

SV *
glMultiTexCoord3hNV(target, s, t, r);
     GLenum target;
     GLhalf s;
     GLhalf t;
     GLhalf r;
CODE:
    if(! __glewMultiTexCoord3hNV) {
        croak("glMultiTexCoord3hNV not available on this machine");
    };
    glMultiTexCoord3hNV(target, s, t, r);

SV *
glMultiTexCoord3hvNV(target, v);
     GLenum target;
     const GLhalf* v;
CODE:
    if(! __glewMultiTexCoord3hvNV) {
        croak("glMultiTexCoord3hvNV not available on this machine");
    };
    glMultiTexCoord3hvNV(target, v);

SV *
glMultiTexCoord3i(target, s, t, r);
     GLenum target;
     GLint s;
     GLint t;
     GLint r;
CODE:
    if(! __glewMultiTexCoord3i) {
        croak("glMultiTexCoord3i not available on this machine");
    };
    glMultiTexCoord3i(target, s, t, r);

SV *
glMultiTexCoord3iARB(target, s, t, r);
     GLenum target;
     GLint s;
     GLint t;
     GLint r;
CODE:
    if(! __glewMultiTexCoord3iARB) {
        croak("glMultiTexCoord3iARB not available on this machine");
    };
    glMultiTexCoord3iARB(target, s, t, r);

SV *
glMultiTexCoord3iv(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord3iv) {
        croak("glMultiTexCoord3iv not available on this machine");
    };
    glMultiTexCoord3iv(target, v);

SV *
glMultiTexCoord3ivARB(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord3ivARB) {
        croak("glMultiTexCoord3ivARB not available on this machine");
    };
    glMultiTexCoord3ivARB(target, v);

SV *
glMultiTexCoord3s(target, s, t, r);
     GLenum target;
     GLshort s;
     GLshort t;
     GLshort r;
CODE:
    if(! __glewMultiTexCoord3s) {
        croak("glMultiTexCoord3s not available on this machine");
    };
    glMultiTexCoord3s(target, s, t, r);

SV *
glMultiTexCoord3sARB(target, s, t, r);
     GLenum target;
     GLshort s;
     GLshort t;
     GLshort r;
CODE:
    if(! __glewMultiTexCoord3sARB) {
        croak("glMultiTexCoord3sARB not available on this machine");
    };
    glMultiTexCoord3sARB(target, s, t, r);

SV *
glMultiTexCoord3sv(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord3sv) {
        croak("glMultiTexCoord3sv not available on this machine");
    };
    glMultiTexCoord3sv(target, v);

SV *
glMultiTexCoord3svARB(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord3svARB) {
        croak("glMultiTexCoord3svARB not available on this machine");
    };
    glMultiTexCoord3svARB(target, v);

SV *
glMultiTexCoord4d(target, s, t, r, q);
     GLenum target;
     GLdouble s;
     GLdouble t;
     GLdouble r;
     GLdouble q;
CODE:
    if(! __glewMultiTexCoord4d) {
        croak("glMultiTexCoord4d not available on this machine");
    };
    glMultiTexCoord4d(target, s, t, r, q);

SV *
glMultiTexCoord4dARB(target, s, t, r, q);
     GLenum target;
     GLdouble s;
     GLdouble t;
     GLdouble r;
     GLdouble q;
CODE:
    if(! __glewMultiTexCoord4dARB) {
        croak("glMultiTexCoord4dARB not available on this machine");
    };
    glMultiTexCoord4dARB(target, s, t, r, q);

SV *
glMultiTexCoord4dv(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord4dv) {
        croak("glMultiTexCoord4dv not available on this machine");
    };
    glMultiTexCoord4dv(target, v);

SV *
glMultiTexCoord4dvARB(target, v);
     GLenum target;
     const GLdouble *v;
CODE:
    if(! __glewMultiTexCoord4dvARB) {
        croak("glMultiTexCoord4dvARB not available on this machine");
    };
    glMultiTexCoord4dvARB(target, v);

SV *
glMultiTexCoord4f(target, s, t, r, q);
     GLenum target;
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat q;
CODE:
    if(! __glewMultiTexCoord4f) {
        croak("glMultiTexCoord4f not available on this machine");
    };
    glMultiTexCoord4f(target, s, t, r, q);

SV *
glMultiTexCoord4fARB(target, s, t, r, q);
     GLenum target;
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat q;
CODE:
    if(! __glewMultiTexCoord4fARB) {
        croak("glMultiTexCoord4fARB not available on this machine");
    };
    glMultiTexCoord4fARB(target, s, t, r, q);

SV *
glMultiTexCoord4fv(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord4fv) {
        croak("glMultiTexCoord4fv not available on this machine");
    };
    glMultiTexCoord4fv(target, v);

SV *
glMultiTexCoord4fvARB(target, v);
     GLenum target;
     const GLfloat *v;
CODE:
    if(! __glewMultiTexCoord4fvARB) {
        croak("glMultiTexCoord4fvARB not available on this machine");
    };
    glMultiTexCoord4fvARB(target, v);

SV *
glMultiTexCoord4hNV(target, s, t, r, q);
     GLenum target;
     GLhalf s;
     GLhalf t;
     GLhalf r;
     GLhalf q;
CODE:
    if(! __glewMultiTexCoord4hNV) {
        croak("glMultiTexCoord4hNV not available on this machine");
    };
    glMultiTexCoord4hNV(target, s, t, r, q);

SV *
glMultiTexCoord4hvNV(target, v);
     GLenum target;
     const GLhalf* v;
CODE:
    if(! __glewMultiTexCoord4hvNV) {
        croak("glMultiTexCoord4hvNV not available on this machine");
    };
    glMultiTexCoord4hvNV(target, v);

SV *
glMultiTexCoord4i(target, s, t, r, q);
     GLenum target;
     GLint s;
     GLint t;
     GLint r;
     GLint q;
CODE:
    if(! __glewMultiTexCoord4i) {
        croak("glMultiTexCoord4i not available on this machine");
    };
    glMultiTexCoord4i(target, s, t, r, q);

SV *
glMultiTexCoord4iARB(target, s, t, r, q);
     GLenum target;
     GLint s;
     GLint t;
     GLint r;
     GLint q;
CODE:
    if(! __glewMultiTexCoord4iARB) {
        croak("glMultiTexCoord4iARB not available on this machine");
    };
    glMultiTexCoord4iARB(target, s, t, r, q);

SV *
glMultiTexCoord4iv(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord4iv) {
        croak("glMultiTexCoord4iv not available on this machine");
    };
    glMultiTexCoord4iv(target, v);

SV *
glMultiTexCoord4ivARB(target, v);
     GLenum target;
     const GLint *v;
CODE:
    if(! __glewMultiTexCoord4ivARB) {
        croak("glMultiTexCoord4ivARB not available on this machine");
    };
    glMultiTexCoord4ivARB(target, v);

SV *
glMultiTexCoord4s(target, s, t, r, q);
     GLenum target;
     GLshort s;
     GLshort t;
     GLshort r;
     GLshort q;
CODE:
    if(! __glewMultiTexCoord4s) {
        croak("glMultiTexCoord4s not available on this machine");
    };
    glMultiTexCoord4s(target, s, t, r, q);

SV *
glMultiTexCoord4sARB(target, s, t, r, q);
     GLenum target;
     GLshort s;
     GLshort t;
     GLshort r;
     GLshort q;
CODE:
    if(! __glewMultiTexCoord4sARB) {
        croak("glMultiTexCoord4sARB not available on this machine");
    };
    glMultiTexCoord4sARB(target, s, t, r, q);

SV *
glMultiTexCoord4sv(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord4sv) {
        croak("glMultiTexCoord4sv not available on this machine");
    };
    glMultiTexCoord4sv(target, v);

SV *
glMultiTexCoord4svARB(target, v);
     GLenum target;
     const GLshort *v;
CODE:
    if(! __glewMultiTexCoord4svARB) {
        croak("glMultiTexCoord4svARB not available on this machine");
    };
    glMultiTexCoord4svARB(target, v);

SV *
glMultiTexCoord4x(target, s, t, r, q);
     GLenum target;
     GLfixed s;
     GLfixed t;
     GLfixed r;
     GLfixed q;
CODE:
    if(! __glewMultiTexCoord4x) {
        croak("glMultiTexCoord4x not available on this machine");
    };
    glMultiTexCoord4x(target, s, t, r, q);

SV *
glMultiTexCoordP1ui(texture, type, coords);
     GLenum texture;
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewMultiTexCoordP1ui) {
        croak("glMultiTexCoordP1ui not available on this machine");
    };
    glMultiTexCoordP1ui(texture, type, coords);

SV *
glMultiTexCoordP1uiv(texture, type, coords);
     GLenum texture;
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewMultiTexCoordP1uiv) {
        croak("glMultiTexCoordP1uiv not available on this machine");
    };
    glMultiTexCoordP1uiv(texture, type, coords);

SV *
glMultiTexCoordP2ui(texture, type, coords);
     GLenum texture;
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewMultiTexCoordP2ui) {
        croak("glMultiTexCoordP2ui not available on this machine");
    };
    glMultiTexCoordP2ui(texture, type, coords);

SV *
glMultiTexCoordP2uiv(texture, type, coords);
     GLenum texture;
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewMultiTexCoordP2uiv) {
        croak("glMultiTexCoordP2uiv not available on this machine");
    };
    glMultiTexCoordP2uiv(texture, type, coords);

SV *
glMultiTexCoordP3ui(texture, type, coords);
     GLenum texture;
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewMultiTexCoordP3ui) {
        croak("glMultiTexCoordP3ui not available on this machine");
    };
    glMultiTexCoordP3ui(texture, type, coords);

SV *
glMultiTexCoordP3uiv(texture, type, coords);
     GLenum texture;
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewMultiTexCoordP3uiv) {
        croak("glMultiTexCoordP3uiv not available on this machine");
    };
    glMultiTexCoordP3uiv(texture, type, coords);

SV *
glMultiTexCoordP4ui(texture, type, coords);
     GLenum texture;
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewMultiTexCoordP4ui) {
        croak("glMultiTexCoordP4ui not available on this machine");
    };
    glMultiTexCoordP4ui(texture, type, coords);

SV *
glMultiTexCoordP4uiv(texture, type, coords);
     GLenum texture;
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewMultiTexCoordP4uiv) {
        croak("glMultiTexCoordP4uiv not available on this machine");
    };
    glMultiTexCoordP4uiv(texture, type, coords);

SV *
glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
     GLenum texunit;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewMultiTexCoordPointerEXT) {
        croak("glMultiTexCoordPointerEXT not available on this machine");
    };
    glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);

SV *
glMultiTexEnvfEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewMultiTexEnvfEXT) {
        croak("glMultiTexEnvfEXT not available on this machine");
    };
    glMultiTexEnvfEXT(texunit, target, pname, param);

SV *
glMultiTexEnvfvEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewMultiTexEnvfvEXT) {
        croak("glMultiTexEnvfvEXT not available on this machine");
    };
    glMultiTexEnvfvEXT(texunit, target, pname, params);

SV *
glMultiTexEnviEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewMultiTexEnviEXT) {
        croak("glMultiTexEnviEXT not available on this machine");
    };
    glMultiTexEnviEXT(texunit, target, pname, param);

SV *
glMultiTexEnvivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewMultiTexEnvivEXT) {
        croak("glMultiTexEnvivEXT not available on this machine");
    };
    glMultiTexEnvivEXT(texunit, target, pname, params);

SV *
glMultiTexGendEXT(texunit, coord, pname, param);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLdouble param;
CODE:
    if(! __glewMultiTexGendEXT) {
        croak("glMultiTexGendEXT not available on this machine");
    };
    glMultiTexGendEXT(texunit, coord, pname, param);

SV *
glMultiTexGendvEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     const GLdouble* params;
CODE:
    if(! __glewMultiTexGendvEXT) {
        croak("glMultiTexGendvEXT not available on this machine");
    };
    glMultiTexGendvEXT(texunit, coord, pname, params);

SV *
glMultiTexGenfEXT(texunit, coord, pname, param);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewMultiTexGenfEXT) {
        croak("glMultiTexGenfEXT not available on this machine");
    };
    glMultiTexGenfEXT(texunit, coord, pname, param);

SV *
glMultiTexGenfvEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewMultiTexGenfvEXT) {
        croak("glMultiTexGenfvEXT not available on this machine");
    };
    glMultiTexGenfvEXT(texunit, coord, pname, params);

SV *
glMultiTexGeniEXT(texunit, coord, pname, param);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewMultiTexGeniEXT) {
        croak("glMultiTexGeniEXT not available on this machine");
    };
    glMultiTexGeniEXT(texunit, coord, pname, param);

SV *
glMultiTexGenivEXT(texunit, coord, pname, params);
     GLenum texunit;
     GLenum coord;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewMultiTexGenivEXT) {
        croak("glMultiTexGenivEXT not available on this machine");
    };
    glMultiTexGenivEXT(texunit, coord, pname, params);

SV *
glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexImage1DEXT) {
        croak("glMultiTexImage1DEXT not available on this machine");
    };
    glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);

SV *
glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexImage2DEXT) {
        croak("glMultiTexImage2DEXT not available on this machine");
    };
    glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);

SV *
glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexImage3DEXT) {
        croak("glMultiTexImage3DEXT not available on this machine");
    };
    glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);

SV *
glMultiTexParameterfEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewMultiTexParameterfEXT) {
        croak("glMultiTexParameterfEXT not available on this machine");
    };
    glMultiTexParameterfEXT(texunit, target, pname, param);

SV *
glMultiTexParameterfvEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLfloat* param;
CODE:
    if(! __glewMultiTexParameterfvEXT) {
        croak("glMultiTexParameterfvEXT not available on this machine");
    };
    glMultiTexParameterfvEXT(texunit, target, pname, param);

SV *
glMultiTexParameteriEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewMultiTexParameteriEXT) {
        croak("glMultiTexParameteriEXT not available on this machine");
    };
    glMultiTexParameteriEXT(texunit, target, pname, param);

SV *
glMultiTexParameterIivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewMultiTexParameterIivEXT) {
        croak("glMultiTexParameterIivEXT not available on this machine");
    };
    glMultiTexParameterIivEXT(texunit, target, pname, params);

SV *
glMultiTexParameterIuivEXT(texunit, target, pname, params);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLuint* params;
CODE:
    if(! __glewMultiTexParameterIuivEXT) {
        croak("glMultiTexParameterIuivEXT not available on this machine");
    };
    glMultiTexParameterIuivEXT(texunit, target, pname, params);

SV *
glMultiTexParameterivEXT(texunit, target, pname, param);
     GLenum texunit;
     GLenum target;
     GLenum pname;
     const GLint* param;
CODE:
    if(! __glewMultiTexParameterivEXT) {
        croak("glMultiTexParameterivEXT not available on this machine");
    };
    glMultiTexParameterivEXT(texunit, target, pname, param);

SV *
glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
     GLenum texunit;
     GLenum target;
     GLuint renderbuffer;
CODE:
    if(! __glewMultiTexRenderbufferEXT) {
        croak("glMultiTexRenderbufferEXT not available on this machine");
    };
    glMultiTexRenderbufferEXT(texunit, target, renderbuffer);

SV *
glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexSubImage1DEXT) {
        croak("glMultiTexSubImage1DEXT not available on this machine");
    };
    glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);

SV *
glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexSubImage2DEXT) {
        croak("glMultiTexSubImage2DEXT not available on this machine");
    };
    glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);

SV *
glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
     GLenum texunit;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewMultiTexSubImage3DEXT) {
        croak("glMultiTexSubImage3DEXT not available on this machine");
    };
    glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

SV *
glMultMatrixx(m);
     const GLfixed* m;
CODE:
    if(! __glewMultMatrixx) {
        croak("glMultMatrixx not available on this machine");
    };
    glMultMatrixx(m);

SV *
glMultTransposeMatrixd(m);
          const GLdouble * m;
CODE:
    if(! __glewMultTransposeMatrixd) {
        croak("glMultTransposeMatrixd not available on this machine");
    };
    glMultTransposeMatrixd(m);

SV *
glMultTransposeMatrixdARB(m);
          GLdouble * m;
CODE:
    if(! __glewMultTransposeMatrixdARB) {
        croak("glMultTransposeMatrixdARB not available on this machine");
    };
    glMultTransposeMatrixdARB(m);

SV *
glMultTransposeMatrixf(m);
          const GLfloat * m;
CODE:
    if(! __glewMultTransposeMatrixf) {
        croak("glMultTransposeMatrixf not available on this machine");
    };
    glMultTransposeMatrixf(m);

SV *
glMultTransposeMatrixfARB(m);
          GLfloat * m;
CODE:
    if(! __glewMultTransposeMatrixfARB) {
        croak("glMultTransposeMatrixfARB not available on this machine");
    };
    glMultTransposeMatrixfARB(m);

SV *
glNamedBufferData(buffer, size, data, usage);
     GLuint buffer;
     GLsizeiptr size;
     const void *data;
     GLenum usage;
CODE:
    if(! __glewNamedBufferData) {
        croak("glNamedBufferData not available on this machine");
    };
    glNamedBufferData(buffer, size, data, usage);

SV *
glNamedBufferDataEXT(buffer, size, data, usage);
     GLuint buffer;
     GLsizeiptr size;
     const void *data;
     GLenum usage;
CODE:
    if(! __glewNamedBufferDataEXT) {
        croak("glNamedBufferDataEXT not available on this machine");
    };
    glNamedBufferDataEXT(buffer, size, data, usage);

SV *
glNamedBufferStorage(buffer, size, data, flags);
     GLuint buffer;
     GLsizeiptr size;
     const void *data;
     GLbitfield flags;
CODE:
    if(! __glewNamedBufferStorage) {
        croak("glNamedBufferStorage not available on this machine");
    };
    glNamedBufferStorage(buffer, size, data, flags);

SV *
glNamedBufferStorageEXT(buffer, size, data, flags);
     GLuint buffer;
     GLsizeiptr size;
     const void *data;
     GLbitfield flags;
CODE:
    if(! __glewNamedBufferStorageEXT) {
        croak("glNamedBufferStorageEXT not available on this machine");
    };
    glNamedBufferStorageEXT(buffer, size, data, flags);

SV *
glNamedBufferSubData(buffer, offset, size, data);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     const void *data;
CODE:
    if(! __glewNamedBufferSubData) {
        croak("glNamedBufferSubData not available on this machine");
    };
    glNamedBufferSubData(buffer, offset, size, data);

SV *
glNamedBufferSubDataEXT(buffer, offset, size, data);
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
     const void *data;
CODE:
    if(! __glewNamedBufferSubDataEXT) {
        croak("glNamedBufferSubDataEXT not available on this machine");
    };
    glNamedBufferSubDataEXT(buffer, offset, size, data);

SV *
glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
     GLuint readBuffer;
     GLuint writeBuffer;
     GLintptr readOffset;
     GLintptr writeOffset;
     GLsizeiptr size;
CODE:
    if(! __glewNamedCopyBufferSubDataEXT) {
        croak("glNamedCopyBufferSubDataEXT not available on this machine");
    };
    glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);

SV *
glNamedFramebufferDrawBuffer(framebuffer, mode);
     GLuint framebuffer;
     GLenum mode;
CODE:
    if(! __glewNamedFramebufferDrawBuffer) {
        croak("glNamedFramebufferDrawBuffer not available on this machine");
    };
    glNamedFramebufferDrawBuffer(framebuffer, mode);

SV *
glNamedFramebufferDrawBuffers(framebuffer, n, bufs);
     GLuint framebuffer;
     GLsizei n;
     const GLenum* bufs;
CODE:
    if(! __glewNamedFramebufferDrawBuffers) {
        croak("glNamedFramebufferDrawBuffers not available on this machine");
    };
    glNamedFramebufferDrawBuffers(framebuffer, n, bufs);

SV *
glNamedFramebufferParameteri(framebuffer, pname, param);
     GLuint framebuffer;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewNamedFramebufferParameteri) {
        croak("glNamedFramebufferParameteri not available on this machine");
    };
    glNamedFramebufferParameteri(framebuffer, pname, param);

SV *
glNamedFramebufferParameteriEXT(framebuffer, pname, param);
     GLuint framebuffer;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewNamedFramebufferParameteriEXT) {
        croak("glNamedFramebufferParameteriEXT not available on this machine");
    };
    glNamedFramebufferParameteriEXT(framebuffer, pname, param);

SV *
glNamedFramebufferReadBuffer(framebuffer, mode);
     GLuint framebuffer;
     GLenum mode;
CODE:
    if(! __glewNamedFramebufferReadBuffer) {
        croak("glNamedFramebufferReadBuffer not available on this machine");
    };
    glNamedFramebufferReadBuffer(framebuffer, mode);

SV *
glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
     GLuint framebuffer;
     GLenum attachment;
     GLenum renderbuffertarget;
     GLuint renderbuffer;
CODE:
    if(! __glewNamedFramebufferRenderbuffer) {
        croak("glNamedFramebufferRenderbuffer not available on this machine");
    };
    glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);

SV *
glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
     GLuint framebuffer;
     GLenum attachment;
     GLenum renderbuffertarget;
     GLuint renderbuffer;
CODE:
    if(! __glewNamedFramebufferRenderbufferEXT) {
        croak("glNamedFramebufferRenderbufferEXT not available on this machine");
    };
    glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);

SV *
glNamedFramebufferSampleLocationsfvARB(framebuffer, start, count, v);
     GLuint framebuffer;
     GLuint start;
     GLsizei count;
     const GLfloat* v;
CODE:
    if(! __glewNamedFramebufferSampleLocationsfvARB) {
        croak("glNamedFramebufferSampleLocationsfvARB not available on this machine");
    };
    glNamedFramebufferSampleLocationsfvARB(framebuffer, start, count, v);

SV *
glNamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
     GLuint framebuffer;
     GLuint start;
     GLsizei count;
     const GLfloat* v;
CODE:
    if(! __glewNamedFramebufferSampleLocationsfvNV) {
        croak("glNamedFramebufferSampleLocationsfvNV not available on this machine");
    };
    glNamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);

SV *
glNamedFramebufferTexture(framebuffer, attachment, texture, level);
     GLuint framebuffer;
     GLenum attachment;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewNamedFramebufferTexture) {
        croak("glNamedFramebufferTexture not available on this machine");
    };
    glNamedFramebufferTexture(framebuffer, attachment, texture, level);

SV *
glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
     GLuint framebuffer;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewNamedFramebufferTexture1DEXT) {
        croak("glNamedFramebufferTexture1DEXT not available on this machine");
    };
    glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);

SV *
glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
     GLuint framebuffer;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewNamedFramebufferTexture2DEXT) {
        croak("glNamedFramebufferTexture2DEXT not available on this machine");
    };
    glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);

SV *
glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
     GLuint framebuffer;
     GLenum attachment;
     GLenum textarget;
     GLuint texture;
     GLint level;
     GLint zoffset;
CODE:
    if(! __glewNamedFramebufferTexture3DEXT) {
        croak("glNamedFramebufferTexture3DEXT not available on this machine");
    };
    glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);

SV *
glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
     GLuint framebuffer;
     GLenum attachment;
     GLuint texture;
     GLint level;
CODE:
    if(! __glewNamedFramebufferTextureEXT) {
        croak("glNamedFramebufferTextureEXT not available on this machine");
    };
    glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);

SV *
glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
     GLuint framebuffer;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLenum face;
CODE:
    if(! __glewNamedFramebufferTextureFaceEXT) {
        croak("glNamedFramebufferTextureFaceEXT not available on this machine");
    };
    glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);

SV *
glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
     GLuint framebuffer;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLint layer;
CODE:
    if(! __glewNamedFramebufferTextureLayer) {
        croak("glNamedFramebufferTextureLayer not available on this machine");
    };
    glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);

SV *
glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
     GLuint framebuffer;
     GLenum attachment;
     GLuint texture;
     GLint level;
     GLint layer;
CODE:
    if(! __glewNamedFramebufferTextureLayerEXT) {
        croak("glNamedFramebufferTextureLayerEXT not available on this machine");
    };
    glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);

SV *
glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
     GLuint program;
     GLenum target;
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewNamedProgramLocalParameter4dEXT) {
        croak("glNamedProgramLocalParameter4dEXT not available on this machine");
    };
    glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);

SV *
glNamedProgramLocalParameter4dvEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     const GLdouble* params;
CODE:
    if(! __glewNamedProgramLocalParameter4dvEXT) {
        croak("glNamedProgramLocalParameter4dvEXT not available on this machine");
    };
    glNamedProgramLocalParameter4dvEXT(program, target, index, params);

SV *
glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
     GLuint program;
     GLenum target;
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewNamedProgramLocalParameter4fEXT) {
        croak("glNamedProgramLocalParameter4fEXT not available on this machine");
    };
    glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);

SV *
glNamedProgramLocalParameter4fvEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     const GLfloat* params;
CODE:
    if(! __glewNamedProgramLocalParameter4fvEXT) {
        croak("glNamedProgramLocalParameter4fvEXT not available on this machine");
    };
    glNamedProgramLocalParameter4fvEXT(program, target, index, params);

SV *
glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
     GLuint program;
     GLenum target;
     GLuint index;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewNamedProgramLocalParameterI4iEXT) {
        croak("glNamedProgramLocalParameterI4iEXT not available on this machine");
    };
    glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);

SV *
glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     const GLint* params;
CODE:
    if(! __glewNamedProgramLocalParameterI4ivEXT) {
        croak("glNamedProgramLocalParameterI4ivEXT not available on this machine");
    };
    glNamedProgramLocalParameterI4ivEXT(program, target, index, params);

SV *
glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
     GLuint program;
     GLenum target;
     GLuint index;
     GLuint x;
     GLuint y;
     GLuint z;
     GLuint w;
CODE:
    if(! __glewNamedProgramLocalParameterI4uiEXT) {
        croak("glNamedProgramLocalParameterI4uiEXT not available on this machine");
    };
    glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);

SV *
glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
     GLuint program;
     GLenum target;
     GLuint index;
     const GLuint* params;
CODE:
    if(! __glewNamedProgramLocalParameterI4uivEXT) {
        croak("glNamedProgramLocalParameterI4uivEXT not available on this machine");
    };
    glNamedProgramLocalParameterI4uivEXT(program, target, index, params);

SV *
glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLfloat* params;
CODE:
    if(! __glewNamedProgramLocalParameters4fvEXT) {
        croak("glNamedProgramLocalParameters4fvEXT not available on this machine");
    };
    glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);

SV *
glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLint* params;
CODE:
    if(! __glewNamedProgramLocalParametersI4ivEXT) {
        croak("glNamedProgramLocalParametersI4ivEXT not available on this machine");
    };
    glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);

SV *
glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
     GLuint program;
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLuint* params;
CODE:
    if(! __glewNamedProgramLocalParametersI4uivEXT) {
        croak("glNamedProgramLocalParametersI4uivEXT not available on this machine");
    };
    glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);

SV *
glNamedProgramStringEXT(program, target, format, len, string);
     GLuint program;
     GLenum target;
     GLenum format;
     GLsizei len;
     const void *string;
CODE:
    if(! __glewNamedProgramStringEXT) {
        croak("glNamedProgramStringEXT not available on this machine");
    };
    glNamedProgramStringEXT(program, target, format, len, string);

SV *
glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
     GLuint renderbuffer;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewNamedRenderbufferStorage) {
        croak("glNamedRenderbufferStorage not available on this machine");
    };
    glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);

SV *
glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
     GLuint renderbuffer;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewNamedRenderbufferStorageEXT) {
        croak("glNamedRenderbufferStorageEXT not available on this machine");
    };
    glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);

SV *
glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
     GLuint renderbuffer;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewNamedRenderbufferStorageMultisample) {
        croak("glNamedRenderbufferStorageMultisample not available on this machine");
    };
    glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);

SV *
glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
     GLuint renderbuffer;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewNamedRenderbufferStorageMultisampleCoverageEXT) {
        croak("glNamedRenderbufferStorageMultisampleCoverageEXT not available on this machine");
    };
    glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);

SV *
glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
     GLuint renderbuffer;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewNamedRenderbufferStorageMultisampleEXT) {
        croak("glNamedRenderbufferStorageMultisampleEXT not available on this machine");
    };
    glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);

SV *
glNamedStringARB(type, namelen, name, stringlen, string);
     GLenum type;
     GLint namelen;
     const GLchar* name;
     GLint stringlen;
     const GLchar *string;
CODE:
    if(! __glewNamedStringARB) {
        croak("glNamedStringARB not available on this machine");
    };
    glNamedStringARB(type, namelen, name, stringlen, string);

GLuint
glNewBufferRegion(region);
     GLenum region;
CODE:
    if(! __glewNewBufferRegion) {
        croak("glNewBufferRegion not available on this machine");
    };
    RETVAL = glNewBufferRegion(region);
OUTPUT:
    RETVAL

GLuint
glNewObjectBufferATI(size, pointer, usage);
     GLsizei size;
     const void *pointer;
     GLenum usage;
CODE:
    if(! __glewNewObjectBufferATI) {
        croak("glNewObjectBufferATI not available on this machine");
    };
    RETVAL = glNewObjectBufferATI(size, pointer, usage);
OUTPUT:
    RETVAL

SV *
glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewNormal3fVertex3fSUN) {
        croak("glNormal3fVertex3fSUN not available on this machine");
    };
    glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);

SV *
glNormal3fVertex3fvSUN(n, v);
     const GLfloat* n;
     const GLfloat *v;
CODE:
    if(! __glewNormal3fVertex3fvSUN) {
        croak("glNormal3fVertex3fvSUN not available on this machine");
    };
    glNormal3fVertex3fvSUN(n, v);

SV *
glNormal3hNV(nx, ny, nz);
     GLhalf nx;
     GLhalf ny;
     GLhalf nz;
CODE:
    if(! __glewNormal3hNV) {
        croak("glNormal3hNV not available on this machine");
    };
    glNormal3hNV(nx, ny, nz);

SV *
glNormal3hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewNormal3hvNV) {
        croak("glNormal3hvNV not available on this machine");
    };
    glNormal3hvNV(v);

SV *
glNormal3x(nx, ny, nz);
     GLfixed nx;
     GLfixed ny;
     GLfixed nz;
CODE:
    if(! __glewNormal3x) {
        croak("glNormal3x not available on this machine");
    };
    glNormal3x(nx, ny, nz);

SV *
glNormalFormatNV(type, stride);
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewNormalFormatNV) {
        croak("glNormalFormatNV not available on this machine");
    };
    glNormalFormatNV(type, stride);

SV *
glNormalP3ui(type, coords);
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewNormalP3ui) {
        croak("glNormalP3ui not available on this machine");
    };
    glNormalP3ui(type, coords);

SV *
glNormalP3uiv(type, coords);
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewNormalP3uiv) {
        croak("glNormalP3uiv not available on this machine");
    };
    glNormalP3uiv(type, coords);

SV *
glNormalPointerEXT(type, stride, count, pointer);
     GLenum type;
     GLsizei stride;
     GLsizei count;
     const void *pointer;
CODE:
    if(! __glewNormalPointerEXT) {
        croak("glNormalPointerEXT not available on this machine");
    };
    glNormalPointerEXT(type, stride, count, pointer);

SV *
glNormalPointerListIBM(type, stride, pointer, ptrstride);
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewNormalPointerListIBM) {
        croak("glNormalPointerListIBM not available on this machine");
    };
    glNormalPointerListIBM(type, stride, pointer, ptrstride);

SV *
glNormalPointervINTEL(type, pointer);
     GLenum type;
     const void** pointer;
CODE:
    if(! __glewNormalPointervINTEL) {
        croak("glNormalPointervINTEL not available on this machine");
    };
    glNormalPointervINTEL(type, pointer);

SV *
glNormalStream3bATI(stream, x, y, z);
     GLenum stream;
     GLbyte x;
     GLbyte y;
     GLbyte z;
CODE:
    if(! __glewNormalStream3bATI) {
        croak("glNormalStream3bATI not available on this machine");
    };
    glNormalStream3bATI(stream, x, y, z);

SV *
glNormalStream3bvATI(stream, coords);
     GLenum stream;
     const GLbyte *coords;
CODE:
    if(! __glewNormalStream3bvATI) {
        croak("glNormalStream3bvATI not available on this machine");
    };
    glNormalStream3bvATI(stream, coords);

SV *
glNormalStream3dATI(stream, x, y, z);
     GLenum stream;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewNormalStream3dATI) {
        croak("glNormalStream3dATI not available on this machine");
    };
    glNormalStream3dATI(stream, x, y, z);

SV *
glNormalStream3dvATI(stream, coords);
     GLenum stream;
     const GLdouble *coords;
CODE:
    if(! __glewNormalStream3dvATI) {
        croak("glNormalStream3dvATI not available on this machine");
    };
    glNormalStream3dvATI(stream, coords);

SV *
glNormalStream3fATI(stream, x, y, z);
     GLenum stream;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewNormalStream3fATI) {
        croak("glNormalStream3fATI not available on this machine");
    };
    glNormalStream3fATI(stream, x, y, z);

SV *
glNormalStream3fvATI(stream, coords);
     GLenum stream;
     const GLfloat *coords;
CODE:
    if(! __glewNormalStream3fvATI) {
        croak("glNormalStream3fvATI not available on this machine");
    };
    glNormalStream3fvATI(stream, coords);

SV *
glNormalStream3iATI(stream, x, y, z);
     GLenum stream;
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewNormalStream3iATI) {
        croak("glNormalStream3iATI not available on this machine");
    };
    glNormalStream3iATI(stream, x, y, z);

SV *
glNormalStream3ivATI(stream, coords);
     GLenum stream;
     const GLint *coords;
CODE:
    if(! __glewNormalStream3ivATI) {
        croak("glNormalStream3ivATI not available on this machine");
    };
    glNormalStream3ivATI(stream, coords);

SV *
glNormalStream3sATI(stream, x, y, z);
     GLenum stream;
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewNormalStream3sATI) {
        croak("glNormalStream3sATI not available on this machine");
    };
    glNormalStream3sATI(stream, x, y, z);

SV *
glNormalStream3svATI(stream, coords);
     GLenum stream;
     const GLshort *coords;
CODE:
    if(! __glewNormalStream3svATI) {
        croak("glNormalStream3svATI not available on this machine");
    };
    glNormalStream3svATI(stream, coords);

SV *
glObjectLabel(identifier, name, length, label);
     GLenum identifier;
     GLuint name;
     GLsizei length;
     const GLchar* label;
CODE:
    if(! __glewObjectLabel) {
        croak("glObjectLabel not available on this machine");
    };
    glObjectLabel(identifier, name, length, label);

SV *
glObjectPtrLabel(ptr, length, label);
     const void *ptr;
     GLsizei length;
     const GLchar* label;
CODE:
    if(! __glewObjectPtrLabel) {
        croak("glObjectPtrLabel not available on this machine");
    };
    glObjectPtrLabel(ptr, length, label);

GLenum
glObjectPurgeableAPPLE(objectType, name, option);
     GLenum objectType;
     GLuint name;
     GLenum option;
CODE:
    if(! __glewObjectPurgeableAPPLE) {
        croak("glObjectPurgeableAPPLE not available on this machine");
    };
    RETVAL = glObjectPurgeableAPPLE(objectType, name, option);
OUTPUT:
    RETVAL

GLenum
glObjectUnpurgeableAPPLE(objectType, name, option);
     GLenum objectType;
     GLuint name;
     GLenum option;
CODE:
    if(! __glewObjectUnpurgeableAPPLE) {
        croak("glObjectUnpurgeableAPPLE not available on this machine");
    };
    RETVAL = glObjectUnpurgeableAPPLE(objectType, name, option);
OUTPUT:
    RETVAL

SV *
glOrthof(left, right, bottom, top, zNear, zFar);
     GLfloat left;
     GLfloat right;
     GLfloat bottom;
     GLfloat top;
     GLfloat zNear;
     GLfloat zFar;
CODE:
    if(! __glewOrthof) {
        croak("glOrthof not available on this machine");
    };
    glOrthof(left, right, bottom, top, zNear, zFar);

SV *
glOrthofOES(l, r, b, t, n, f);
     GLfloat l;
     GLfloat r;
     GLfloat b;
     GLfloat t;
     GLfloat n;
     GLfloat f;
CODE:
    if(! __glewOrthofOES) {
        croak("glOrthofOES not available on this machine");
    };
    glOrthofOES(l, r, b, t, n, f);

SV *
glOrthox(left, right, bottom, top, zNear, zFar);
     GLfixed left;
     GLfixed right;
     GLfixed bottom;
     GLfixed top;
     GLfixed zNear;
     GLfixed zFar;
CODE:
    if(! __glewOrthox) {
        croak("glOrthox not available on this machine");
    };
    glOrthox(left, right, bottom, top, zNear, zFar);

SV *
glPassTexCoordATI(dst, coord, swizzle);
     GLuint dst;
     GLuint coord;
     GLenum swizzle;
CODE:
    if(! __glewPassTexCoordATI) {
        croak("glPassTexCoordATI not available on this machine");
    };
    glPassTexCoordATI(dst, coord, swizzle);

SV *
glPatchParameterfv(pname, values);
     GLenum pname;
     const GLfloat* values;
CODE:
    if(! __glewPatchParameterfv) {
        croak("glPatchParameterfv not available on this machine");
    };
    glPatchParameterfv(pname, values);

SV *
glPatchParameteri(pname, value);
     GLenum pname;
     GLint value;
CODE:
    if(! __glewPatchParameteri) {
        croak("glPatchParameteri not available on this machine");
    };
    glPatchParameteri(pname, value);

SV *
glPathColorGenNV(color, genMode, colorFormat, coeffs);
     GLenum color;
     GLenum genMode;
     GLenum colorFormat;
     const GLfloat* coeffs;
CODE:
    if(! __glewPathColorGenNV) {
        croak("glPathColorGenNV not available on this machine");
    };
    glPathColorGenNV(color, genMode, colorFormat, coeffs);

SV *
glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
     GLuint path;
     GLsizei numCommands;
     const GLubyte* commands;
     GLsizei numCoords;
     GLenum coordType;
     const void*coords;
CODE:
    if(! __glewPathCommandsNV) {
        croak("glPathCommandsNV not available on this machine");
    };
    glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);

SV *
glPathCoordsNV(path, numCoords, coordType, coords);
     GLuint path;
     GLsizei numCoords;
     GLenum coordType;
     const void *coords;
CODE:
    if(! __glewPathCoordsNV) {
        croak("glPathCoordsNV not available on this machine");
    };
    glPathCoordsNV(path, numCoords, coordType, coords);

SV *
glPathCoverDepthFuncNV(zfunc);
     GLenum zfunc;
CODE:
    if(! __glewPathCoverDepthFuncNV) {
        croak("glPathCoverDepthFuncNV not available on this machine");
    };
    glPathCoverDepthFuncNV(zfunc);

SV *
glPathDashArrayNV(path, dashCount, dashArray);
     GLuint path;
     GLsizei dashCount;
     const GLfloat* dashArray;
CODE:
    if(! __glewPathDashArrayNV) {
        croak("glPathDashArrayNV not available on this machine");
    };
    glPathDashArrayNV(path, dashCount, dashArray);

SV *
glPathFogGenNV(genMode);
     GLenum genMode;
CODE:
    if(! __glewPathFogGenNV) {
        croak("glPathFogGenNV not available on this machine");
    };
    glPathFogGenNV(genMode);

GLenum
glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
     GLuint firstPathName;
     GLenum fontTarget;
     const void *fontName;
     GLbitfield fontStyle;
     GLuint firstGlyphIndex;
     GLsizei numGlyphs;
     GLuint pathParameterTemplate;
     GLfloat emScale;
CODE:
    if(! __glewPathGlyphIndexArrayNV) {
        croak("glPathGlyphIndexArrayNV not available on this machine");
    };
    RETVAL = glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
OUTPUT:
    RETVAL

GLenum
glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
     GLenum fontTarget;
     const void *fontName;
     GLbitfield fontStyle;
     GLuint pathParameterTemplate;
     GLfloat emScale;
     GLuint * baseAndCount;
CODE:
    if(! __glewPathGlyphIndexRangeNV) {
        croak("glPathGlyphIndexRangeNV not available on this machine");
    };
    RETVAL = glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
OUTPUT:
    RETVAL

SV *
glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
     GLuint firstPathName;
     GLenum fontTarget;
     const void *fontName;
     GLbitfield fontStyle;
     GLuint firstGlyph;
     GLsizei numGlyphs;
     GLenum handleMissingGlyphs;
     GLuint pathParameterTemplate;
     GLfloat emScale;
CODE:
    if(! __glewPathGlyphRangeNV) {
        croak("glPathGlyphRangeNV not available on this machine");
    };
    glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);

SV *
glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
     GLuint firstPathName;
     GLenum fontTarget;
     const void *fontName;
     GLbitfield fontStyle;
     GLsizei numGlyphs;
     GLenum type;
     const void*charcodes;
     GLenum handleMissingGlyphs;
     GLuint pathParameterTemplate;
     GLfloat emScale;
CODE:
    if(! __glewPathGlyphsNV) {
        croak("glPathGlyphsNV not available on this machine");
    };
    glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);

GLenum
glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
     GLuint firstPathName;
     GLenum fontTarget;
     GLsizeiptr fontSize;
     const void *fontData;
     GLsizei faceIndex;
     GLuint firstGlyphIndex;
     GLsizei numGlyphs;
     GLuint pathParameterTemplate;
     GLfloat emScale;
CODE:
    if(! __glewPathMemoryGlyphIndexArrayNV) {
        croak("glPathMemoryGlyphIndexArrayNV not available on this machine");
    };
    RETVAL = glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
OUTPUT:
    RETVAL

SV *
glPathParameterfNV(path, pname, value);
     GLuint path;
     GLenum pname;
     GLfloat value;
CODE:
    if(! __glewPathParameterfNV) {
        croak("glPathParameterfNV not available on this machine");
    };
    glPathParameterfNV(path, pname, value);

SV *
glPathParameterfvNV(path, pname, value);
     GLuint path;
     GLenum pname;
     const GLfloat* value;
CODE:
    if(! __glewPathParameterfvNV) {
        croak("glPathParameterfvNV not available on this machine");
    };
    glPathParameterfvNV(path, pname, value);

SV *
glPathParameteriNV(path, pname, value);
     GLuint path;
     GLenum pname;
     GLint value;
CODE:
    if(! __glewPathParameteriNV) {
        croak("glPathParameteriNV not available on this machine");
    };
    glPathParameteriNV(path, pname, value);

SV *
glPathParameterivNV(path, pname, value);
     GLuint path;
     GLenum pname;
     const GLint* value;
CODE:
    if(! __glewPathParameterivNV) {
        croak("glPathParameterivNV not available on this machine");
    };
    glPathParameterivNV(path, pname, value);

SV *
glPathStencilDepthOffsetNV(factor, units);
     GLfloat factor;
     GLfloat units;
CODE:
    if(! __glewPathStencilDepthOffsetNV) {
        croak("glPathStencilDepthOffsetNV not available on this machine");
    };
    glPathStencilDepthOffsetNV(factor, units);

SV *
glPathStencilFuncNV(func, ref, mask);
     GLenum func;
     GLint ref;
     GLuint mask;
CODE:
    if(! __glewPathStencilFuncNV) {
        croak("glPathStencilFuncNV not available on this machine");
    };
    glPathStencilFuncNV(func, ref, mask);

SV *
glPathStringNV(path, format, length, pathString);
     GLuint path;
     GLenum format;
     GLsizei length;
     const void *pathString;
CODE:
    if(! __glewPathStringNV) {
        croak("glPathStringNV not available on this machine");
    };
    glPathStringNV(path, format, length, pathString);

SV *
glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
     GLuint path;
     GLsizei commandStart;
     GLsizei commandsToDelete;
     GLsizei numCommands;
     const GLubyte* commands;
     GLsizei numCoords;
     GLenum coordType;
     const void*coords;
CODE:
    if(! __glewPathSubCommandsNV) {
        croak("glPathSubCommandsNV not available on this machine");
    };
    glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);

SV *
glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
     GLuint path;
     GLsizei coordStart;
     GLsizei numCoords;
     GLenum coordType;
     const void *coords;
CODE:
    if(! __glewPathSubCoordsNV) {
        croak("glPathSubCoordsNV not available on this machine");
    };
    glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);

SV *
glPathTexGenNV(texCoordSet, genMode, components, coeffs);
     GLenum texCoordSet;
     GLenum genMode;
     GLint components;
     const GLfloat* coeffs;
CODE:
    if(! __glewPathTexGenNV) {
        croak("glPathTexGenNV not available on this machine");
    };
    glPathTexGenNV(texCoordSet, genMode, components, coeffs);

SV *
glPauseTransformFeedback();
CODE:
    if(! __glewPauseTransformFeedback) {
        croak("glPauseTransformFeedback not available on this machine");
    };
    glPauseTransformFeedback();

SV *
glPauseTransformFeedbackNV();
CODE:
    if(! __glewPauseTransformFeedbackNV) {
        croak("glPauseTransformFeedbackNV not available on this machine");
    };
    glPauseTransformFeedbackNV();

SV *
glPixelDataRangeNV(target, length, pointer);
     GLenum target;
     GLsizei length;
     void *pointer;
CODE:
    if(! __glewPixelDataRangeNV) {
        croak("glPixelDataRangeNV not available on this machine");
    };
    glPixelDataRangeNV(target, length, pointer);

SV *
glPixelTexGenSGIX(mode);
     GLenum mode;
CODE:
    if(! __glewPixelTexGenSGIX) {
        croak("glPixelTexGenSGIX not available on this machine");
    };
    glPixelTexGenSGIX(mode);

SV *
glPixelTransformParameterfEXT(target, pname, param);
     GLenum target;
     GLenum pname;
     const GLfloat param;
CODE:
    if(! __glewPixelTransformParameterfEXT) {
        croak("glPixelTransformParameterfEXT not available on this machine");
    };
    glPixelTransformParameterfEXT(target, pname, param);

SV *
glPixelTransformParameterfvEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewPixelTransformParameterfvEXT) {
        croak("glPixelTransformParameterfvEXT not available on this machine");
    };
    glPixelTransformParameterfvEXT(target, pname, params);

SV *
glPixelTransformParameteriEXT(target, pname, param);
     GLenum target;
     GLenum pname;
     const GLint param;
CODE:
    if(! __glewPixelTransformParameteriEXT) {
        croak("glPixelTransformParameteriEXT not available on this machine");
    };
    glPixelTransformParameteriEXT(target, pname, param);

SV *
glPixelTransformParameterivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewPixelTransformParameterivEXT) {
        croak("glPixelTransformParameterivEXT not available on this machine");
    };
    glPixelTransformParameterivEXT(target, pname, params);

SV *
glPNTrianglesfATI(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewPNTrianglesfATI) {
        croak("glPNTrianglesfATI not available on this machine");
    };
    glPNTrianglesfATI(pname, param);

SV *
glPNTrianglesiATI(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewPNTrianglesiATI) {
        croak("glPNTrianglesiATI not available on this machine");
    };
    glPNTrianglesiATI(pname, param);

GLboolean
glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
     GLuint path;
     GLsizei startSegment;
     GLsizei numSegments;
     GLfloat distance;
     GLfloat* x;
     GLfloat *y;
     GLfloat *tangentX;
     GLfloat *tangentY;
CODE:
    if(! __glewPointAlongPathNV) {
        croak("glPointAlongPathNV not available on this machine");
    };
    RETVAL = glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
OUTPUT:
    RETVAL

SV *
glPointParameterf(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewPointParameterf) {
        croak("glPointParameterf not available on this machine");
    };
    glPointParameterf(pname, param);

SV *
glPointParameterfARB(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewPointParameterfARB) {
        croak("glPointParameterfARB not available on this machine");
    };
    glPointParameterfARB(pname, param);

SV *
glPointParameterfEXT(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewPointParameterfEXT) {
        croak("glPointParameterfEXT not available on this machine");
    };
    glPointParameterfEXT(pname, param);

SV *
glPointParameterfv(pname, params);
     GLenum pname;
     const GLfloat *params;
CODE:
    if(! __glewPointParameterfv) {
        croak("glPointParameterfv not available on this machine");
    };
    glPointParameterfv(pname, params);

SV *
glPointParameterfvARB(pname, params);
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewPointParameterfvARB) {
        croak("glPointParameterfvARB not available on this machine");
    };
    glPointParameterfvARB(pname, params);

SV *
glPointParameterfvEXT(pname, params);
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewPointParameterfvEXT) {
        croak("glPointParameterfvEXT not available on this machine");
    };
    glPointParameterfvEXT(pname, params);

SV *
glPointParameteri(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewPointParameteri) {
        croak("glPointParameteri not available on this machine");
    };
    glPointParameteri(pname, param);

SV *
glPointParameteriNV(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewPointParameteriNV) {
        croak("glPointParameteriNV not available on this machine");
    };
    glPointParameteriNV(pname, param);

SV *
glPointParameteriv(pname, params);
     GLenum pname;
     const GLint *params;
CODE:
    if(! __glewPointParameteriv) {
        croak("glPointParameteriv not available on this machine");
    };
    glPointParameteriv(pname, params);

SV *
glPointParameterivNV(pname, params);
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewPointParameterivNV) {
        croak("glPointParameterivNV not available on this machine");
    };
    glPointParameterivNV(pname, params);

SV *
glPointParameterx(pname, param);
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewPointParameterx) {
        croak("glPointParameterx not available on this machine");
    };
    glPointParameterx(pname, param);

SV *
glPointParameterxv(pname, params);
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewPointParameterxv) {
        croak("glPointParameterxv not available on this machine");
    };
    glPointParameterxv(pname, params);

SV *
glPointSizePointerOES(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewPointSizePointerOES) {
        croak("glPointSizePointerOES not available on this machine");
    };
    glPointSizePointerOES(type, stride, pointer);

SV *
glPointSizex(size);
     GLfixed size;
CODE:
    if(! __glewPointSizex) {
        croak("glPointSizex not available on this machine");
    };
    glPointSizex(size);

GLint
glPollAsyncSGIX(markerp);
     GLuint* markerp;
CODE:
    if(! __glewPollAsyncSGIX) {
        croak("glPollAsyncSGIX not available on this machine");
    };
    RETVAL = glPollAsyncSGIX(markerp);
OUTPUT:
    RETVAL

SV *
glPolygonOffsetClampEXT(factor, units, clamp);
     GLfloat factor;
     GLfloat units;
     GLfloat clamp;
CODE:
    if(! __glewPolygonOffsetClampEXT) {
        croak("glPolygonOffsetClampEXT not available on this machine");
    };
    glPolygonOffsetClampEXT(factor, units, clamp);

SV *
glPolygonOffsetEXT(factor, bias);
     GLfloat factor;
     GLfloat bias;
CODE:
    if(! __glewPolygonOffsetEXT) {
        croak("glPolygonOffsetEXT not available on this machine");
    };
    glPolygonOffsetEXT(factor, bias);

SV *
glPolygonOffsetx(factor, units);
     GLfixed factor;
     GLfixed units;
CODE:
    if(! __glewPolygonOffsetx) {
        croak("glPolygonOffsetx not available on this machine");
    };
    glPolygonOffsetx(factor, units);

SV *
glPopDebugGroup();
CODE:
    if(! __glewPopDebugGroup) {
        croak("glPopDebugGroup not available on this machine");
    };
    glPopDebugGroup();

SV *
glPopGroupMarkerEXT();
CODE:
    if(! __glewPopGroupMarkerEXT) {
        croak("glPopGroupMarkerEXT not available on this machine");
    };
    glPopGroupMarkerEXT();

SV *
glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
     GLuint video_slot;
     GLuint64EXT minPresentTime;
     GLuint beginPresentTimeId;
     GLuint presentDurationId;
     GLenum type;
     GLenum target0;
     GLuint fill0;
     GLenum target1;
     GLuint fill1;
     GLenum target2;
     GLuint fill2;
     GLenum target3;
     GLuint fill3;
CODE:
    if(! __glewPresentFrameDualFillNV) {
        croak("glPresentFrameDualFillNV not available on this machine");
    };
    glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);

SV *
glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
     GLuint video_slot;
     GLuint64EXT minPresentTime;
     GLuint beginPresentTimeId;
     GLuint presentDurationId;
     GLenum type;
     GLenum target0;
     GLuint fill0;
     GLuint key0;
     GLenum target1;
     GLuint fill1;
     GLuint key1;
CODE:
    if(! __glewPresentFrameKeyedNV) {
        croak("glPresentFrameKeyedNV not available on this machine");
    };
    glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);

SV *
glPrimitiveBoundingBoxARB(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
     GLfloat minX;
     GLfloat minY;
     GLfloat minZ;
     GLfloat minW;
     GLfloat maxX;
     GLfloat maxY;
     GLfloat maxZ;
     GLfloat maxW;
CODE:
    if(! __glewPrimitiveBoundingBoxARB) {
        croak("glPrimitiveBoundingBoxARB not available on this machine");
    };
    glPrimitiveBoundingBoxARB(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);

SV *
glPrimitiveRestartIndex(buffer);
     GLuint buffer;
CODE:
    if(! __glewPrimitiveRestartIndex) {
        croak("glPrimitiveRestartIndex not available on this machine");
    };
    glPrimitiveRestartIndex(buffer);

SV *
glPrimitiveRestartIndexNV(index);
     GLuint index;
CODE:
    if(! __glewPrimitiveRestartIndexNV) {
        croak("glPrimitiveRestartIndexNV not available on this machine");
    };
    glPrimitiveRestartIndexNV(index);

SV *
glPrimitiveRestartNV();
CODE:
    if(! __glewPrimitiveRestartNV) {
        croak("glPrimitiveRestartNV not available on this machine");
    };
    glPrimitiveRestartNV();

SV *
glPrioritizeTexturesEXT(n, textures, priorities);
     GLsizei n;
     const GLuint* textures;
     const GLclampf* priorities;
CODE:
    if(! __glewPrioritizeTexturesEXT) {
        croak("glPrioritizeTexturesEXT not available on this machine");
    };
    glPrioritizeTexturesEXT(n, textures, priorities);

SV *
glProgramBinary(program, binaryFormat, binary, length);
     GLuint program;
     GLenum binaryFormat;
     const void *binary;
     GLsizei length;
CODE:
    if(! __glewProgramBinary) {
        croak("glProgramBinary not available on this machine");
    };
    glProgramBinary(program, binaryFormat, binary, length);

SV *
glProgramBufferParametersfvNV(target, buffer, index, count, params);
     GLenum target;
     GLuint buffer;
     GLuint index;
     GLsizei count;
     const GLfloat *params;
CODE:
    if(! __glewProgramBufferParametersfvNV) {
        croak("glProgramBufferParametersfvNV not available on this machine");
    };
    glProgramBufferParametersfvNV(target, buffer, index, count, params);

SV *
glProgramBufferParametersIivNV(target, buffer, index, count, params);
     GLenum target;
     GLuint buffer;
     GLuint index;
     GLsizei count;
     const GLint *params;
CODE:
    if(! __glewProgramBufferParametersIivNV) {
        croak("glProgramBufferParametersIivNV not available on this machine");
    };
    glProgramBufferParametersIivNV(target, buffer, index, count, params);

SV *
glProgramBufferParametersIuivNV(target, buffer, index, count, params);
     GLenum target;
     GLuint buffer;
     GLuint index;
     GLsizei count;
     const GLuint *params;
CODE:
    if(! __glewProgramBufferParametersIuivNV) {
        croak("glProgramBufferParametersIuivNV not available on this machine");
    };
    glProgramBufferParametersIuivNV(target, buffer, index, count, params);

SV *
glProgramEnvParameter4dARB(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewProgramEnvParameter4dARB) {
        croak("glProgramEnvParameter4dARB not available on this machine");
    };
    glProgramEnvParameter4dARB(target, index, x, y, z, w);

SV *
glProgramEnvParameter4dvARB(target, index, params);
     GLenum target;
     GLuint index;
     const GLdouble* params;
CODE:
    if(! __glewProgramEnvParameter4dvARB) {
        croak("glProgramEnvParameter4dvARB not available on this machine");
    };
    glProgramEnvParameter4dvARB(target, index, params);

SV *
glProgramEnvParameter4fARB(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewProgramEnvParameter4fARB) {
        croak("glProgramEnvParameter4fARB not available on this machine");
    };
    glProgramEnvParameter4fARB(target, index, x, y, z, w);

SV *
glProgramEnvParameter4fvARB(target, index, params);
     GLenum target;
     GLuint index;
     const GLfloat* params;
CODE:
    if(! __glewProgramEnvParameter4fvARB) {
        croak("glProgramEnvParameter4fvARB not available on this machine");
    };
    glProgramEnvParameter4fvARB(target, index, params);

SV *
glProgramEnvParameterI4iNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewProgramEnvParameterI4iNV) {
        croak("glProgramEnvParameterI4iNV not available on this machine");
    };
    glProgramEnvParameterI4iNV(target, index, x, y, z, w);

SV *
glProgramEnvParameterI4ivNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLint *params;
CODE:
    if(! __glewProgramEnvParameterI4ivNV) {
        croak("glProgramEnvParameterI4ivNV not available on this machine");
    };
    glProgramEnvParameterI4ivNV(target, index, params);

SV *
glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLuint x;
     GLuint y;
     GLuint z;
     GLuint w;
CODE:
    if(! __glewProgramEnvParameterI4uiNV) {
        croak("glProgramEnvParameterI4uiNV not available on this machine");
    };
    glProgramEnvParameterI4uiNV(target, index, x, y, z, w);

SV *
glProgramEnvParameterI4uivNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLuint *params;
CODE:
    if(! __glewProgramEnvParameterI4uivNV) {
        croak("glProgramEnvParameterI4uivNV not available on this machine");
    };
    glProgramEnvParameterI4uivNV(target, index, params);

SV *
glProgramEnvParameters4fvEXT(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLfloat* params;
CODE:
    if(! __glewProgramEnvParameters4fvEXT) {
        croak("glProgramEnvParameters4fvEXT not available on this machine");
    };
    glProgramEnvParameters4fvEXT(target, index, count, params);

SV *
glProgramEnvParametersI4ivNV(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLint *params;
CODE:
    if(! __glewProgramEnvParametersI4ivNV) {
        croak("glProgramEnvParametersI4ivNV not available on this machine");
    };
    glProgramEnvParametersI4ivNV(target, index, count, params);

SV *
glProgramEnvParametersI4uivNV(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLuint *params;
CODE:
    if(! __glewProgramEnvParametersI4uivNV) {
        croak("glProgramEnvParametersI4uivNV not available on this machine");
    };
    glProgramEnvParametersI4uivNV(target, index, count, params);

SV *
glProgramLocalParameter4dARB(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewProgramLocalParameter4dARB) {
        croak("glProgramLocalParameter4dARB not available on this machine");
    };
    glProgramLocalParameter4dARB(target, index, x, y, z, w);

SV *
glProgramLocalParameter4dvARB(target, index, params);
     GLenum target;
     GLuint index;
     const GLdouble* params;
CODE:
    if(! __glewProgramLocalParameter4dvARB) {
        croak("glProgramLocalParameter4dvARB not available on this machine");
    };
    glProgramLocalParameter4dvARB(target, index, params);

SV *
glProgramLocalParameter4fARB(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewProgramLocalParameter4fARB) {
        croak("glProgramLocalParameter4fARB not available on this machine");
    };
    glProgramLocalParameter4fARB(target, index, x, y, z, w);

SV *
glProgramLocalParameter4fvARB(target, index, params);
     GLenum target;
     GLuint index;
     const GLfloat* params;
CODE:
    if(! __glewProgramLocalParameter4fvARB) {
        croak("glProgramLocalParameter4fvARB not available on this machine");
    };
    glProgramLocalParameter4fvARB(target, index, params);

SV *
glProgramLocalParameterI4iNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewProgramLocalParameterI4iNV) {
        croak("glProgramLocalParameterI4iNV not available on this machine");
    };
    glProgramLocalParameterI4iNV(target, index, x, y, z, w);

SV *
glProgramLocalParameterI4ivNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLint *params;
CODE:
    if(! __glewProgramLocalParameterI4ivNV) {
        croak("glProgramLocalParameterI4ivNV not available on this machine");
    };
    glProgramLocalParameterI4ivNV(target, index, params);

SV *
glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLuint x;
     GLuint y;
     GLuint z;
     GLuint w;
CODE:
    if(! __glewProgramLocalParameterI4uiNV) {
        croak("glProgramLocalParameterI4uiNV not available on this machine");
    };
    glProgramLocalParameterI4uiNV(target, index, x, y, z, w);

SV *
glProgramLocalParameterI4uivNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLuint *params;
CODE:
    if(! __glewProgramLocalParameterI4uivNV) {
        croak("glProgramLocalParameterI4uivNV not available on this machine");
    };
    glProgramLocalParameterI4uivNV(target, index, params);

SV *
glProgramLocalParameters4fvEXT(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLfloat* params;
CODE:
    if(! __glewProgramLocalParameters4fvEXT) {
        croak("glProgramLocalParameters4fvEXT not available on this machine");
    };
    glProgramLocalParameters4fvEXT(target, index, count, params);

SV *
glProgramLocalParametersI4ivNV(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLint *params;
CODE:
    if(! __glewProgramLocalParametersI4ivNV) {
        croak("glProgramLocalParametersI4ivNV not available on this machine");
    };
    glProgramLocalParametersI4ivNV(target, index, count, params);

SV *
glProgramLocalParametersI4uivNV(target, index, count, params);
     GLenum target;
     GLuint index;
     GLsizei count;
     const GLuint *params;
CODE:
    if(! __glewProgramLocalParametersI4uivNV) {
        croak("glProgramLocalParametersI4uivNV not available on this machine");
    };
    glProgramLocalParametersI4uivNV(target, index, count, params);

SV *
glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewProgramNamedParameter4dNV) {
        croak("glProgramNamedParameter4dNV not available on this machine");
    };
    glProgramNamedParameter4dNV(id, len, name, x, y, z, w);

SV *
glProgramNamedParameter4dvNV(id, len, name, v);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     const GLdouble * v;
CODE:
    if(! __glewProgramNamedParameter4dvNV) {
        croak("glProgramNamedParameter4dvNV not available on this machine");
    };
    glProgramNamedParameter4dvNV(id, len, name, v);

SV *
glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewProgramNamedParameter4fNV) {
        croak("glProgramNamedParameter4fNV not available on this machine");
    };
    glProgramNamedParameter4fNV(id, len, name, x, y, z, w);

SV *
glProgramNamedParameter4fvNV(id, len, name, v);
     GLuint id;
     GLsizei len;
     const GLubyte* name;
     const GLfloat * v;
CODE:
    if(! __glewProgramNamedParameter4fvNV) {
        croak("glProgramNamedParameter4fvNV not available on this machine");
    };
    glProgramNamedParameter4fvNV(id, len, name, v);

SV *
glProgramParameter4dNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewProgramParameter4dNV) {
        croak("glProgramParameter4dNV not available on this machine");
    };
    glProgramParameter4dNV(target, index, x, y, z, w);

SV *
glProgramParameter4dvNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLdouble* params;
CODE:
    if(! __glewProgramParameter4dvNV) {
        croak("glProgramParameter4dvNV not available on this machine");
    };
    glProgramParameter4dvNV(target, index, params);

SV *
glProgramParameter4fNV(target, index, x, y, z, w);
     GLenum target;
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewProgramParameter4fNV) {
        croak("glProgramParameter4fNV not available on this machine");
    };
    glProgramParameter4fNV(target, index, x, y, z, w);

SV *
glProgramParameter4fvNV(target, index, params);
     GLenum target;
     GLuint index;
     const GLfloat* params;
CODE:
    if(! __glewProgramParameter4fvNV) {
        croak("glProgramParameter4fvNV not available on this machine");
    };
    glProgramParameter4fvNV(target, index, params);

SV *
glProgramParameteri(program, pname, value);
     GLuint program;
     GLenum pname;
     GLint value;
CODE:
    if(! __glewProgramParameteri) {
        croak("glProgramParameteri not available on this machine");
    };
    glProgramParameteri(program, pname, value);

SV *
glProgramParameteriARB(program, pname, value);
     GLuint program;
     GLenum pname;
     GLint value;
CODE:
    if(! __glewProgramParameteriARB) {
        croak("glProgramParameteriARB not available on this machine");
    };
    glProgramParameteriARB(program, pname, value);

SV *
glProgramParameteriEXT(program, pname, value);
     GLuint program;
     GLenum pname;
     GLint value;
CODE:
    if(! __glewProgramParameteriEXT) {
        croak("glProgramParameteriEXT not available on this machine");
    };
    glProgramParameteriEXT(program, pname, value);

SV *
glProgramParameters4dvNV(target, index, num, params);
     GLenum target;
     GLuint index;
     GLsizei num;
     const GLdouble* params;
CODE:
    if(! __glewProgramParameters4dvNV) {
        croak("glProgramParameters4dvNV not available on this machine");
    };
    glProgramParameters4dvNV(target, index, num, params);

SV *
glProgramParameters4fvNV(target, index, num, params);
     GLenum target;
     GLuint index;
     GLsizei num;
     const GLfloat* params;
CODE:
    if(! __glewProgramParameters4fvNV) {
        croak("glProgramParameters4fvNV not available on this machine");
    };
    glProgramParameters4fvNV(target, index, num, params);

SV *
glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
     GLuint program;
     GLint location;
     GLenum genMode;
     GLint components;
     const GLfloat* coeffs;
CODE:
    if(! __glewProgramPathFragmentInputGenNV) {
        croak("glProgramPathFragmentInputGenNV not available on this machine");
    };
    glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);

SV *
glProgramStringARB(target, format, len, string);
     GLenum target;
     GLenum format;
     GLsizei len;
     const void *string;
CODE:
    if(! __glewProgramStringARB) {
        croak("glProgramStringARB not available on this machine");
    };
    glProgramStringARB(target, format, len, string);

SV *
glProgramUniform1d(program, location, x);
     GLuint program;
     GLint location;
     GLdouble x;
CODE:
    if(! __glewProgramUniform1d) {
        croak("glProgramUniform1d not available on this machine");
    };
    glProgramUniform1d(program, location, x);

SV *
glProgramUniform1dv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniform1dv) {
        croak("glProgramUniform1dv not available on this machine");
    };
    glProgramUniform1dv(program, location, count, value);

SV *
glProgramUniform1f(program, location, x);
     GLuint program;
     GLint location;
     GLfloat x;
CODE:
    if(! __glewProgramUniform1f) {
        croak("glProgramUniform1f not available on this machine");
    };
    glProgramUniform1f(program, location, x);

SV *
glProgramUniform1fEXT(program, location, v0);
     GLuint program;
     GLint location;
     GLfloat v0;
CODE:
    if(! __glewProgramUniform1fEXT) {
        croak("glProgramUniform1fEXT not available on this machine");
    };
    glProgramUniform1fEXT(program, location, v0);

SV *
glProgramUniform1fv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform1fv) {
        croak("glProgramUniform1fv not available on this machine");
    };
    glProgramUniform1fv(program, location, count, value);

SV *
glProgramUniform1fvEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform1fvEXT) {
        croak("glProgramUniform1fvEXT not available on this machine");
    };
    glProgramUniform1fvEXT(program, location, count, value);

SV *
glProgramUniform1i(program, location, x);
     GLuint program;
     GLint location;
     GLint x;
CODE:
    if(! __glewProgramUniform1i) {
        croak("glProgramUniform1i not available on this machine");
    };
    glProgramUniform1i(program, location, x);

SV *
glProgramUniform1i64ARB(program, location, x);
     GLuint program;
     GLint location;
     GLint64 x;
CODE:
    if(! __glewProgramUniform1i64ARB) {
        croak("glProgramUniform1i64ARB not available on this machine");
    };
    glProgramUniform1i64ARB(program, location, x);

SV *
glProgramUniform1i64NV(program, location, x);
     GLuint program;
     GLint location;
     GLint64EXT x;
CODE:
    if(! __glewProgramUniform1i64NV) {
        croak("glProgramUniform1i64NV not available on this machine");
    };
    glProgramUniform1i64NV(program, location, x);

SV *
glProgramUniform1i64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewProgramUniform1i64vARB) {
        croak("glProgramUniform1i64vARB not available on this machine");
    };
    glProgramUniform1i64vARB(program, location, count, value);

SV *
glProgramUniform1i64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewProgramUniform1i64vNV) {
        croak("glProgramUniform1i64vNV not available on this machine");
    };
    glProgramUniform1i64vNV(program, location, count, value);

SV *
glProgramUniform1iEXT(program, location, v0);
     GLuint program;
     GLint location;
     GLint v0;
CODE:
    if(! __glewProgramUniform1iEXT) {
        croak("glProgramUniform1iEXT not available on this machine");
    };
    glProgramUniform1iEXT(program, location, v0);

SV *
glProgramUniform1iv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform1iv) {
        croak("glProgramUniform1iv not available on this machine");
    };
    glProgramUniform1iv(program, location, count, value);

SV *
glProgramUniform1ivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform1ivEXT) {
        croak("glProgramUniform1ivEXT not available on this machine");
    };
    glProgramUniform1ivEXT(program, location, count, value);

SV *
glProgramUniform1ui(program, location, x);
     GLuint program;
     GLint location;
     GLuint x;
CODE:
    if(! __glewProgramUniform1ui) {
        croak("glProgramUniform1ui not available on this machine");
    };
    glProgramUniform1ui(program, location, x);

SV *
glProgramUniform1ui64ARB(program, location, x);
     GLuint program;
     GLint location;
     GLuint64 x;
CODE:
    if(! __glewProgramUniform1ui64ARB) {
        croak("glProgramUniform1ui64ARB not available on this machine");
    };
    glProgramUniform1ui64ARB(program, location, x);

SV *
glProgramUniform1ui64NV(program, location, x);
     GLuint program;
     GLint location;
     GLuint64EXT x;
CODE:
    if(! __glewProgramUniform1ui64NV) {
        croak("glProgramUniform1ui64NV not available on this machine");
    };
    glProgramUniform1ui64NV(program, location, x);

SV *
glProgramUniform1ui64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewProgramUniform1ui64vARB) {
        croak("glProgramUniform1ui64vARB not available on this machine");
    };
    glProgramUniform1ui64vARB(program, location, count, value);

SV *
glProgramUniform1ui64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewProgramUniform1ui64vNV) {
        croak("glProgramUniform1ui64vNV not available on this machine");
    };
    glProgramUniform1ui64vNV(program, location, count, value);

SV *
glProgramUniform1uiEXT(program, location, v0);
     GLuint program;
     GLint location;
     GLuint v0;
CODE:
    if(! __glewProgramUniform1uiEXT) {
        croak("glProgramUniform1uiEXT not available on this machine");
    };
    glProgramUniform1uiEXT(program, location, v0);

SV *
glProgramUniform1uiv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform1uiv) {
        croak("glProgramUniform1uiv not available on this machine");
    };
    glProgramUniform1uiv(program, location, count, value);

SV *
glProgramUniform1uivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform1uivEXT) {
        croak("glProgramUniform1uivEXT not available on this machine");
    };
    glProgramUniform1uivEXT(program, location, count, value);

SV *
glProgramUniform2d(program, location, x, y);
     GLuint program;
     GLint location;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewProgramUniform2d) {
        croak("glProgramUniform2d not available on this machine");
    };
    glProgramUniform2d(program, location, x, y);

SV *
glProgramUniform2dv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniform2dv) {
        croak("glProgramUniform2dv not available on this machine");
    };
    glProgramUniform2dv(program, location, count, value);

SV *
glProgramUniform2f(program, location, x, y);
     GLuint program;
     GLint location;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewProgramUniform2f) {
        croak("glProgramUniform2f not available on this machine");
    };
    glProgramUniform2f(program, location, x, y);

SV *
glProgramUniform2fEXT(program, location, v0, v1);
     GLuint program;
     GLint location;
     GLfloat v0;
     GLfloat v1;
CODE:
    if(! __glewProgramUniform2fEXT) {
        croak("glProgramUniform2fEXT not available on this machine");
    };
    glProgramUniform2fEXT(program, location, v0, v1);

SV *
glProgramUniform2fv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform2fv) {
        croak("glProgramUniform2fv not available on this machine");
    };
    glProgramUniform2fv(program, location, count, value);

SV *
glProgramUniform2fvEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform2fvEXT) {
        croak("glProgramUniform2fvEXT not available on this machine");
    };
    glProgramUniform2fvEXT(program, location, count, value);

SV *
glProgramUniform2i(program, location, x, y);
     GLuint program;
     GLint location;
     GLint x;
     GLint y;
CODE:
    if(! __glewProgramUniform2i) {
        croak("glProgramUniform2i not available on this machine");
    };
    glProgramUniform2i(program, location, x, y);

SV *
glProgramUniform2i64ARB(program, location, x, y);
     GLuint program;
     GLint location;
     GLint64 x;
     GLint64 y;
CODE:
    if(! __glewProgramUniform2i64ARB) {
        croak("glProgramUniform2i64ARB not available on this machine");
    };
    glProgramUniform2i64ARB(program, location, x, y);

SV *
glProgramUniform2i64NV(program, location, x, y);
     GLuint program;
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
CODE:
    if(! __glewProgramUniform2i64NV) {
        croak("glProgramUniform2i64NV not available on this machine");
    };
    glProgramUniform2i64NV(program, location, x, y);

SV *
glProgramUniform2i64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewProgramUniform2i64vARB) {
        croak("glProgramUniform2i64vARB not available on this machine");
    };
    glProgramUniform2i64vARB(program, location, count, value);

SV *
glProgramUniform2i64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewProgramUniform2i64vNV) {
        croak("glProgramUniform2i64vNV not available on this machine");
    };
    glProgramUniform2i64vNV(program, location, count, value);

SV *
glProgramUniform2iEXT(program, location, v0, v1);
     GLuint program;
     GLint location;
     GLint v0;
     GLint v1;
CODE:
    if(! __glewProgramUniform2iEXT) {
        croak("glProgramUniform2iEXT not available on this machine");
    };
    glProgramUniform2iEXT(program, location, v0, v1);

SV *
glProgramUniform2iv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform2iv) {
        croak("glProgramUniform2iv not available on this machine");
    };
    glProgramUniform2iv(program, location, count, value);

SV *
glProgramUniform2ivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform2ivEXT) {
        croak("glProgramUniform2ivEXT not available on this machine");
    };
    glProgramUniform2ivEXT(program, location, count, value);

SV *
glProgramUniform2ui(program, location, x, y);
     GLuint program;
     GLint location;
     GLuint x;
     GLuint y;
CODE:
    if(! __glewProgramUniform2ui) {
        croak("glProgramUniform2ui not available on this machine");
    };
    glProgramUniform2ui(program, location, x, y);

SV *
glProgramUniform2ui64ARB(program, location, x, y);
     GLuint program;
     GLint location;
     GLuint64 x;
     GLuint64 y;
CODE:
    if(! __glewProgramUniform2ui64ARB) {
        croak("glProgramUniform2ui64ARB not available on this machine");
    };
    glProgramUniform2ui64ARB(program, location, x, y);

SV *
glProgramUniform2ui64NV(program, location, x, y);
     GLuint program;
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
CODE:
    if(! __glewProgramUniform2ui64NV) {
        croak("glProgramUniform2ui64NV not available on this machine");
    };
    glProgramUniform2ui64NV(program, location, x, y);

SV *
glProgramUniform2ui64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewProgramUniform2ui64vARB) {
        croak("glProgramUniform2ui64vARB not available on this machine");
    };
    glProgramUniform2ui64vARB(program, location, count, value);

SV *
glProgramUniform2ui64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewProgramUniform2ui64vNV) {
        croak("glProgramUniform2ui64vNV not available on this machine");
    };
    glProgramUniform2ui64vNV(program, location, count, value);

SV *
glProgramUniform2uiEXT(program, location, v0, v1);
     GLuint program;
     GLint location;
     GLuint v0;
     GLuint v1;
CODE:
    if(! __glewProgramUniform2uiEXT) {
        croak("glProgramUniform2uiEXT not available on this machine");
    };
    glProgramUniform2uiEXT(program, location, v0, v1);

SV *
glProgramUniform2uiv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform2uiv) {
        croak("glProgramUniform2uiv not available on this machine");
    };
    glProgramUniform2uiv(program, location, count, value);

SV *
glProgramUniform2uivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform2uivEXT) {
        croak("glProgramUniform2uivEXT not available on this machine");
    };
    glProgramUniform2uivEXT(program, location, count, value);

SV *
glProgramUniform3d(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewProgramUniform3d) {
        croak("glProgramUniform3d not available on this machine");
    };
    glProgramUniform3d(program, location, x, y, z);

SV *
glProgramUniform3dv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniform3dv) {
        croak("glProgramUniform3dv not available on this machine");
    };
    glProgramUniform3dv(program, location, count, value);

SV *
glProgramUniform3f(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewProgramUniform3f) {
        croak("glProgramUniform3f not available on this machine");
    };
    glProgramUniform3f(program, location, x, y, z);

SV *
glProgramUniform3fEXT(program, location, v0, v1, v2);
     GLuint program;
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
CODE:
    if(! __glewProgramUniform3fEXT) {
        croak("glProgramUniform3fEXT not available on this machine");
    };
    glProgramUniform3fEXT(program, location, v0, v1, v2);

SV *
glProgramUniform3fv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform3fv) {
        croak("glProgramUniform3fv not available on this machine");
    };
    glProgramUniform3fv(program, location, count, value);

SV *
glProgramUniform3fvEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform3fvEXT) {
        croak("glProgramUniform3fvEXT not available on this machine");
    };
    glProgramUniform3fvEXT(program, location, count, value);

SV *
glProgramUniform3i(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewProgramUniform3i) {
        croak("glProgramUniform3i not available on this machine");
    };
    glProgramUniform3i(program, location, x, y, z);

SV *
glProgramUniform3i64ARB(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLint64 x;
     GLint64 y;
     GLint64 z;
CODE:
    if(! __glewProgramUniform3i64ARB) {
        croak("glProgramUniform3i64ARB not available on this machine");
    };
    glProgramUniform3i64ARB(program, location, x, y, z);

SV *
glProgramUniform3i64NV(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
CODE:
    if(! __glewProgramUniform3i64NV) {
        croak("glProgramUniform3i64NV not available on this machine");
    };
    glProgramUniform3i64NV(program, location, x, y, z);

SV *
glProgramUniform3i64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewProgramUniform3i64vARB) {
        croak("glProgramUniform3i64vARB not available on this machine");
    };
    glProgramUniform3i64vARB(program, location, count, value);

SV *
glProgramUniform3i64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewProgramUniform3i64vNV) {
        croak("glProgramUniform3i64vNV not available on this machine");
    };
    glProgramUniform3i64vNV(program, location, count, value);

SV *
glProgramUniform3iEXT(program, location, v0, v1, v2);
     GLuint program;
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
CODE:
    if(! __glewProgramUniform3iEXT) {
        croak("glProgramUniform3iEXT not available on this machine");
    };
    glProgramUniform3iEXT(program, location, v0, v1, v2);

SV *
glProgramUniform3iv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform3iv) {
        croak("glProgramUniform3iv not available on this machine");
    };
    glProgramUniform3iv(program, location, count, value);

SV *
glProgramUniform3ivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform3ivEXT) {
        croak("glProgramUniform3ivEXT not available on this machine");
    };
    glProgramUniform3ivEXT(program, location, count, value);

SV *
glProgramUniform3ui(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLuint x;
     GLuint y;
     GLuint z;
CODE:
    if(! __glewProgramUniform3ui) {
        croak("glProgramUniform3ui not available on this machine");
    };
    glProgramUniform3ui(program, location, x, y, z);

SV *
glProgramUniform3ui64ARB(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLuint64 x;
     GLuint64 y;
     GLuint64 z;
CODE:
    if(! __glewProgramUniform3ui64ARB) {
        croak("glProgramUniform3ui64ARB not available on this machine");
    };
    glProgramUniform3ui64ARB(program, location, x, y, z);

SV *
glProgramUniform3ui64NV(program, location, x, y, z);
     GLuint program;
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
CODE:
    if(! __glewProgramUniform3ui64NV) {
        croak("glProgramUniform3ui64NV not available on this machine");
    };
    glProgramUniform3ui64NV(program, location, x, y, z);

SV *
glProgramUniform3ui64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewProgramUniform3ui64vARB) {
        croak("glProgramUniform3ui64vARB not available on this machine");
    };
    glProgramUniform3ui64vARB(program, location, count, value);

SV *
glProgramUniform3ui64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewProgramUniform3ui64vNV) {
        croak("glProgramUniform3ui64vNV not available on this machine");
    };
    glProgramUniform3ui64vNV(program, location, count, value);

SV *
glProgramUniform3uiEXT(program, location, v0, v1, v2);
     GLuint program;
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
CODE:
    if(! __glewProgramUniform3uiEXT) {
        croak("glProgramUniform3uiEXT not available on this machine");
    };
    glProgramUniform3uiEXT(program, location, v0, v1, v2);

SV *
glProgramUniform3uiv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform3uiv) {
        croak("glProgramUniform3uiv not available on this machine");
    };
    glProgramUniform3uiv(program, location, count, value);

SV *
glProgramUniform3uivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform3uivEXT) {
        croak("glProgramUniform3uivEXT not available on this machine");
    };
    glProgramUniform3uivEXT(program, location, count, value);

SV *
glProgramUniform4d(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewProgramUniform4d) {
        croak("glProgramUniform4d not available on this machine");
    };
    glProgramUniform4d(program, location, x, y, z, w);

SV *
glProgramUniform4dv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniform4dv) {
        croak("glProgramUniform4dv not available on this machine");
    };
    glProgramUniform4dv(program, location, count, value);

SV *
glProgramUniform4f(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewProgramUniform4f) {
        croak("glProgramUniform4f not available on this machine");
    };
    glProgramUniform4f(program, location, x, y, z, w);

SV *
glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
     GLuint program;
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
     GLfloat v3;
CODE:
    if(! __glewProgramUniform4fEXT) {
        croak("glProgramUniform4fEXT not available on this machine");
    };
    glProgramUniform4fEXT(program, location, v0, v1, v2, v3);

SV *
glProgramUniform4fv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform4fv) {
        croak("glProgramUniform4fv not available on this machine");
    };
    glProgramUniform4fv(program, location, count, value);

SV *
glProgramUniform4fvEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniform4fvEXT) {
        croak("glProgramUniform4fvEXT not available on this machine");
    };
    glProgramUniform4fvEXT(program, location, count, value);

SV *
glProgramUniform4i(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewProgramUniform4i) {
        croak("glProgramUniform4i not available on this machine");
    };
    glProgramUniform4i(program, location, x, y, z, w);

SV *
glProgramUniform4i64ARB(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLint64 x;
     GLint64 y;
     GLint64 z;
     GLint64 w;
CODE:
    if(! __glewProgramUniform4i64ARB) {
        croak("glProgramUniform4i64ARB not available on this machine");
    };
    glProgramUniform4i64ARB(program, location, x, y, z, w);

SV *
glProgramUniform4i64NV(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
     GLint64EXT w;
CODE:
    if(! __glewProgramUniform4i64NV) {
        croak("glProgramUniform4i64NV not available on this machine");
    };
    glProgramUniform4i64NV(program, location, x, y, z, w);

SV *
glProgramUniform4i64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewProgramUniform4i64vARB) {
        croak("glProgramUniform4i64vARB not available on this machine");
    };
    glProgramUniform4i64vARB(program, location, count, value);

SV *
glProgramUniform4i64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewProgramUniform4i64vNV) {
        croak("glProgramUniform4i64vNV not available on this machine");
    };
    glProgramUniform4i64vNV(program, location, count, value);

SV *
glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
     GLuint program;
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
     GLint v3;
CODE:
    if(! __glewProgramUniform4iEXT) {
        croak("glProgramUniform4iEXT not available on this machine");
    };
    glProgramUniform4iEXT(program, location, v0, v1, v2, v3);

SV *
glProgramUniform4iv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform4iv) {
        croak("glProgramUniform4iv not available on this machine");
    };
    glProgramUniform4iv(program, location, count, value);

SV *
glProgramUniform4ivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewProgramUniform4ivEXT) {
        croak("glProgramUniform4ivEXT not available on this machine");
    };
    glProgramUniform4ivEXT(program, location, count, value);

SV *
glProgramUniform4ui(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLuint x;
     GLuint y;
     GLuint z;
     GLuint w;
CODE:
    if(! __glewProgramUniform4ui) {
        croak("glProgramUniform4ui not available on this machine");
    };
    glProgramUniform4ui(program, location, x, y, z, w);

SV *
glProgramUniform4ui64ARB(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLuint64 x;
     GLuint64 y;
     GLuint64 z;
     GLuint64 w;
CODE:
    if(! __glewProgramUniform4ui64ARB) {
        croak("glProgramUniform4ui64ARB not available on this machine");
    };
    glProgramUniform4ui64ARB(program, location, x, y, z, w);

SV *
glProgramUniform4ui64NV(program, location, x, y, z, w);
     GLuint program;
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
     GLuint64EXT w;
CODE:
    if(! __glewProgramUniform4ui64NV) {
        croak("glProgramUniform4ui64NV not available on this machine");
    };
    glProgramUniform4ui64NV(program, location, x, y, z, w);

SV *
glProgramUniform4ui64vARB(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewProgramUniform4ui64vARB) {
        croak("glProgramUniform4ui64vARB not available on this machine");
    };
    glProgramUniform4ui64vARB(program, location, count, value);

SV *
glProgramUniform4ui64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewProgramUniform4ui64vNV) {
        croak("glProgramUniform4ui64vNV not available on this machine");
    };
    glProgramUniform4ui64vNV(program, location, count, value);

SV *
glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
     GLuint program;
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
     GLuint v3;
CODE:
    if(! __glewProgramUniform4uiEXT) {
        croak("glProgramUniform4uiEXT not available on this machine");
    };
    glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);

SV *
glProgramUniform4uiv(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform4uiv) {
        croak("glProgramUniform4uiv not available on this machine");
    };
    glProgramUniform4uiv(program, location, count, value);

SV *
glProgramUniform4uivEXT(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewProgramUniform4uivEXT) {
        croak("glProgramUniform4uivEXT not available on this machine");
    };
    glProgramUniform4uivEXT(program, location, count, value);

SV *
glProgramUniformHandleui64ARB(program, location, value);
     GLuint program;
     GLint location;
     GLuint64 value;
CODE:
    if(! __glewProgramUniformHandleui64ARB) {
        croak("glProgramUniformHandleui64ARB not available on this machine");
    };
    glProgramUniformHandleui64ARB(program, location, value);

SV *
glProgramUniformHandleui64NV(program, location, value);
     GLuint program;
     GLint location;
     GLuint64 value;
CODE:
    if(! __glewProgramUniformHandleui64NV) {
        croak("glProgramUniformHandleui64NV not available on this machine");
    };
    glProgramUniformHandleui64NV(program, location, value);

SV *
glProgramUniformHandleui64vARB(program, location, count, values);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* values;
CODE:
    if(! __glewProgramUniformHandleui64vARB) {
        croak("glProgramUniformHandleui64vARB not available on this machine");
    };
    glProgramUniformHandleui64vARB(program, location, count, values);

SV *
glProgramUniformHandleui64vNV(program, location, count, values);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64* values;
CODE:
    if(! __glewProgramUniformHandleui64vNV) {
        croak("glProgramUniformHandleui64vNV not available on this machine");
    };
    glProgramUniformHandleui64vNV(program, location, count, values);

SV *
glProgramUniformMatrix2dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix2dv) {
        croak("glProgramUniformMatrix2dv not available on this machine");
    };
    glProgramUniformMatrix2dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2fv) {
        croak("glProgramUniformMatrix2fv not available on this machine");
    };
    glProgramUniformMatrix2fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2fvEXT) {
        croak("glProgramUniformMatrix2fvEXT not available on this machine");
    };
    glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix2x3dv) {
        croak("glProgramUniformMatrix2x3dv not available on this machine");
    };
    glProgramUniformMatrix2x3dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2x3fv) {
        croak("glProgramUniformMatrix2x3fv not available on this machine");
    };
    glProgramUniformMatrix2x3fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2x3fvEXT) {
        croak("glProgramUniformMatrix2x3fvEXT not available on this machine");
    };
    glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix2x4dv) {
        croak("glProgramUniformMatrix2x4dv not available on this machine");
    };
    glProgramUniformMatrix2x4dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2x4fv) {
        croak("glProgramUniformMatrix2x4fv not available on this machine");
    };
    glProgramUniformMatrix2x4fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix2x4fvEXT) {
        croak("glProgramUniformMatrix2x4fvEXT not available on this machine");
    };
    glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix3dv) {
        croak("glProgramUniformMatrix3dv not available on this machine");
    };
    glProgramUniformMatrix3dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3fv) {
        croak("glProgramUniformMatrix3fv not available on this machine");
    };
    glProgramUniformMatrix3fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3fvEXT) {
        croak("glProgramUniformMatrix3fvEXT not available on this machine");
    };
    glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix3x2dv) {
        croak("glProgramUniformMatrix3x2dv not available on this machine");
    };
    glProgramUniformMatrix3x2dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3x2fv) {
        croak("glProgramUniformMatrix3x2fv not available on this machine");
    };
    glProgramUniformMatrix3x2fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3x2fvEXT) {
        croak("glProgramUniformMatrix3x2fvEXT not available on this machine");
    };
    glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix3x4dv) {
        croak("glProgramUniformMatrix3x4dv not available on this machine");
    };
    glProgramUniformMatrix3x4dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3x4fv) {
        croak("glProgramUniformMatrix3x4fv not available on this machine");
    };
    glProgramUniformMatrix3x4fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix3x4fvEXT) {
        croak("glProgramUniformMatrix3x4fvEXT not available on this machine");
    };
    glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix4dv) {
        croak("glProgramUniformMatrix4dv not available on this machine");
    };
    glProgramUniformMatrix4dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4fv) {
        croak("glProgramUniformMatrix4fv not available on this machine");
    };
    glProgramUniformMatrix4fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4fvEXT) {
        croak("glProgramUniformMatrix4fvEXT not available on this machine");
    };
    glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix4x2dv) {
        croak("glProgramUniformMatrix4x2dv not available on this machine");
    };
    glProgramUniformMatrix4x2dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4x2fv) {
        croak("glProgramUniformMatrix4x2fv not available on this machine");
    };
    glProgramUniformMatrix4x2fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4x2fvEXT) {
        croak("glProgramUniformMatrix4x2fvEXT not available on this machine");
    };
    glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewProgramUniformMatrix4x3dv) {
        croak("glProgramUniformMatrix4x3dv not available on this machine");
    };
    glProgramUniformMatrix4x3dv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4x3fv) {
        croak("glProgramUniformMatrix4x3fv not available on this machine");
    };
    glProgramUniformMatrix4x3fv(program, location, count, transpose, value);

SV *
glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
     GLuint program;
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewProgramUniformMatrix4x3fvEXT) {
        croak("glProgramUniformMatrix4x3fvEXT not available on this machine");
    };
    glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);

SV *
glProgramUniformui64NV(program, location, value);
     GLuint program;
     GLint location;
     GLuint64EXT value;
CODE:
    if(! __glewProgramUniformui64NV) {
        croak("glProgramUniformui64NV not available on this machine");
    };
    glProgramUniformui64NV(program, location, value);

SV *
glProgramUniformui64vNV(program, location, count, value);
     GLuint program;
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewProgramUniformui64vNV) {
        croak("glProgramUniformui64vNV not available on this machine");
    };
    glProgramUniformui64vNV(program, location, count, value);

SV *
glProgramVertexLimitNV(target, limit);
     GLenum target;
     GLint limit;
CODE:
    if(! __glewProgramVertexLimitNV) {
        croak("glProgramVertexLimitNV not available on this machine");
    };
    glProgramVertexLimitNV(target, limit);

SV *
glProvokingVertex(mode);
     GLenum mode;
CODE:
    if(! __glewProvokingVertex) {
        croak("glProvokingVertex not available on this machine");
    };
    glProvokingVertex(mode);

SV *
glProvokingVertexEXT(mode);
     GLenum mode;
CODE:
    if(! __glewProvokingVertexEXT) {
        croak("glProvokingVertexEXT not available on this machine");
    };
    glProvokingVertexEXT(mode);

SV *
glPushClientAttribDefaultEXT(mask);
     GLbitfield mask;
CODE:
    if(! __glewPushClientAttribDefaultEXT) {
        croak("glPushClientAttribDefaultEXT not available on this machine");
    };
    glPushClientAttribDefaultEXT(mask);

SV *
glPushDebugGroup(source, id, length, message);
     GLenum source;
     GLuint id;
     GLsizei length;
     const GLchar * message;
CODE:
    if(! __glewPushDebugGroup) {
        croak("glPushDebugGroup not available on this machine");
    };
    glPushDebugGroup(source, id, length, message);

SV *
glPushGroupMarkerEXT(length, marker);
     GLsizei length;
     const GLchar* marker;
CODE:
    if(! __glewPushGroupMarkerEXT) {
        croak("glPushGroupMarkerEXT not available on this machine");
    };
    glPushGroupMarkerEXT(length, marker);

SV *
glQueryCounter(id, target);
     GLuint id;
     GLenum target;
CODE:
    if(! __glewQueryCounter) {
        croak("glQueryCounter not available on this machine");
    };
    glQueryCounter(id, target);

SV *
glQueryCounterANGLE(id, target);
     GLuint id;
     GLenum target;
CODE:
    if(! __glewQueryCounterANGLE) {
        croak("glQueryCounterANGLE not available on this machine");
    };
    glQueryCounterANGLE(id, target);

SV *
glQueryObjectParameteruiAMD(target, id, pname, param);
     GLenum target;
     GLuint id;
     GLenum pname;
     GLuint param;
CODE:
    if(! __glewQueryObjectParameteruiAMD) {
        croak("glQueryObjectParameteruiAMD not available on this machine");
    };
    glQueryObjectParameteruiAMD(target, id, pname, param);

SV *
glRasterSamplesEXT(samples, fixedsamplelocations);
     GLuint samples;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewRasterSamplesEXT) {
        croak("glRasterSamplesEXT not available on this machine");
    };
    glRasterSamplesEXT(samples, fixedsamplelocations);

SV *
glReadBufferRegion(region, x, y, width, height);
     GLuint region;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewReadBufferRegion) {
        croak("glReadBufferRegion not available on this machine");
    };
    glReadBufferRegion(region, x, y, width, height);

SV *
glReadnPixels(x, y, width, height, format, type, bufSize, data);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void *data;
CODE:
    if(! __glewReadnPixels) {
        croak("glReadnPixels not available on this machine");
    };
    glReadnPixels(x, y, width, height, format, type, bufSize, data);

SV *
glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     GLsizei bufSize;
     void* data;
CODE:
    if(! __glewReadnPixelsARB) {
        croak("glReadnPixelsARB not available on this machine");
    };
    glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);

SV *
glReadVideoPixelsSUN(x, y, width, height, format, type, pixels);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     void* pixels;
CODE:
    if(! __glewReadVideoPixelsSUN) {
        croak("glReadVideoPixelsSUN not available on this machine");
    };
    glReadVideoPixelsSUN(x, y, width, height, format, type, pixels);

SV *
glReferencePlaneSGIX(equation);
     const GLdouble* equation;
CODE:
    if(! __glewReferencePlaneSGIX) {
        croak("glReferencePlaneSGIX not available on this machine");
    };
    glReferencePlaneSGIX(equation);

SV *
glReleaseShaderCompiler();
CODE:
    if(! __glewReleaseShaderCompiler) {
        croak("glReleaseShaderCompiler not available on this machine");
    };
    glReleaseShaderCompiler();

SV *
glRenderbufferStorage(target, internalformat, width, height);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorage) {
        croak("glRenderbufferStorage not available on this machine");
    };
    glRenderbufferStorage(target, internalformat, width, height);

SV *
glRenderbufferStorageEXT(target, internalformat, width, height);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorageEXT) {
        croak("glRenderbufferStorageEXT not available on this machine");
    };
    glRenderbufferStorageEXT(target, internalformat, width, height);

SV *
glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorageMultisample) {
        croak("glRenderbufferStorageMultisample not available on this machine");
    };
    glRenderbufferStorageMultisample(target, samples, internalformat, width, height);

SV *
glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorageMultisampleANGLE) {
        croak("glRenderbufferStorageMultisampleANGLE not available on this machine");
    };
    glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);

SV *
glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
     GLenum target;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorageMultisampleCoverageNV) {
        croak("glRenderbufferStorageMultisampleCoverageNV not available on this machine");
    };
    glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);

SV *
glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewRenderbufferStorageMultisampleEXT) {
        croak("glRenderbufferStorageMultisampleEXT not available on this machine");
    };
    glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);

SV *
glRenderGpuMaskNV(mask);
     GLbitfield mask;
CODE:
    if(! __glewRenderGpuMaskNV) {
        croak("glRenderGpuMaskNV not available on this machine");
    };
    glRenderGpuMaskNV(mask);

SV *
glReplacementCodePointerSUN(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewReplacementCodePointerSUN) {
        croak("glReplacementCodePointerSUN not available on this machine");
    };
    glReplacementCodePointerSUN(type, stride, pointer);

SV *
glReplacementCodeubSUN(code);
     GLubyte code;
CODE:
    if(! __glewReplacementCodeubSUN) {
        croak("glReplacementCodeubSUN not available on this machine");
    };
    glReplacementCodeubSUN(code);

SV *
glReplacementCodeubvSUN(code);
     const GLubyte* code;
CODE:
    if(! __glewReplacementCodeubvSUN) {
        croak("glReplacementCodeubvSUN not available on this machine");
    };
    glReplacementCodeubvSUN(code);

SV *
glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
     GLuint rc;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiColor3fVertex3fSUN) {
        croak("glReplacementCodeuiColor3fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);

SV *
glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
     const GLuint* rc;
     const GLfloat *c;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiColor3fVertex3fvSUN) {
        croak("glReplacementCodeuiColor3fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);

SV *
glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
     GLuint rc;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat a;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiColor4fNormal3fVertex3fSUN) {
        croak("glReplacementCodeuiColor4fNormal3fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);

SV *
glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
     const GLuint* rc;
     const GLfloat *c;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiColor4fNormal3fVertex3fvSUN) {
        croak("glReplacementCodeuiColor4fNormal3fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);

SV *
glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
     GLuint rc;
     GLubyte r;
     GLubyte g;
     GLubyte b;
     GLubyte a;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiColor4ubVertex3fSUN) {
        croak("glReplacementCodeuiColor4ubVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);

SV *
glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
     const GLuint* rc;
     const GLubyte *c;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiColor4ubVertex3fvSUN) {
        croak("glReplacementCodeuiColor4ubVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);

SV *
glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
     GLuint rc;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiNormal3fVertex3fSUN) {
        croak("glReplacementCodeuiNormal3fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);

SV *
glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
     const GLuint* rc;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiNormal3fVertex3fvSUN) {
        croak("glReplacementCodeuiNormal3fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);

SV *
glReplacementCodeuiSUN(code);
     GLuint code;
CODE:
    if(! __glewReplacementCodeuiSUN) {
        croak("glReplacementCodeuiSUN not available on this machine");
    };
    glReplacementCodeuiSUN(code);

SV *
glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
     GLuint rc;
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat a;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN) {
        croak("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);

SV *
glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
     const GLuint* rc;
     const GLfloat *tc;
     const GLfloat *c;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN) {
        croak("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);

SV *
glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
     GLuint rc;
     GLfloat s;
     GLfloat t;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN) {
        croak("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);

SV *
glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
     const GLuint* rc;
     const GLfloat *tc;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN) {
        croak("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);

SV *
glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
     GLuint rc;
     GLfloat s;
     GLfloat t;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fVertex3fSUN) {
        croak("glReplacementCodeuiTexCoord2fVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);

SV *
glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
     const GLuint* rc;
     const GLfloat *tc;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiTexCoord2fVertex3fvSUN) {
        croak("glReplacementCodeuiTexCoord2fVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);

SV *
glReplacementCodeuiVertex3fSUN(rc, x, y, z);
     GLuint rc;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewReplacementCodeuiVertex3fSUN) {
        croak("glReplacementCodeuiVertex3fSUN not available on this machine");
    };
    glReplacementCodeuiVertex3fSUN(rc, x, y, z);

SV *
glReplacementCodeuiVertex3fvSUN(rc, v);
     const GLuint* rc;
     const GLfloat *v;
CODE:
    if(! __glewReplacementCodeuiVertex3fvSUN) {
        croak("glReplacementCodeuiVertex3fvSUN not available on this machine");
    };
    glReplacementCodeuiVertex3fvSUN(rc, v);

SV *
glReplacementCodeuivSUN(code);
     const GLuint* code;
CODE:
    if(! __glewReplacementCodeuivSUN) {
        croak("glReplacementCodeuivSUN not available on this machine");
    };
    glReplacementCodeuivSUN(code);

SV *
glReplacementCodeusSUN(code);
     GLushort code;
CODE:
    if(! __glewReplacementCodeusSUN) {
        croak("glReplacementCodeusSUN not available on this machine");
    };
    glReplacementCodeusSUN(code);

SV *
glReplacementCodeusvSUN(code);
     const GLushort* code;
CODE:
    if(! __glewReplacementCodeusvSUN) {
        croak("glReplacementCodeusvSUN not available on this machine");
    };
    glReplacementCodeusvSUN(code);

SV *
glRequestResidentProgramsNV(n, ids);
     GLsizei n;
     GLuint* ids;
CODE:
    if(! __glewRequestResidentProgramsNV) {
        croak("glRequestResidentProgramsNV not available on this machine");
    };
    glRequestResidentProgramsNV(n, ids);

SV *
glResetHistogram(target);
     GLenum target;
CODE:
    if(! __glewResetHistogram) {
        croak("glResetHistogram not available on this machine");
    };
    glResetHistogram(target);

SV *
glResetHistogramEXT(target);
     GLenum target;
CODE:
    if(! __glewResetHistogramEXT) {
        croak("glResetHistogramEXT not available on this machine");
    };
    glResetHistogramEXT(target);

SV *
glResetMinmax(target);
     GLenum target;
CODE:
    if(! __glewResetMinmax) {
        croak("glResetMinmax not available on this machine");
    };
    glResetMinmax(target);

SV *
glResetMinmaxEXT(target);
     GLenum target;
CODE:
    if(! __glewResetMinmaxEXT) {
        croak("glResetMinmaxEXT not available on this machine");
    };
    glResetMinmaxEXT(target);

SV *
glResizeBuffersMESA();
CODE:
    if(! __glewResizeBuffersMESA) {
        croak("glResizeBuffersMESA not available on this machine");
    };
    glResizeBuffersMESA();

SV *
glResumeTransformFeedback();
CODE:
    if(! __glewResumeTransformFeedback) {
        croak("glResumeTransformFeedback not available on this machine");
    };
    glResumeTransformFeedback();

SV *
glResumeTransformFeedbackNV();
CODE:
    if(! __glewResumeTransformFeedbackNV) {
        croak("glResumeTransformFeedbackNV not available on this machine");
    };
    glResumeTransformFeedbackNV();

SV *
glRotatex(angle, x, y, z);
     GLfixed angle;
     GLfixed x;
     GLfixed y;
     GLfixed z;
CODE:
    if(! __glewRotatex) {
        croak("glRotatex not available on this machine");
    };
    glRotatex(angle, x, y, z);

SV *
glSampleCoverage(value, invert);
     GLclampf value;
     GLboolean invert;
CODE:
    if(! __glewSampleCoverage) {
        croak("glSampleCoverage not available on this machine");
    };
    glSampleCoverage(value, invert);

SV *
glSampleCoverageARB(value, invert);
     GLclampf value;
     GLboolean invert;
CODE:
    if(! __glewSampleCoverageARB) {
        croak("glSampleCoverageARB not available on this machine");
    };
    glSampleCoverageARB(value, invert);

SV *
glSampleCoveragex(value, invert);
     GLclampx value;
     GLboolean invert;
CODE:
    if(! __glewSampleCoveragex) {
        croak("glSampleCoveragex not available on this machine");
    };
    glSampleCoveragex(value, invert);

SV *
glSampleMapATI(dst, interp, swizzle);
     GLuint dst;
     GLuint interp;
     GLenum swizzle;
CODE:
    if(! __glewSampleMapATI) {
        croak("glSampleMapATI not available on this machine");
    };
    glSampleMapATI(dst, interp, swizzle);

SV *
glSampleMaskEXT(value, invert);
     GLclampf value;
     GLboolean invert;
CODE:
    if(! __glewSampleMaskEXT) {
        croak("glSampleMaskEXT not available on this machine");
    };
    glSampleMaskEXT(value, invert);

SV *
glSampleMaski(index, mask);
     GLuint index;
     GLbitfield mask;
CODE:
    if(! __glewSampleMaski) {
        croak("glSampleMaski not available on this machine");
    };
    glSampleMaski(index, mask);

SV *
glSampleMaskIndexedNV(index, mask);
     GLuint index;
     GLbitfield mask;
CODE:
    if(! __glewSampleMaskIndexedNV) {
        croak("glSampleMaskIndexedNV not available on this machine");
    };
    glSampleMaskIndexedNV(index, mask);

SV *
glSampleMaskSGIS(value, invert);
     GLclampf value;
     GLboolean invert;
CODE:
    if(! __glewSampleMaskSGIS) {
        croak("glSampleMaskSGIS not available on this machine");
    };
    glSampleMaskSGIS(value, invert);

SV *
glSamplePatternEXT(pattern);
     GLenum pattern;
CODE:
    if(! __glewSamplePatternEXT) {
        croak("glSamplePatternEXT not available on this machine");
    };
    glSamplePatternEXT(pattern);

SV *
glSamplePatternSGIS(pattern);
     GLenum pattern;
CODE:
    if(! __glewSamplePatternSGIS) {
        croak("glSamplePatternSGIS not available on this machine");
    };
    glSamplePatternSGIS(pattern);

SV *
glSamplerParameterf(sampler, pname, param);
     GLuint sampler;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewSamplerParameterf) {
        croak("glSamplerParameterf not available on this machine");
    };
    glSamplerParameterf(sampler, pname, param);

SV *
glSamplerParameterfv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewSamplerParameterfv) {
        croak("glSamplerParameterfv not available on this machine");
    };
    glSamplerParameterfv(sampler, pname, params);

SV *
glSamplerParameteri(sampler, pname, param);
     GLuint sampler;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewSamplerParameteri) {
        croak("glSamplerParameteri not available on this machine");
    };
    glSamplerParameteri(sampler, pname, param);

SV *
glSamplerParameterIiv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewSamplerParameterIiv) {
        croak("glSamplerParameterIiv not available on this machine");
    };
    glSamplerParameterIiv(sampler, pname, params);

SV *
glSamplerParameterIuiv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     const GLuint* params;
CODE:
    if(! __glewSamplerParameterIuiv) {
        croak("glSamplerParameterIuiv not available on this machine");
    };
    glSamplerParameterIuiv(sampler, pname, params);

SV *
glSamplerParameteriv(sampler, pname, params);
     GLuint sampler;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewSamplerParameteriv) {
        croak("glSamplerParameteriv not available on this machine");
    };
    glSamplerParameteriv(sampler, pname, params);

SV *
glScalex(x, y, z);
     GLfixed x;
     GLfixed y;
     GLfixed z;
CODE:
    if(! __glewScalex) {
        croak("glScalex not available on this machine");
    };
    glScalex(x, y, z);

SV *
glScissorArrayv(first, count, v);
     GLuint first;
     GLsizei count;
     const GLint * v;
CODE:
    if(! __glewScissorArrayv) {
        croak("glScissorArrayv not available on this machine");
    };
    glScissorArrayv(first, count, v);

SV *
glScissorIndexed(index, left, bottom, width, height);
     GLuint index;
     GLint left;
     GLint bottom;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewScissorIndexed) {
        croak("glScissorIndexed not available on this machine");
    };
    glScissorIndexed(index, left, bottom, width, height);

SV *
glScissorIndexedv(index, v);
     GLuint index;
     const GLint * v;
CODE:
    if(! __glewScissorIndexedv) {
        croak("glScissorIndexedv not available on this machine");
    };
    glScissorIndexedv(index, v);

SV *
glSecondaryColor3b(red, green, blue);
     GLbyte red;
     GLbyte green;
     GLbyte blue;
CODE:
    if(! __glewSecondaryColor3b) {
        croak("glSecondaryColor3b not available on this machine");
    };
    glSecondaryColor3b(red, green, blue);

SV *
glSecondaryColor3bEXT(red, green, blue);
     GLbyte red;
     GLbyte green;
     GLbyte blue;
CODE:
    if(! __glewSecondaryColor3bEXT) {
        croak("glSecondaryColor3bEXT not available on this machine");
    };
    glSecondaryColor3bEXT(red, green, blue);

SV *
glSecondaryColor3bv(v);
     const GLbyte *v;
CODE:
    if(! __glewSecondaryColor3bv) {
        croak("glSecondaryColor3bv not available on this machine");
    };
    glSecondaryColor3bv(v);

SV *
glSecondaryColor3bvEXT(v);
     const GLbyte *v;
CODE:
    if(! __glewSecondaryColor3bvEXT) {
        croak("glSecondaryColor3bvEXT not available on this machine");
    };
    glSecondaryColor3bvEXT(v);

SV *
glSecondaryColor3d(red, green, blue);
     GLdouble red;
     GLdouble green;
     GLdouble blue;
CODE:
    if(! __glewSecondaryColor3d) {
        croak("glSecondaryColor3d not available on this machine");
    };
    glSecondaryColor3d(red, green, blue);

SV *
glSecondaryColor3dEXT(red, green, blue);
     GLdouble red;
     GLdouble green;
     GLdouble blue;
CODE:
    if(! __glewSecondaryColor3dEXT) {
        croak("glSecondaryColor3dEXT not available on this machine");
    };
    glSecondaryColor3dEXT(red, green, blue);

SV *
glSecondaryColor3dv(v);
     const GLdouble *v;
CODE:
    if(! __glewSecondaryColor3dv) {
        croak("glSecondaryColor3dv not available on this machine");
    };
    glSecondaryColor3dv(v);

SV *
glSecondaryColor3dvEXT(v);
     const GLdouble *v;
CODE:
    if(! __glewSecondaryColor3dvEXT) {
        croak("glSecondaryColor3dvEXT not available on this machine");
    };
    glSecondaryColor3dvEXT(v);

SV *
glSecondaryColor3f(red, green, blue);
     GLfloat red;
     GLfloat green;
     GLfloat blue;
CODE:
    if(! __glewSecondaryColor3f) {
        croak("glSecondaryColor3f not available on this machine");
    };
    glSecondaryColor3f(red, green, blue);

SV *
glSecondaryColor3fEXT(red, green, blue);
     GLfloat red;
     GLfloat green;
     GLfloat blue;
CODE:
    if(! __glewSecondaryColor3fEXT) {
        croak("glSecondaryColor3fEXT not available on this machine");
    };
    glSecondaryColor3fEXT(red, green, blue);

SV *
glSecondaryColor3fv(v);
     const GLfloat *v;
CODE:
    if(! __glewSecondaryColor3fv) {
        croak("glSecondaryColor3fv not available on this machine");
    };
    glSecondaryColor3fv(v);

SV *
glSecondaryColor3fvEXT(v);
     const GLfloat *v;
CODE:
    if(! __glewSecondaryColor3fvEXT) {
        croak("glSecondaryColor3fvEXT not available on this machine");
    };
    glSecondaryColor3fvEXT(v);

SV *
glSecondaryColor3hNV(red, green, blue);
     GLhalf red;
     GLhalf green;
     GLhalf blue;
CODE:
    if(! __glewSecondaryColor3hNV) {
        croak("glSecondaryColor3hNV not available on this machine");
    };
    glSecondaryColor3hNV(red, green, blue);

SV *
glSecondaryColor3hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewSecondaryColor3hvNV) {
        croak("glSecondaryColor3hvNV not available on this machine");
    };
    glSecondaryColor3hvNV(v);

SV *
glSecondaryColor3i(red, green, blue);
     GLint red;
     GLint green;
     GLint blue;
CODE:
    if(! __glewSecondaryColor3i) {
        croak("glSecondaryColor3i not available on this machine");
    };
    glSecondaryColor3i(red, green, blue);

SV *
glSecondaryColor3iEXT(red, green, blue);
     GLint red;
     GLint green;
     GLint blue;
CODE:
    if(! __glewSecondaryColor3iEXT) {
        croak("glSecondaryColor3iEXT not available on this machine");
    };
    glSecondaryColor3iEXT(red, green, blue);

SV *
glSecondaryColor3iv(v);
     const GLint *v;
CODE:
    if(! __glewSecondaryColor3iv) {
        croak("glSecondaryColor3iv not available on this machine");
    };
    glSecondaryColor3iv(v);

SV *
glSecondaryColor3ivEXT(v);
     const GLint *v;
CODE:
    if(! __glewSecondaryColor3ivEXT) {
        croak("glSecondaryColor3ivEXT not available on this machine");
    };
    glSecondaryColor3ivEXT(v);

SV *
glSecondaryColor3s(red, green, blue);
     GLshort red;
     GLshort green;
     GLshort blue;
CODE:
    if(! __glewSecondaryColor3s) {
        croak("glSecondaryColor3s not available on this machine");
    };
    glSecondaryColor3s(red, green, blue);

SV *
glSecondaryColor3sEXT(red, green, blue);
     GLshort red;
     GLshort green;
     GLshort blue;
CODE:
    if(! __glewSecondaryColor3sEXT) {
        croak("glSecondaryColor3sEXT not available on this machine");
    };
    glSecondaryColor3sEXT(red, green, blue);

SV *
glSecondaryColor3sv(v);
     const GLshort *v;
CODE:
    if(! __glewSecondaryColor3sv) {
        croak("glSecondaryColor3sv not available on this machine");
    };
    glSecondaryColor3sv(v);

SV *
glSecondaryColor3svEXT(v);
     const GLshort *v;
CODE:
    if(! __glewSecondaryColor3svEXT) {
        croak("glSecondaryColor3svEXT not available on this machine");
    };
    glSecondaryColor3svEXT(v);

SV *
glSecondaryColor3ub(red, green, blue);
     GLubyte red;
     GLubyte green;
     GLubyte blue;
CODE:
    if(! __glewSecondaryColor3ub) {
        croak("glSecondaryColor3ub not available on this machine");
    };
    glSecondaryColor3ub(red, green, blue);

SV *
glSecondaryColor3ubEXT(red, green, blue);
     GLubyte red;
     GLubyte green;
     GLubyte blue;
CODE:
    if(! __glewSecondaryColor3ubEXT) {
        croak("glSecondaryColor3ubEXT not available on this machine");
    };
    glSecondaryColor3ubEXT(red, green, blue);

SV *
glSecondaryColor3ubv(v);
     const GLubyte *v;
CODE:
    if(! __glewSecondaryColor3ubv) {
        croak("glSecondaryColor3ubv not available on this machine");
    };
    glSecondaryColor3ubv(v);

SV *
glSecondaryColor3ubvEXT(v);
     const GLubyte *v;
CODE:
    if(! __glewSecondaryColor3ubvEXT) {
        croak("glSecondaryColor3ubvEXT not available on this machine");
    };
    glSecondaryColor3ubvEXT(v);

SV *
glSecondaryColor3ui(red, green, blue);
     GLuint red;
     GLuint green;
     GLuint blue;
CODE:
    if(! __glewSecondaryColor3ui) {
        croak("glSecondaryColor3ui not available on this machine");
    };
    glSecondaryColor3ui(red, green, blue);

SV *
glSecondaryColor3uiEXT(red, green, blue);
     GLuint red;
     GLuint green;
     GLuint blue;
CODE:
    if(! __glewSecondaryColor3uiEXT) {
        croak("glSecondaryColor3uiEXT not available on this machine");
    };
    glSecondaryColor3uiEXT(red, green, blue);

SV *
glSecondaryColor3uiv(v);
     const GLuint *v;
CODE:
    if(! __glewSecondaryColor3uiv) {
        croak("glSecondaryColor3uiv not available on this machine");
    };
    glSecondaryColor3uiv(v);

SV *
glSecondaryColor3uivEXT(v);
     const GLuint *v;
CODE:
    if(! __glewSecondaryColor3uivEXT) {
        croak("glSecondaryColor3uivEXT not available on this machine");
    };
    glSecondaryColor3uivEXT(v);

SV *
glSecondaryColor3us(red, green, blue);
     GLushort red;
     GLushort green;
     GLushort blue;
CODE:
    if(! __glewSecondaryColor3us) {
        croak("glSecondaryColor3us not available on this machine");
    };
    glSecondaryColor3us(red, green, blue);

SV *
glSecondaryColor3usEXT(red, green, blue);
     GLushort red;
     GLushort green;
     GLushort blue;
CODE:
    if(! __glewSecondaryColor3usEXT) {
        croak("glSecondaryColor3usEXT not available on this machine");
    };
    glSecondaryColor3usEXT(red, green, blue);

SV *
glSecondaryColor3usv(v);
     const GLushort *v;
CODE:
    if(! __glewSecondaryColor3usv) {
        croak("glSecondaryColor3usv not available on this machine");
    };
    glSecondaryColor3usv(v);

SV *
glSecondaryColor3usvEXT(v);
     const GLushort *v;
CODE:
    if(! __glewSecondaryColor3usvEXT) {
        croak("glSecondaryColor3usvEXT not available on this machine");
    };
    glSecondaryColor3usvEXT(v);

SV *
glSecondaryColorFormatNV(size, type, stride);
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewSecondaryColorFormatNV) {
        croak("glSecondaryColorFormatNV not available on this machine");
    };
    glSecondaryColorFormatNV(size, type, stride);

SV *
glSecondaryColorP3ui(type, color);
     GLenum type;
     GLuint color;
CODE:
    if(! __glewSecondaryColorP3ui) {
        croak("glSecondaryColorP3ui not available on this machine");
    };
    glSecondaryColorP3ui(type, color);

SV *
glSecondaryColorP3uiv(type, color);
     GLenum type;
     const GLuint* color;
CODE:
    if(! __glewSecondaryColorP3uiv) {
        croak("glSecondaryColorP3uiv not available on this machine");
    };
    glSecondaryColorP3uiv(type, color);

SV *
glSecondaryColorPointer(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewSecondaryColorPointer) {
        croak("glSecondaryColorPointer not available on this machine");
    };
    glSecondaryColorPointer(size, type, stride, pointer);

SV *
glSecondaryColorPointerEXT(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewSecondaryColorPointerEXT) {
        croak("glSecondaryColorPointerEXT not available on this machine");
    };
    glSecondaryColorPointerEXT(size, type, stride, pointer);

SV *
glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
     GLint size;
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewSecondaryColorPointerListIBM) {
        croak("glSecondaryColorPointerListIBM not available on this machine");
    };
    glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);

SV *
glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
     GLuint monitor;
     GLboolean enable;
     GLuint group;
     GLint numCounters;
     GLuint* counterList;
CODE:
    if(! __glewSelectPerfMonitorCountersAMD) {
        croak("glSelectPerfMonitorCountersAMD not available on this machine");
    };
    glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);

SV *
glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *row;
     const void *column;
CODE:
    if(! __glewSeparableFilter2D) {
        croak("glSeparableFilter2D not available on this machine");
    };
    glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);

SV *
glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
     GLenum target;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *row;
     const void *column;
CODE:
    if(! __glewSeparableFilter2DEXT) {
        croak("glSeparableFilter2DEXT not available on this machine");
    };
    glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);

SV *
glSetFenceAPPLE(fence);
     GLuint fence;
CODE:
    if(! __glewSetFenceAPPLE) {
        croak("glSetFenceAPPLE not available on this machine");
    };
    glSetFenceAPPLE(fence);

SV *
glSetFenceNV(fence, condition);
     GLuint fence;
     GLenum condition;
CODE:
    if(! __glewSetFenceNV) {
        croak("glSetFenceNV not available on this machine");
    };
    glSetFenceNV(fence, condition);

SV *
glSetFragmentShaderConstantATI(dst, value);
     GLuint dst;
     const GLfloat* value;
CODE:
    if(! __glewSetFragmentShaderConstantATI) {
        croak("glSetFragmentShaderConstantATI not available on this machine");
    };
    glSetFragmentShaderConstantATI(dst, value);

SV *
glSetInvariantEXT(id, type, addr);
     GLuint id;
     GLenum type;
     void *addr;
CODE:
    if(! __glewSetInvariantEXT) {
        croak("glSetInvariantEXT not available on this machine");
    };
    glSetInvariantEXT(id, type, addr);

SV *
glSetLocalConstantEXT(id, type, addr);
     GLuint id;
     GLenum type;
     void *addr;
CODE:
    if(! __glewSetLocalConstantEXT) {
        croak("glSetLocalConstantEXT not available on this machine");
    };
    glSetLocalConstantEXT(id, type, addr);

SV *
glSetMultisamplefvAMD(pname, index, val);
     GLenum pname;
     GLuint index;
     const GLfloat* val;
CODE:
    if(! __glewSetMultisamplefvAMD) {
        croak("glSetMultisamplefvAMD not available on this machine");
    };
    glSetMultisamplefvAMD(pname, index, val);

SV *
glShaderBinary(count, shaders, binaryformat, binary, length);
     GLsizei count;
     const GLuint* shaders;
     GLenum binaryformat;
     const void*binary;
     GLsizei length;
CODE:
    if(! __glewShaderBinary) {
        croak("glShaderBinary not available on this machine");
    };
    glShaderBinary(count, shaders, binaryformat, binary, length);

SV *
glShaderOp1EXT(op, res, arg1);
     GLenum op;
     GLuint res;
     GLuint arg1;
CODE:
    if(! __glewShaderOp1EXT) {
        croak("glShaderOp1EXT not available on this machine");
    };
    glShaderOp1EXT(op, res, arg1);

SV *
glShaderOp2EXT(op, res, arg1, arg2);
     GLenum op;
     GLuint res;
     GLuint arg1;
     GLuint arg2;
CODE:
    if(! __glewShaderOp2EXT) {
        croak("glShaderOp2EXT not available on this machine");
    };
    glShaderOp2EXT(op, res, arg1, arg2);

SV *
glShaderOp3EXT(op, res, arg1, arg2, arg3);
     GLenum op;
     GLuint res;
     GLuint arg1;
     GLuint arg2;
     GLuint arg3;
CODE:
    if(! __glewShaderOp3EXT) {
        croak("glShaderOp3EXT not available on this machine");
    };
    glShaderOp3EXT(op, res, arg1, arg2, arg3);

SV *
glShaderSourceARB(shaderObj, count, string, length);
     GLhandleARB shaderObj;
     GLsizei count;
     const GLcharARB ** string;
     const GLint *length;
CODE:
    if(! __glewShaderSourceARB) {
        croak("glShaderSourceARB not available on this machine");
    };
    glShaderSourceARB(shaderObj, count, string, length);

SV *
glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
     GLuint program;
     GLuint storageBlockIndex;
     GLuint storageBlockBinding;
CODE:
    if(! __glewShaderStorageBlockBinding) {
        croak("glShaderStorageBlockBinding not available on this machine");
    };
    glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);

SV *
glSharpenTexFuncSGIS(target, n, points);
     GLenum target;
     GLsizei n;
     const GLfloat* points;
CODE:
    if(! __glewSharpenTexFuncSGIS) {
        croak("glSharpenTexFuncSGIS not available on this machine");
    };
    glSharpenTexFuncSGIS(target, n, points);

SV *
glSignalVkFenceNV(vkFence);
     GLuint64 vkFence;
CODE:
    if(! __glewSignalVkFenceNV) {
        croak("glSignalVkFenceNV not available on this machine");
    };
    glSignalVkFenceNV(vkFence);

SV *
glSignalVkSemaphoreNV(vkSemaphore);
     GLuint64 vkSemaphore;
CODE:
    if(! __glewSignalVkSemaphoreNV) {
        croak("glSignalVkSemaphoreNV not available on this machine");
    };
    glSignalVkSemaphoreNV(vkSemaphore);

SV *
glSpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
     GLuint shader;
     const GLchar* pEntryPoint;
     GLuint numSpecializationConstants;
     const GLuint* pConstantIndex;
     const GLuint* pConstantValue;
CODE:
    if(! __glewSpecializeShaderARB) {
        croak("glSpecializeShaderARB not available on this machine");
    };
    glSpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);

SV *
glSpriteParameterfSGIX(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewSpriteParameterfSGIX) {
        croak("glSpriteParameterfSGIX not available on this machine");
    };
    glSpriteParameterfSGIX(pname, param);

SV *
glSpriteParameterfvSGIX(pname, params);
     GLenum pname;
     GLfloat* params;
CODE:
    if(! __glewSpriteParameterfvSGIX) {
        croak("glSpriteParameterfvSGIX not available on this machine");
    };
    glSpriteParameterfvSGIX(pname, params);

SV *
glSpriteParameteriSGIX(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewSpriteParameteriSGIX) {
        croak("glSpriteParameteriSGIX not available on this machine");
    };
    glSpriteParameteriSGIX(pname, param);

SV *
glSpriteParameterivSGIX(pname, params);
     GLenum pname;
     GLint* params;
CODE:
    if(! __glewSpriteParameterivSGIX) {
        croak("glSpriteParameterivSGIX not available on this machine");
    };
    glSpriteParameterivSGIX(pname, params);

SV *
glStateCaptureNV(state, mode);
     GLuint state;
     GLenum mode;
CODE:
    if(! __glewStateCaptureNV) {
        croak("glStateCaptureNV not available on this machine");
    };
    glStateCaptureNV(state, mode);

SV *
glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLenum fillMode;
     GLuint mask;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewStencilFillPathInstancedNV) {
        croak("glStencilFillPathInstancedNV not available on this machine");
    };
    glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);

SV *
glStencilFillPathNV(path, fillMode, mask);
     GLuint path;
     GLenum fillMode;
     GLuint mask;
CODE:
    if(! __glewStencilFillPathNV) {
        croak("glStencilFillPathNV not available on this machine");
    };
    glStencilFillPathNV(path, fillMode, mask);

SV *
glStencilFuncSeparate(frontfunc, backfunc, ref, mask);
     GLenum frontfunc;
     GLenum backfunc;
     GLint ref;
     GLuint mask;
CODE:
    if(! __glewStencilFuncSeparate) {
        croak("glStencilFuncSeparate not available on this machine");
    };
    glStencilFuncSeparate(frontfunc, backfunc, ref, mask);

SV *
glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
     GLenum frontfunc;
     GLenum backfunc;
     GLint ref;
     GLuint mask;
CODE:
    if(! __glewStencilFuncSeparateATI) {
        croak("glStencilFuncSeparateATI not available on this machine");
    };
    glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);

SV *
glStencilMaskSeparate(face, mask);
     GLenum face;
     GLuint mask;
CODE:
    if(! __glewStencilMaskSeparate) {
        croak("glStencilMaskSeparate not available on this machine");
    };
    glStencilMaskSeparate(face, mask);

SV *
glStencilOpSeparate(face, sfail, dpfail, dppass);
     GLenum face;
     GLenum sfail;
     GLenum dpfail;
     GLenum dppass;
CODE:
    if(! __glewStencilOpSeparate) {
        croak("glStencilOpSeparate not available on this machine");
    };
    glStencilOpSeparate(face, sfail, dpfail, dppass);

SV *
glStencilOpSeparateATI(face, sfail, dpfail, dppass);
     GLenum face;
     GLenum sfail;
     GLenum dpfail;
     GLenum dppass;
CODE:
    if(! __glewStencilOpSeparateATI) {
        croak("glStencilOpSeparateATI not available on this machine");
    };
    glStencilOpSeparateATI(face, sfail, dpfail, dppass);

SV *
glStencilOpValueAMD(face, value);
     GLenum face;
     GLuint value;
CODE:
    if(! __glewStencilOpValueAMD) {
        croak("glStencilOpValueAMD not available on this machine");
    };
    glStencilOpValueAMD(face, value);

SV *
glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLint reference;
     GLuint mask;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewStencilStrokePathInstancedNV) {
        croak("glStencilStrokePathInstancedNV not available on this machine");
    };
    glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);

SV *
glStencilStrokePathNV(path, reference, mask);
     GLuint path;
     GLint reference;
     GLuint mask;
CODE:
    if(! __glewStencilStrokePathNV) {
        croak("glStencilStrokePathNV not available on this machine");
    };
    glStencilStrokePathNV(path, reference, mask);

SV *
glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLenum fillMode;
     GLuint mask;
     GLenum coverMode;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewStencilThenCoverFillPathInstancedNV) {
        croak("glStencilThenCoverFillPathInstancedNV not available on this machine");
    };
    glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);

SV *
glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
     GLuint path;
     GLenum fillMode;
     GLuint mask;
     GLenum coverMode;
CODE:
    if(! __glewStencilThenCoverFillPathNV) {
        croak("glStencilThenCoverFillPathNV not available on this machine");
    };
    glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);

SV *
glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
     GLsizei numPaths;
     GLenum pathNameType;
     const void *paths;
     GLuint pathBase;
     GLint reference;
     GLuint mask;
     GLenum coverMode;
     GLenum transformType;
     const GLfloat *transformValues;
CODE:
    if(! __glewStencilThenCoverStrokePathInstancedNV) {
        croak("glStencilThenCoverStrokePathInstancedNV not available on this machine");
    };
    glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);

SV *
glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
     GLuint path;
     GLint reference;
     GLuint mask;
     GLenum coverMode;
CODE:
    if(! __glewStencilThenCoverStrokePathNV) {
        croak("glStencilThenCoverStrokePathNV not available on this machine");
    };
    glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);

SV *
glStringMarkerGREMEDY(len, string);
     GLsizei len;
     const void *string;
CODE:
    if(! __glewStringMarkerGREMEDY) {
        croak("glStringMarkerGREMEDY not available on this machine");
    };
    glStringMarkerGREMEDY(len, string);

SV *
glSubpixelPrecisionBiasNV(xbits, ybits);
     GLuint xbits;
     GLuint ybits;
CODE:
    if(! __glewSubpixelPrecisionBiasNV) {
        croak("glSubpixelPrecisionBiasNV not available on this machine");
    };
    glSubpixelPrecisionBiasNV(xbits, ybits);

SV *
glSwizzleEXT(res, in, outX, outY, outZ, outW);
     GLuint res;
     GLuint in;
     GLenum outX;
     GLenum outY;
     GLenum outZ;
     GLenum outW;
CODE:
    if(! __glewSwizzleEXT) {
        croak("glSwizzleEXT not available on this machine");
    };
    glSwizzleEXT(res, in, outX, outY, outZ, outW);

SV *
glSyncTextureINTEL(texture);
     GLuint texture;
CODE:
    if(! __glewSyncTextureINTEL) {
        croak("glSyncTextureINTEL not available on this machine");
    };
    glSyncTextureINTEL(texture);

SV *
glTagSampleBufferSGIX();
CODE:
    if(! __glewTagSampleBufferSGIX) {
        croak("glTagSampleBufferSGIX not available on this machine");
    };
    glTagSampleBufferSGIX();

SV *
glTangentPointerEXT(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     void *pointer;
CODE:
    if(! __glewTangentPointerEXT) {
        croak("glTangentPointerEXT not available on this machine");
    };
    glTangentPointerEXT(type, stride, pointer);

SV *
glTbufferMask3DFX(mask);
     GLuint mask;
CODE:
    if(! __glewTbufferMask3DFX) {
        croak("glTbufferMask3DFX not available on this machine");
    };
    glTbufferMask3DFX(mask);

SV *
glTessellationFactorAMD(factor);
     GLfloat factor;
CODE:
    if(! __glewTessellationFactorAMD) {
        croak("glTessellationFactorAMD not available on this machine");
    };
    glTessellationFactorAMD(factor);

SV *
glTessellationModeAMD(mode);
     GLenum mode;
CODE:
    if(! __glewTessellationModeAMD) {
        croak("glTessellationModeAMD not available on this machine");
    };
    glTessellationModeAMD(mode);

GLboolean
glTestFenceAPPLE(fence);
     GLuint fence;
CODE:
    if(! __glewTestFenceAPPLE) {
        croak("glTestFenceAPPLE not available on this machine");
    };
    RETVAL = glTestFenceAPPLE(fence);
OUTPUT:
    RETVAL

GLboolean
glTestFenceNV(fence);
     GLuint fence;
CODE:
    if(! __glewTestFenceNV) {
        croak("glTestFenceNV not available on this machine");
    };
    RETVAL = glTestFenceNV(fence);
OUTPUT:
    RETVAL

GLboolean
glTestObjectAPPLE(object, name);
     GLenum object;
     GLuint name;
CODE:
    if(! __glewTestObjectAPPLE) {
        croak("glTestObjectAPPLE not available on this machine");
    };
    RETVAL = glTestObjectAPPLE(object, name);
OUTPUT:
    RETVAL

SV *
glTexBuffer(target, internalFormat, buffer);
     GLenum target;
     GLenum internalFormat;
     GLuint buffer;
CODE:
    if(! __glewTexBuffer) {
        croak("glTexBuffer not available on this machine");
    };
    glTexBuffer(target, internalFormat, buffer);

SV *
glTexBufferARB(target, internalformat, buffer);
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
CODE:
    if(! __glewTexBufferARB) {
        croak("glTexBufferARB not available on this machine");
    };
    glTexBufferARB(target, internalformat, buffer);

SV *
glTexBufferEXT(target, internalformat, buffer);
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
CODE:
    if(! __glewTexBufferEXT) {
        croak("glTexBufferEXT not available on this machine");
    };
    glTexBufferEXT(target, internalformat, buffer);

SV *
glTexBufferRange(target, internalformat, buffer, offset, size);
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewTexBufferRange) {
        croak("glTexBufferRange not available on this machine");
    };
    glTexBufferRange(target, internalformat, buffer, offset, size);

SV *
glTexBumpParameterfvATI(pname, param);
     GLenum pname;
     GLfloat *param;
CODE:
    if(! __glewTexBumpParameterfvATI) {
        croak("glTexBumpParameterfvATI not available on this machine");
    };
    glTexBumpParameterfvATI(pname, param);

SV *
glTexBumpParameterivATI(pname, param);
     GLenum pname;
     GLint *param;
CODE:
    if(! __glewTexBumpParameterivATI) {
        croak("glTexBumpParameterivATI not available on this machine");
    };
    glTexBumpParameterivATI(pname, param);

SV *
glTexCoord1hNV(s);
     GLhalf s;
CODE:
    if(! __glewTexCoord1hNV) {
        croak("glTexCoord1hNV not available on this machine");
    };
    glTexCoord1hNV(s);

SV *
glTexCoord1hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewTexCoord1hvNV) {
        croak("glTexCoord1hvNV not available on this machine");
    };
    glTexCoord1hvNV(v);

SV *
glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewTexCoord2fColor3fVertex3fSUN) {
        croak("glTexCoord2fColor3fVertex3fSUN not available on this machine");
    };
    glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);

SV *
glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
     const GLfloat* tc;
     const GLfloat *c;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord2fColor3fVertex3fvSUN) {
        croak("glTexCoord2fColor3fVertex3fvSUN not available on this machine");
    };
    glTexCoord2fColor3fVertex3fvSUN(tc, c, v);

SV *
glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat a;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewTexCoord2fColor4fNormal3fVertex3fSUN) {
        croak("glTexCoord2fColor4fNormal3fVertex3fSUN not available on this machine");
    };
    glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);

SV *
glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
     const GLfloat* tc;
     const GLfloat *c;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord2fColor4fNormal3fVertex3fvSUN) {
        croak("glTexCoord2fColor4fNormal3fVertex3fvSUN not available on this machine");
    };
    glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);

SV *
glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
     GLfloat s;
     GLfloat t;
     GLubyte r;
     GLubyte g;
     GLubyte b;
     GLubyte a;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewTexCoord2fColor4ubVertex3fSUN) {
        croak("glTexCoord2fColor4ubVertex3fSUN not available on this machine");
    };
    glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);

SV *
glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
     const GLfloat* tc;
     const GLubyte *c;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord2fColor4ubVertex3fvSUN) {
        croak("glTexCoord2fColor4ubVertex3fvSUN not available on this machine");
    };
    glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);

SV *
glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
     GLfloat s;
     GLfloat t;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewTexCoord2fNormal3fVertex3fSUN) {
        croak("glTexCoord2fNormal3fVertex3fSUN not available on this machine");
    };
    glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);

SV *
glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
     const GLfloat* tc;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord2fNormal3fVertex3fvSUN) {
        croak("glTexCoord2fNormal3fVertex3fvSUN not available on this machine");
    };
    glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);

SV *
glTexCoord2fVertex3fSUN(s, t, x, y, z);
     GLfloat s;
     GLfloat t;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewTexCoord2fVertex3fSUN) {
        croak("glTexCoord2fVertex3fSUN not available on this machine");
    };
    glTexCoord2fVertex3fSUN(s, t, x, y, z);

SV *
glTexCoord2fVertex3fvSUN(tc, v);
     const GLfloat* tc;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord2fVertex3fvSUN) {
        croak("glTexCoord2fVertex3fvSUN not available on this machine");
    };
    glTexCoord2fVertex3fvSUN(tc, v);

SV *
glTexCoord2hNV(s, t);
     GLhalf s;
     GLhalf t;
CODE:
    if(! __glewTexCoord2hNV) {
        croak("glTexCoord2hNV not available on this machine");
    };
    glTexCoord2hNV(s, t);

SV *
glTexCoord2hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewTexCoord2hvNV) {
        croak("glTexCoord2hvNV not available on this machine");
    };
    glTexCoord2hvNV(v);

SV *
glTexCoord3hNV(s, t, r);
     GLhalf s;
     GLhalf t;
     GLhalf r;
CODE:
    if(! __glewTexCoord3hNV) {
        croak("glTexCoord3hNV not available on this machine");
    };
    glTexCoord3hNV(s, t, r);

SV *
glTexCoord3hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewTexCoord3hvNV) {
        croak("glTexCoord3hvNV not available on this machine");
    };
    glTexCoord3hvNV(v);

SV *
glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
     GLfloat s;
     GLfloat t;
     GLfloat p;
     GLfloat q;
     GLfloat r;
     GLfloat g;
     GLfloat b;
     GLfloat a;
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewTexCoord4fColor4fNormal3fVertex4fSUN) {
        croak("glTexCoord4fColor4fNormal3fVertex4fSUN not available on this machine");
    };
    glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);

SV *
glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
     const GLfloat* tc;
     const GLfloat *c;
     const GLfloat *n;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord4fColor4fNormal3fVertex4fvSUN) {
        croak("glTexCoord4fColor4fNormal3fVertex4fvSUN not available on this machine");
    };
    glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);

SV *
glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
     GLfloat s;
     GLfloat t;
     GLfloat p;
     GLfloat q;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewTexCoord4fVertex4fSUN) {
        croak("glTexCoord4fVertex4fSUN not available on this machine");
    };
    glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);

SV *
glTexCoord4fVertex4fvSUN(tc, v);
     const GLfloat* tc;
     const GLfloat *v;
CODE:
    if(! __glewTexCoord4fVertex4fvSUN) {
        croak("glTexCoord4fVertex4fvSUN not available on this machine");
    };
    glTexCoord4fVertex4fvSUN(tc, v);

SV *
glTexCoord4hNV(s, t, r, q);
     GLhalf s;
     GLhalf t;
     GLhalf r;
     GLhalf q;
CODE:
    if(! __glewTexCoord4hNV) {
        croak("glTexCoord4hNV not available on this machine");
    };
    glTexCoord4hNV(s, t, r, q);

SV *
glTexCoord4hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewTexCoord4hvNV) {
        croak("glTexCoord4hvNV not available on this machine");
    };
    glTexCoord4hvNV(v);

SV *
glTexCoordFormatNV(size, type, stride);
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewTexCoordFormatNV) {
        croak("glTexCoordFormatNV not available on this machine");
    };
    glTexCoordFormatNV(size, type, stride);

SV *
glTexCoordP1ui(type, coords);
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewTexCoordP1ui) {
        croak("glTexCoordP1ui not available on this machine");
    };
    glTexCoordP1ui(type, coords);

SV *
glTexCoordP1uiv(type, coords);
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewTexCoordP1uiv) {
        croak("glTexCoordP1uiv not available on this machine");
    };
    glTexCoordP1uiv(type, coords);

SV *
glTexCoordP2ui(type, coords);
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewTexCoordP2ui) {
        croak("glTexCoordP2ui not available on this machine");
    };
    glTexCoordP2ui(type, coords);

SV *
glTexCoordP2uiv(type, coords);
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewTexCoordP2uiv) {
        croak("glTexCoordP2uiv not available on this machine");
    };
    glTexCoordP2uiv(type, coords);

SV *
glTexCoordP3ui(type, coords);
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewTexCoordP3ui) {
        croak("glTexCoordP3ui not available on this machine");
    };
    glTexCoordP3ui(type, coords);

SV *
glTexCoordP3uiv(type, coords);
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewTexCoordP3uiv) {
        croak("glTexCoordP3uiv not available on this machine");
    };
    glTexCoordP3uiv(type, coords);

SV *
glTexCoordP4ui(type, coords);
     GLenum type;
     GLuint coords;
CODE:
    if(! __glewTexCoordP4ui) {
        croak("glTexCoordP4ui not available on this machine");
    };
    glTexCoordP4ui(type, coords);

SV *
glTexCoordP4uiv(type, coords);
     GLenum type;
     const GLuint* coords;
CODE:
    if(! __glewTexCoordP4uiv) {
        croak("glTexCoordP4uiv not available on this machine");
    };
    glTexCoordP4uiv(type, coords);

SV *
glTexCoordPointerEXT(size, type, stride, count, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     GLsizei count;
     const void *pointer;
CODE:
    if(! __glewTexCoordPointerEXT) {
        croak("glTexCoordPointerEXT not available on this machine");
    };
    glTexCoordPointerEXT(size, type, stride, count, pointer);

SV *
glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
     GLint size;
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewTexCoordPointerListIBM) {
        croak("glTexCoordPointerListIBM not available on this machine");
    };
    glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);

SV *
glTexCoordPointervINTEL(size, type, pointer);
     GLint size;
     GLenum type;
     const void** pointer;
CODE:
    if(! __glewTexCoordPointervINTEL) {
        croak("glTexCoordPointervINTEL not available on this machine");
    };
    glTexCoordPointervINTEL(size, type, pointer);

SV *
glTexEnvx(target, pname, param);
     GLenum target;
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewTexEnvx) {
        croak("glTexEnvx not available on this machine");
    };
    glTexEnvx(target, pname, param);

SV *
glTexEnvxv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewTexEnvxv) {
        croak("glTexEnvxv not available on this machine");
    };
    glTexEnvxv(target, pname, params);

SV *
glTexFilterFuncSGIS(target, filter, n, weights);
     GLenum target;
     GLenum filter;
     GLsizei n;
     const GLfloat* weights;
CODE:
    if(! __glewTexFilterFuncSGIS) {
        croak("glTexFilterFuncSGIS not available on this machine");
    };
    glTexFilterFuncSGIS(target, filter, n, weights);

SV *
glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTexImage2DMultisample) {
        croak("glTexImage2DMultisample not available on this machine");
    };
    glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);

SV *
glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
     GLenum target;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTexImage2DMultisampleCoverageNV) {
        croak("glTexImage2DMultisampleCoverageNV not available on this machine");
    };
    glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);

SV *
glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);
     GLenum target;
     GLint level;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexImage3D) {
        croak("glTexImage3D not available on this machine");
    };
    glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);

SV *
glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexImage3DEXT) {
        croak("glTexImage3DEXT not available on this machine");
    };
    glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);

SV *
glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTexImage3DMultisample) {
        croak("glTexImage3DMultisample not available on this machine");
    };
    glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);

SV *
glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
     GLenum target;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTexImage3DMultisampleCoverageNV) {
        croak("glTexImage3DMultisampleCoverageNV not available on this machine");
    };
    glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);

SV *
glTexImage4DSGIS(target, level, internalformat, width, height, depth, extent, border, format, type, pixels);
     GLenum target;
     GLint level;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLsizei extent;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexImage4DSGIS) {
        croak("glTexImage4DSGIS not available on this machine");
    };
    glTexImage4DSGIS(target, level, internalformat, width, height, depth, extent, border, format, type, pixels);

SV *
glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean commit;
CODE:
    if(! __glewTexPageCommitmentARB) {
        croak("glTexPageCommitmentARB not available on this machine");
    };
    glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);

SV *
glTexParameterIiv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewTexParameterIiv) {
        croak("glTexParameterIiv not available on this machine");
    };
    glTexParameterIiv(target, pname, params);

SV *
glTexParameterIivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint *params;
CODE:
    if(! __glewTexParameterIivEXT) {
        croak("glTexParameterIivEXT not available on this machine");
    };
    glTexParameterIivEXT(target, pname, params);

SV *
glTexParameterIuiv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLuint* params;
CODE:
    if(! __glewTexParameterIuiv) {
        croak("glTexParameterIuiv not available on this machine");
    };
    glTexParameterIuiv(target, pname, params);

SV *
glTexParameterIuivEXT(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLuint *params;
CODE:
    if(! __glewTexParameterIuivEXT) {
        croak("glTexParameterIuivEXT not available on this machine");
    };
    glTexParameterIuivEXT(target, pname, params);

SV *
glTexParameterx(target, pname, param);
     GLenum target;
     GLenum pname;
     GLfixed param;
CODE:
    if(! __glewTexParameterx) {
        croak("glTexParameterx not available on this machine");
    };
    glTexParameterx(target, pname, param);

SV *
glTexParameterxv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfixed* params;
CODE:
    if(! __glewTexParameterxv) {
        croak("glTexParameterxv not available on this machine");
    };
    glTexParameterxv(target, pname, params);

SV *
glTexRenderbufferNV(target, renderbuffer);
     GLenum target;
     GLuint renderbuffer;
CODE:
    if(! __glewTexRenderbufferNV) {
        croak("glTexRenderbufferNV not available on this machine");
    };
    glTexRenderbufferNV(target, renderbuffer);

SV *
glTexScissorFuncINTEL(target, lfunc, hfunc);
     GLenum target;
     GLenum lfunc;
     GLenum hfunc;
CODE:
    if(! __glewTexScissorFuncINTEL) {
        croak("glTexScissorFuncINTEL not available on this machine");
    };
    glTexScissorFuncINTEL(target, lfunc, hfunc);

SV *
glTexScissorINTEL(target, tlow, thigh);
     GLenum target;
     GLclampf tlow;
     GLclampf thigh;
CODE:
    if(! __glewTexScissorINTEL) {
        croak("glTexScissorINTEL not available on this machine");
    };
    glTexScissorINTEL(target, tlow, thigh);

SV *
glTexStorage1D(target, levels, internalformat, width);
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
CODE:
    if(! __glewTexStorage1D) {
        croak("glTexStorage1D not available on this machine");
    };
    glTexStorage1D(target, levels, internalformat, width);

SV *
glTexStorage2D(target, levels, internalformat, width, height);
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewTexStorage2D) {
        croak("glTexStorage2D not available on this machine");
    };
    glTexStorage2D(target, levels, internalformat, width, height);

SV *
glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTexStorage2DMultisample) {
        croak("glTexStorage2DMultisample not available on this machine");
    };
    glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);

SV *
glTexStorage3D(target, levels, internalformat, width, height, depth);
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewTexStorage3D) {
        croak("glTexStorage3D not available on this machine");
    };
    glTexStorage3D(target, levels, internalformat, width, height, depth);

SV *
glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTexStorage3DMultisample) {
        croak("glTexStorage3DMultisample not available on this machine");
    };
    glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);

SV *
glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
     GLenum target;
     GLenum internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLsizei layers;
     GLbitfield flags;
CODE:
    if(! __glewTexStorageSparseAMD) {
        croak("glTexStorageSparseAMD not available on this machine");
    };
    glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);

SV *
glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexSubImage1DEXT) {
        croak("glTexSubImage1DEXT not available on this machine");
    };
    glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);

SV *
glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexSubImage2DEXT) {
        croak("glTexSubImage2DEXT not available on this machine");
    };
    glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);

SV *
glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexSubImage3D) {
        croak("glTexSubImage3D not available on this machine");
    };
    glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

SV *
glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexSubImage3DEXT) {
        croak("glTexSubImage3DEXT not available on this machine");
    };
    glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

SV *
glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, extent, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLint woffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLsizei extent;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTexSubImage4DSGIS) {
        croak("glTexSubImage4DSGIS not available on this machine");
    };
    glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, extent, format, type, pixels);

SV *
glTextureBarrier();
CODE:
    if(! __glewTextureBarrier) {
        croak("glTextureBarrier not available on this machine");
    };
    glTextureBarrier();

SV *
glTextureBarrierNV();
CODE:
    if(! __glewTextureBarrierNV) {
        croak("glTextureBarrierNV not available on this machine");
    };
    glTextureBarrierNV();

SV *
glTextureBuffer(texture, internalformat, buffer);
     GLuint texture;
     GLenum internalformat;
     GLuint buffer;
CODE:
    if(! __glewTextureBuffer) {
        croak("glTextureBuffer not available on this machine");
    };
    glTextureBuffer(texture, internalformat, buffer);

SV *
glTextureBufferEXT(texture, target, internalformat, buffer);
     GLuint texture;
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
CODE:
    if(! __glewTextureBufferEXT) {
        croak("glTextureBufferEXT not available on this machine");
    };
    glTextureBufferEXT(texture, target, internalformat, buffer);

SV *
glTextureBufferRange(texture, internalformat, buffer, offset, size);
     GLuint texture;
     GLenum internalformat;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewTextureBufferRange) {
        croak("glTextureBufferRange not available on this machine");
    };
    glTextureBufferRange(texture, internalformat, buffer, offset, size);

SV *
glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
     GLuint texture;
     GLenum target;
     GLenum internalformat;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewTextureBufferRangeEXT) {
        croak("glTextureBufferRangeEXT not available on this machine");
    };
    glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);

SV *
glTextureFogSGIX(pname);
     GLenum pname;
CODE:
    if(! __glewTextureFogSGIX) {
        croak("glTextureFogSGIX not available on this machine");
    };
    glTextureFogSGIX(pname);

SV *
glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureImage1DEXT) {
        croak("glTextureImage1DEXT not available on this machine");
    };
    glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);

SV *
glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureImage2DEXT) {
        croak("glTextureImage2DEXT not available on this machine");
    };
    glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);

SV *
glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
     GLuint texture;
     GLenum target;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTextureImage2DMultisampleCoverageNV) {
        croak("glTextureImage2DMultisampleCoverageNV not available on this machine");
    };
    glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);

SV *
glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
     GLuint texture;
     GLenum target;
     GLsizei samples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTextureImage2DMultisampleNV) {
        croak("glTextureImage2DMultisampleNV not available on this machine");
    };
    glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);

SV *
glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureImage3DEXT) {
        croak("glTextureImage3DEXT not available on this machine");
    };
    glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);

SV *
glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
     GLuint texture;
     GLenum target;
     GLsizei coverageSamples;
     GLsizei colorSamples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTextureImage3DMultisampleCoverageNV) {
        croak("glTextureImage3DMultisampleCoverageNV not available on this machine");
    };
    glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);

SV *
glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
     GLuint texture;
     GLenum target;
     GLsizei samples;
     GLint internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedSampleLocations;
CODE:
    if(! __glewTextureImage3DMultisampleNV) {
        croak("glTextureImage3DMultisampleNV not available on this machine");
    };
    glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);

SV *
glTextureLightEXT(pname);
     GLenum pname;
CODE:
    if(! __glewTextureLightEXT) {
        croak("glTextureLightEXT not available on this machine");
    };
    glTextureLightEXT(pname);

SV *
glTextureMaterialEXT(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    if(! __glewTextureMaterialEXT) {
        croak("glTextureMaterialEXT not available on this machine");
    };
    glTextureMaterialEXT(face, mode);

SV *
glTextureNormalEXT(mode);
     GLenum mode;
CODE:
    if(! __glewTextureNormalEXT) {
        croak("glTextureNormalEXT not available on this machine");
    };
    glTextureNormalEXT(mode);

SV *
glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean commit;
CODE:
    if(! __glewTexturePageCommitmentEXT) {
        croak("glTexturePageCommitmentEXT not available on this machine");
    };
    glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);

SV *
glTextureParameterf(texture, pname, param);
     GLuint texture;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewTextureParameterf) {
        croak("glTextureParameterf not available on this machine");
    };
    glTextureParameterf(texture, pname, param);

SV *
glTextureParameterfEXT(texture, target, pname, param);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewTextureParameterfEXT) {
        croak("glTextureParameterfEXT not available on this machine");
    };
    glTextureParameterfEXT(texture, target, pname, param);

SV *
glTextureParameterfv(texture, pname, param);
     GLuint texture;
     GLenum pname;
     const GLfloat* param;
CODE:
    if(! __glewTextureParameterfv) {
        croak("glTextureParameterfv not available on this machine");
    };
    glTextureParameterfv(texture, pname, param);

SV *
glTextureParameterfvEXT(texture, target, pname, param);
     GLuint texture;
     GLenum target;
     GLenum pname;
     const GLfloat* param;
CODE:
    if(! __glewTextureParameterfvEXT) {
        croak("glTextureParameterfvEXT not available on this machine");
    };
    glTextureParameterfvEXT(texture, target, pname, param);

SV *
glTextureParameteri(texture, pname, param);
     GLuint texture;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewTextureParameteri) {
        croak("glTextureParameteri not available on this machine");
    };
    glTextureParameteri(texture, pname, param);

SV *
glTextureParameteriEXT(texture, target, pname, param);
     GLuint texture;
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewTextureParameteriEXT) {
        croak("glTextureParameteriEXT not available on this machine");
    };
    glTextureParameteriEXT(texture, target, pname, param);

SV *
glTextureParameterIiv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewTextureParameterIiv) {
        croak("glTextureParameterIiv not available on this machine");
    };
    glTextureParameterIiv(texture, pname, params);

SV *
glTextureParameterIivEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewTextureParameterIivEXT) {
        croak("glTextureParameterIivEXT not available on this machine");
    };
    glTextureParameterIivEXT(texture, target, pname, params);

SV *
glTextureParameterIuiv(texture, pname, params);
     GLuint texture;
     GLenum pname;
     const GLuint* params;
CODE:
    if(! __glewTextureParameterIuiv) {
        croak("glTextureParameterIuiv not available on this machine");
    };
    glTextureParameterIuiv(texture, pname, params);

SV *
glTextureParameterIuivEXT(texture, target, pname, params);
     GLuint texture;
     GLenum target;
     GLenum pname;
     const GLuint* params;
CODE:
    if(! __glewTextureParameterIuivEXT) {
        croak("glTextureParameterIuivEXT not available on this machine");
    };
    glTextureParameterIuivEXT(texture, target, pname, params);

SV *
glTextureParameteriv(texture, pname, param);
     GLuint texture;
     GLenum pname;
     const GLint* param;
CODE:
    if(! __glewTextureParameteriv) {
        croak("glTextureParameteriv not available on this machine");
    };
    glTextureParameteriv(texture, pname, param);

SV *
glTextureParameterivEXT(texture, target, pname, param);
     GLuint texture;
     GLenum target;
     GLenum pname;
     const GLint* param;
CODE:
    if(! __glewTextureParameterivEXT) {
        croak("glTextureParameterivEXT not available on this machine");
    };
    glTextureParameterivEXT(texture, target, pname, param);

SV *
glTextureRangeAPPLE(target, length, pointer);
     GLenum target;
     GLsizei length;
     void *pointer;
CODE:
    if(! __glewTextureRangeAPPLE) {
        croak("glTextureRangeAPPLE not available on this machine");
    };
    glTextureRangeAPPLE(target, length, pointer);

SV *
glTextureRenderbufferEXT(texture, target, renderbuffer);
     GLuint texture;
     GLenum target;
     GLuint renderbuffer;
CODE:
    if(! __glewTextureRenderbufferEXT) {
        croak("glTextureRenderbufferEXT not available on this machine");
    };
    glTextureRenderbufferEXT(texture, target, renderbuffer);

SV *
glTextureStorage1D(texture, levels, internalformat, width);
     GLuint texture;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
CODE:
    if(! __glewTextureStorage1D) {
        croak("glTextureStorage1D not available on this machine");
    };
    glTextureStorage1D(texture, levels, internalformat, width);

SV *
glTextureStorage1DEXT(texture, target, levels, internalformat, width);
     GLuint texture;
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
CODE:
    if(! __glewTextureStorage1DEXT) {
        croak("glTextureStorage1DEXT not available on this machine");
    };
    glTextureStorage1DEXT(texture, target, levels, internalformat, width);

SV *
glTextureStorage2D(texture, levels, internalformat, width, height);
     GLuint texture;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewTextureStorage2D) {
        croak("glTextureStorage2D not available on this machine");
    };
    glTextureStorage2D(texture, levels, internalformat, width, height);

SV *
glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
     GLuint texture;
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
CODE:
    if(! __glewTextureStorage2DEXT) {
        croak("glTextureStorage2DEXT not available on this machine");
    };
    glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);

SV *
glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
     GLuint texture;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTextureStorage2DMultisample) {
        croak("glTextureStorage2DMultisample not available on this machine");
    };
    glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);

SV *
glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
     GLuint texture;
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTextureStorage2DMultisampleEXT) {
        croak("glTextureStorage2DMultisampleEXT not available on this machine");
    };
    glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);

SV *
glTextureStorage3D(texture, levels, internalformat, width, height, depth);
     GLuint texture;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewTextureStorage3D) {
        croak("glTextureStorage3D not available on this machine");
    };
    glTextureStorage3D(texture, levels, internalformat, width, height, depth);

SV *
glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
     GLuint texture;
     GLenum target;
     GLsizei levels;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
CODE:
    if(! __glewTextureStorage3DEXT) {
        croak("glTextureStorage3DEXT not available on this machine");
    };
    glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);

SV *
glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
     GLuint texture;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTextureStorage3DMultisample) {
        croak("glTextureStorage3DMultisample not available on this machine");
    };
    glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);

SV *
glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
     GLuint texture;
     GLenum target;
     GLsizei samples;
     GLenum internalformat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLboolean fixedsamplelocations;
CODE:
    if(! __glewTextureStorage3DMultisampleEXT) {
        croak("glTextureStorage3DMultisampleEXT not available on this machine");
    };
    glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);

SV *
glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
     GLuint texture;
     GLenum target;
     GLenum internalFormat;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLsizei layers;
     GLbitfield flags;
CODE:
    if(! __glewTextureStorageSparseAMD) {
        croak("glTextureStorageSparseAMD not available on this machine");
    };
    glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);

SV *
glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage1D) {
        croak("glTextureSubImage1D not available on this machine");
    };
    glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels);

SV *
glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage1DEXT) {
        croak("glTextureSubImage1DEXT not available on this machine");
    };
    glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);

SV *
glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage2D) {
        croak("glTextureSubImage2D not available on this machine");
    };
    glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);

SV *
glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage2DEXT) {
        croak("glTextureSubImage2DEXT not available on this machine");
    };
    glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);

SV *
glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
     GLuint texture;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage3D) {
        croak("glTextureSubImage3D not available on this machine");
    };
    glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

SV *
glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
     GLuint texture;
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint zoffset;
     GLsizei width;
     GLsizei height;
     GLsizei depth;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    if(! __glewTextureSubImage3DEXT) {
        croak("glTextureSubImage3DEXT not available on this machine");
    };
    glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

SV *
glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
     GLuint texture;
     GLenum target;
     GLuint origtexture;
     GLenum internalformat;
     GLuint minlevel;
     GLuint numlevels;
     GLuint minlayer;
     GLuint numlayers;
CODE:
    if(! __glewTextureView) {
        croak("glTextureView not available on this machine");
    };
    glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);

SV *
glTrackMatrixNV(target, address, matrix, transform);
     GLenum target;
     GLuint address;
     GLenum matrix;
     GLenum transform;
CODE:
    if(! __glewTrackMatrixNV) {
        croak("glTrackMatrixNV not available on this machine");
    };
    glTrackMatrixNV(target, address, matrix, transform);

SV *
glTransformFeedbackAttribsNV(count, attribs, bufferMode);
     GLuint count;
     const GLint *attribs;
     GLenum bufferMode;
CODE:
    if(! __glewTransformFeedbackAttribsNV) {
        croak("glTransformFeedbackAttribsNV not available on this machine");
    };
    glTransformFeedbackAttribsNV(count, attribs, bufferMode);

SV *
glTransformFeedbackBufferBase(xfb, index, buffer);
     GLuint xfb;
     GLuint index;
     GLuint buffer;
CODE:
    if(! __glewTransformFeedbackBufferBase) {
        croak("glTransformFeedbackBufferBase not available on this machine");
    };
    glTransformFeedbackBufferBase(xfb, index, buffer);

SV *
glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
     GLuint xfb;
     GLuint index;
     GLuint buffer;
     GLintptr offset;
     GLsizeiptr size;
CODE:
    if(! __glewTransformFeedbackBufferRange) {
        croak("glTransformFeedbackBufferRange not available on this machine");
    };
    glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);

SV *
glTransformFeedbackVaryings(program, count, varyings, bufferMode);
     GLuint program;
     GLsizei count;
     const GLchar *const* varyings;
     GLenum bufferMode;
CODE:
    if(! __glewTransformFeedbackVaryings) {
        croak("glTransformFeedbackVaryings not available on this machine");
    };
    glTransformFeedbackVaryings(program, count, varyings, bufferMode);

SV *
glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
     GLuint program;
     GLsizei count;
     const GLchar * const* varyings;
     GLenum bufferMode;
CODE:
    if(! __glewTransformFeedbackVaryingsEXT) {
        croak("glTransformFeedbackVaryingsEXT not available on this machine");
    };
    glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);

SV *
glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
     GLuint program;
     GLsizei count;
     const GLint *locations;
     GLenum bufferMode;
CODE:
    if(! __glewTransformFeedbackVaryingsNV) {
        croak("glTransformFeedbackVaryingsNV not available on this machine");
    };
    glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);

SV *
glTransformPathNV(resultPath, srcPath, transformType, transformValues);
     GLuint resultPath;
     GLuint srcPath;
     GLenum transformType;
     const GLfloat* transformValues;
CODE:
    if(! __glewTransformPathNV) {
        croak("glTransformPathNV not available on this machine");
    };
    glTransformPathNV(resultPath, srcPath, transformType, transformValues);

SV *
glTranslatex(x, y, z);
     GLfixed x;
     GLfixed y;
     GLfixed z;
CODE:
    if(! __glewTranslatex) {
        croak("glTranslatex not available on this machine");
    };
    glTranslatex(x, y, z);

SV *
glUniform1d(location, x);
     GLint location;
     GLdouble x;
CODE:
    if(! __glewUniform1d) {
        croak("glUniform1d not available on this machine");
    };
    glUniform1d(location, x);

SV *
glUniform1dv(location, count, value);
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewUniform1dv) {
        croak("glUniform1dv not available on this machine");
    };
    glUniform1dv(location, count, value);

SV *
glUniform1f(location, v0);
     GLint location;
     GLfloat v0;
CODE:
    if(! __glewUniform1f) {
        croak("glUniform1f not available on this machine");
    };
    glUniform1f(location, v0);

SV *
glUniform1fARB(location, v0);
     GLint location;
     GLfloat v0;
CODE:
    if(! __glewUniform1fARB) {
        croak("glUniform1fARB not available on this machine");
    };
    glUniform1fARB(location, v0);

SV *
glUniform1fv(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform1fv) {
        croak("glUniform1fv not available on this machine");
    };
    glUniform1fv(location, count, value);

SV *
glUniform1fvARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform1fvARB) {
        croak("glUniform1fvARB not available on this machine");
    };
    glUniform1fvARB(location, count, value);

SV *
glUniform1i(location, v0);
     GLint location;
     GLint v0;
CODE:
    if(! __glewUniform1i) {
        croak("glUniform1i not available on this machine");
    };
    glUniform1i(location, v0);

SV *
glUniform1i64ARB(location, x);
     GLint location;
     GLint64 x;
CODE:
    if(! __glewUniform1i64ARB) {
        croak("glUniform1i64ARB not available on this machine");
    };
    glUniform1i64ARB(location, x);

SV *
glUniform1i64NV(location, x);
     GLint location;
     GLint64EXT x;
CODE:
    if(! __glewUniform1i64NV) {
        croak("glUniform1i64NV not available on this machine");
    };
    glUniform1i64NV(location, x);

SV *
glUniform1i64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewUniform1i64vARB) {
        croak("glUniform1i64vARB not available on this machine");
    };
    glUniform1i64vARB(location, count, value);

SV *
glUniform1i64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewUniform1i64vNV) {
        croak("glUniform1i64vNV not available on this machine");
    };
    glUniform1i64vNV(location, count, value);

SV *
glUniform1iARB(location, v0);
     GLint location;
     GLint v0;
CODE:
    if(! __glewUniform1iARB) {
        croak("glUniform1iARB not available on this machine");
    };
    glUniform1iARB(location, v0);

SV *
glUniform1iv(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform1iv) {
        croak("glUniform1iv not available on this machine");
    };
    glUniform1iv(location, count, value);

SV *
glUniform1ivARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform1ivARB) {
        croak("glUniform1ivARB not available on this machine");
    };
    glUniform1ivARB(location, count, value);

SV *
glUniform1ui(location, v0);
     GLint location;
     GLuint v0;
CODE:
    if(! __glewUniform1ui) {
        croak("glUniform1ui not available on this machine");
    };
    glUniform1ui(location, v0);

SV *
glUniform1ui64ARB(location, x);
     GLint location;
     GLuint64 x;
CODE:
    if(! __glewUniform1ui64ARB) {
        croak("glUniform1ui64ARB not available on this machine");
    };
    glUniform1ui64ARB(location, x);

SV *
glUniform1ui64NV(location, x);
     GLint location;
     GLuint64EXT x;
CODE:
    if(! __glewUniform1ui64NV) {
        croak("glUniform1ui64NV not available on this machine");
    };
    glUniform1ui64NV(location, x);

SV *
glUniform1ui64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniform1ui64vARB) {
        croak("glUniform1ui64vARB not available on this machine");
    };
    glUniform1ui64vARB(location, count, value);

SV *
glUniform1ui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewUniform1ui64vNV) {
        croak("glUniform1ui64vNV not available on this machine");
    };
    glUniform1ui64vNV(location, count, value);

SV *
glUniform1uiEXT(location, v0);
     GLint location;
     GLuint v0;
CODE:
    if(! __glewUniform1uiEXT) {
        croak("glUniform1uiEXT not available on this machine");
    };
    glUniform1uiEXT(location, v0);

SV *
glUniform1uiv(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewUniform1uiv) {
        croak("glUniform1uiv not available on this machine");
    };
    glUniform1uiv(location, count, value);

SV *
glUniform1uivEXT(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint *value;
CODE:
    if(! __glewUniform1uivEXT) {
        croak("glUniform1uivEXT not available on this machine");
    };
    glUniform1uivEXT(location, count, value);

SV *
glUniform2d(location, x, y);
     GLint location;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewUniform2d) {
        croak("glUniform2d not available on this machine");
    };
    glUniform2d(location, x, y);

SV *
glUniform2dv(location, count, value);
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewUniform2dv) {
        croak("glUniform2dv not available on this machine");
    };
    glUniform2dv(location, count, value);

SV *
glUniform2f(location, v0, v1);
     GLint location;
     GLfloat v0;
     GLfloat v1;
CODE:
    if(! __glewUniform2f) {
        croak("glUniform2f not available on this machine");
    };
    glUniform2f(location, v0, v1);

SV *
glUniform2fARB(location, v0, v1);
     GLint location;
     GLfloat v0;
     GLfloat v1;
CODE:
    if(! __glewUniform2fARB) {
        croak("glUniform2fARB not available on this machine");
    };
    glUniform2fARB(location, v0, v1);

SV *
glUniform2fv(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform2fv) {
        croak("glUniform2fv not available on this machine");
    };
    glUniform2fv(location, count, value);

SV *
glUniform2fvARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform2fvARB) {
        croak("glUniform2fvARB not available on this machine");
    };
    glUniform2fvARB(location, count, value);

SV *
glUniform2i(location, v0, v1);
     GLint location;
     GLint v0;
     GLint v1;
CODE:
    if(! __glewUniform2i) {
        croak("glUniform2i not available on this machine");
    };
    glUniform2i(location, v0, v1);

SV *
glUniform2i64ARB(location, x, y);
     GLint location;
     GLint64 x;
     GLint64 y;
CODE:
    if(! __glewUniform2i64ARB) {
        croak("glUniform2i64ARB not available on this machine");
    };
    glUniform2i64ARB(location, x, y);

SV *
glUniform2i64NV(location, x, y);
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
CODE:
    if(! __glewUniform2i64NV) {
        croak("glUniform2i64NV not available on this machine");
    };
    glUniform2i64NV(location, x, y);

SV *
glUniform2i64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewUniform2i64vARB) {
        croak("glUniform2i64vARB not available on this machine");
    };
    glUniform2i64vARB(location, count, value);

SV *
glUniform2i64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewUniform2i64vNV) {
        croak("glUniform2i64vNV not available on this machine");
    };
    glUniform2i64vNV(location, count, value);

SV *
glUniform2iARB(location, v0, v1);
     GLint location;
     GLint v0;
     GLint v1;
CODE:
    if(! __glewUniform2iARB) {
        croak("glUniform2iARB not available on this machine");
    };
    glUniform2iARB(location, v0, v1);

SV *
glUniform2iv(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform2iv) {
        croak("glUniform2iv not available on this machine");
    };
    glUniform2iv(location, count, value);

SV *
glUniform2ivARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform2ivARB) {
        croak("glUniform2ivARB not available on this machine");
    };
    glUniform2ivARB(location, count, value);

SV *
glUniform2ui(location, v0, v1);
     GLint location;
     GLuint v0;
     GLuint v1;
CODE:
    if(! __glewUniform2ui) {
        croak("glUniform2ui not available on this machine");
    };
    glUniform2ui(location, v0, v1);

SV *
glUniform2ui64ARB(location, x, y);
     GLint location;
     GLuint64 x;
     GLuint64 y;
CODE:
    if(! __glewUniform2ui64ARB) {
        croak("glUniform2ui64ARB not available on this machine");
    };
    glUniform2ui64ARB(location, x, y);

SV *
glUniform2ui64NV(location, x, y);
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
CODE:
    if(! __glewUniform2ui64NV) {
        croak("glUniform2ui64NV not available on this machine");
    };
    glUniform2ui64NV(location, x, y);

SV *
glUniform2ui64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniform2ui64vARB) {
        croak("glUniform2ui64vARB not available on this machine");
    };
    glUniform2ui64vARB(location, count, value);

SV *
glUniform2ui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewUniform2ui64vNV) {
        croak("glUniform2ui64vNV not available on this machine");
    };
    glUniform2ui64vNV(location, count, value);

SV *
glUniform2uiEXT(location, v0, v1);
     GLint location;
     GLuint v0;
     GLuint v1;
CODE:
    if(! __glewUniform2uiEXT) {
        croak("glUniform2uiEXT not available on this machine");
    };
    glUniform2uiEXT(location, v0, v1);

SV *
glUniform2uiv(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewUniform2uiv) {
        croak("glUniform2uiv not available on this machine");
    };
    glUniform2uiv(location, count, value);

SV *
glUniform2uivEXT(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint *value;
CODE:
    if(! __glewUniform2uivEXT) {
        croak("glUniform2uivEXT not available on this machine");
    };
    glUniform2uivEXT(location, count, value);

SV *
glUniform3d(location, x, y, z);
     GLint location;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewUniform3d) {
        croak("glUniform3d not available on this machine");
    };
    glUniform3d(location, x, y, z);

SV *
glUniform3dv(location, count, value);
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewUniform3dv) {
        croak("glUniform3dv not available on this machine");
    };
    glUniform3dv(location, count, value);

SV *
glUniform3f(location, v0, v1, v2);
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
CODE:
    if(! __glewUniform3f) {
        croak("glUniform3f not available on this machine");
    };
    glUniform3f(location, v0, v1, v2);

SV *
glUniform3fARB(location, v0, v1, v2);
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
CODE:
    if(! __glewUniform3fARB) {
        croak("glUniform3fARB not available on this machine");
    };
    glUniform3fARB(location, v0, v1, v2);

SV *
glUniform3fv(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform3fv) {
        croak("glUniform3fv not available on this machine");
    };
    glUniform3fv(location, count, value);

SV *
glUniform3fvARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform3fvARB) {
        croak("glUniform3fvARB not available on this machine");
    };
    glUniform3fvARB(location, count, value);

SV *
glUniform3i(location, v0, v1, v2);
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
CODE:
    if(! __glewUniform3i) {
        croak("glUniform3i not available on this machine");
    };
    glUniform3i(location, v0, v1, v2);

SV *
glUniform3i64ARB(location, x, y, z);
     GLint location;
     GLint64 x;
     GLint64 y;
     GLint64 z;
CODE:
    if(! __glewUniform3i64ARB) {
        croak("glUniform3i64ARB not available on this machine");
    };
    glUniform3i64ARB(location, x, y, z);

SV *
glUniform3i64NV(location, x, y, z);
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
CODE:
    if(! __glewUniform3i64NV) {
        croak("glUniform3i64NV not available on this machine");
    };
    glUniform3i64NV(location, x, y, z);

SV *
glUniform3i64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewUniform3i64vARB) {
        croak("glUniform3i64vARB not available on this machine");
    };
    glUniform3i64vARB(location, count, value);

SV *
glUniform3i64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewUniform3i64vNV) {
        croak("glUniform3i64vNV not available on this machine");
    };
    glUniform3i64vNV(location, count, value);

SV *
glUniform3iARB(location, v0, v1, v2);
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
CODE:
    if(! __glewUniform3iARB) {
        croak("glUniform3iARB not available on this machine");
    };
    glUniform3iARB(location, v0, v1, v2);

SV *
glUniform3iv(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform3iv) {
        croak("glUniform3iv not available on this machine");
    };
    glUniform3iv(location, count, value);

SV *
glUniform3ivARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform3ivARB) {
        croak("glUniform3ivARB not available on this machine");
    };
    glUniform3ivARB(location, count, value);

SV *
glUniform3ui(location, v0, v1, v2);
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
CODE:
    if(! __glewUniform3ui) {
        croak("glUniform3ui not available on this machine");
    };
    glUniform3ui(location, v0, v1, v2);

SV *
glUniform3ui64ARB(location, x, y, z);
     GLint location;
     GLuint64 x;
     GLuint64 y;
     GLuint64 z;
CODE:
    if(! __glewUniform3ui64ARB) {
        croak("glUniform3ui64ARB not available on this machine");
    };
    glUniform3ui64ARB(location, x, y, z);

SV *
glUniform3ui64NV(location, x, y, z);
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
CODE:
    if(! __glewUniform3ui64NV) {
        croak("glUniform3ui64NV not available on this machine");
    };
    glUniform3ui64NV(location, x, y, z);

SV *
glUniform3ui64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniform3ui64vARB) {
        croak("glUniform3ui64vARB not available on this machine");
    };
    glUniform3ui64vARB(location, count, value);

SV *
glUniform3ui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewUniform3ui64vNV) {
        croak("glUniform3ui64vNV not available on this machine");
    };
    glUniform3ui64vNV(location, count, value);

SV *
glUniform3uiEXT(location, v0, v1, v2);
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
CODE:
    if(! __glewUniform3uiEXT) {
        croak("glUniform3uiEXT not available on this machine");
    };
    glUniform3uiEXT(location, v0, v1, v2);

SV *
glUniform3uiv(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewUniform3uiv) {
        croak("glUniform3uiv not available on this machine");
    };
    glUniform3uiv(location, count, value);

SV *
glUniform3uivEXT(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint *value;
CODE:
    if(! __glewUniform3uivEXT) {
        croak("glUniform3uivEXT not available on this machine");
    };
    glUniform3uivEXT(location, count, value);

SV *
glUniform4d(location, x, y, z, w);
     GLint location;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewUniform4d) {
        croak("glUniform4d not available on this machine");
    };
    glUniform4d(location, x, y, z, w);

SV *
glUniform4dv(location, count, value);
     GLint location;
     GLsizei count;
     const GLdouble* value;
CODE:
    if(! __glewUniform4dv) {
        croak("glUniform4dv not available on this machine");
    };
    glUniform4dv(location, count, value);

SV *
glUniform4f(location, v0, v1, v2, v3);
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
     GLfloat v3;
CODE:
    if(! __glewUniform4f) {
        croak("glUniform4f not available on this machine");
    };
    glUniform4f(location, v0, v1, v2, v3);

SV *
glUniform4fARB(location, v0, v1, v2, v3);
     GLint location;
     GLfloat v0;
     GLfloat v1;
     GLfloat v2;
     GLfloat v3;
CODE:
    if(! __glewUniform4fARB) {
        croak("glUniform4fARB not available on this machine");
    };
    glUniform4fARB(location, v0, v1, v2, v3);

SV *
glUniform4fv(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform4fv) {
        croak("glUniform4fv not available on this machine");
    };
    glUniform4fv(location, count, value);

SV *
glUniform4fvARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLfloat* value;
CODE:
    if(! __glewUniform4fvARB) {
        croak("glUniform4fvARB not available on this machine");
    };
    glUniform4fvARB(location, count, value);

SV *
glUniform4i(location, v0, v1, v2, v3);
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
     GLint v3;
CODE:
    if(! __glewUniform4i) {
        croak("glUniform4i not available on this machine");
    };
    glUniform4i(location, v0, v1, v2, v3);

SV *
glUniform4i64ARB(location, x, y, z, w);
     GLint location;
     GLint64 x;
     GLint64 y;
     GLint64 z;
     GLint64 w;
CODE:
    if(! __glewUniform4i64ARB) {
        croak("glUniform4i64ARB not available on this machine");
    };
    glUniform4i64ARB(location, x, y, z, w);

SV *
glUniform4i64NV(location, x, y, z, w);
     GLint location;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
     GLint64EXT w;
CODE:
    if(! __glewUniform4i64NV) {
        croak("glUniform4i64NV not available on this machine");
    };
    glUniform4i64NV(location, x, y, z, w);

SV *
glUniform4i64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64* value;
CODE:
    if(! __glewUniform4i64vARB) {
        croak("glUniform4i64vARB not available on this machine");
    };
    glUniform4i64vARB(location, count, value);

SV *
glUniform4i64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLint64EXT* value;
CODE:
    if(! __glewUniform4i64vNV) {
        croak("glUniform4i64vNV not available on this machine");
    };
    glUniform4i64vNV(location, count, value);

SV *
glUniform4iARB(location, v0, v1, v2, v3);
     GLint location;
     GLint v0;
     GLint v1;
     GLint v2;
     GLint v3;
CODE:
    if(! __glewUniform4iARB) {
        croak("glUniform4iARB not available on this machine");
    };
    glUniform4iARB(location, v0, v1, v2, v3);

SV *
glUniform4iv(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform4iv) {
        croak("glUniform4iv not available on this machine");
    };
    glUniform4iv(location, count, value);

SV *
glUniform4ivARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLint* value;
CODE:
    if(! __glewUniform4ivARB) {
        croak("glUniform4ivARB not available on this machine");
    };
    glUniform4ivARB(location, count, value);

SV *
glUniform4ui(location, v0, v1, v2, v3);
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
     GLuint v3;
CODE:
    if(! __glewUniform4ui) {
        croak("glUniform4ui not available on this machine");
    };
    glUniform4ui(location, v0, v1, v2, v3);

SV *
glUniform4ui64ARB(location, x, y, z, w);
     GLint location;
     GLuint64 x;
     GLuint64 y;
     GLuint64 z;
     GLuint64 w;
CODE:
    if(! __glewUniform4ui64ARB) {
        croak("glUniform4ui64ARB not available on this machine");
    };
    glUniform4ui64ARB(location, x, y, z, w);

SV *
glUniform4ui64NV(location, x, y, z, w);
     GLint location;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
     GLuint64EXT w;
CODE:
    if(! __glewUniform4ui64NV) {
        croak("glUniform4ui64NV not available on this machine");
    };
    glUniform4ui64NV(location, x, y, z, w);

SV *
glUniform4ui64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniform4ui64vARB) {
        croak("glUniform4ui64vARB not available on this machine");
    };
    glUniform4ui64vARB(location, count, value);

SV *
glUniform4ui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewUniform4ui64vNV) {
        croak("glUniform4ui64vNV not available on this machine");
    };
    glUniform4ui64vNV(location, count, value);

SV *
glUniform4uiEXT(location, v0, v1, v2, v3);
     GLint location;
     GLuint v0;
     GLuint v1;
     GLuint v2;
     GLuint v3;
CODE:
    if(! __glewUniform4uiEXT) {
        croak("glUniform4uiEXT not available on this machine");
    };
    glUniform4uiEXT(location, v0, v1, v2, v3);

SV *
glUniform4uiv(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint* value;
CODE:
    if(! __glewUniform4uiv) {
        croak("glUniform4uiv not available on this machine");
    };
    glUniform4uiv(location, count, value);

SV *
glUniform4uivEXT(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint *value;
CODE:
    if(! __glewUniform4uivEXT) {
        croak("glUniform4uivEXT not available on this machine");
    };
    glUniform4uivEXT(location, count, value);

SV *
glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
     GLuint program;
     GLuint uniformBlockIndex;
     GLuint uniformBlockBinding;
CODE:
    if(! __glewUniformBlockBinding) {
        croak("glUniformBlockBinding not available on this machine");
    };
    glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);

SV *
glUniformBufferEXT(program, location, buffer);
     GLuint program;
     GLint location;
     GLuint buffer;
CODE:
    if(! __glewUniformBufferEXT) {
        croak("glUniformBufferEXT not available on this machine");
    };
    glUniformBufferEXT(program, location, buffer);

SV *
glUniformHandleui64ARB(location, value);
     GLint location;
     GLuint64 value;
CODE:
    if(! __glewUniformHandleui64ARB) {
        croak("glUniformHandleui64ARB not available on this machine");
    };
    glUniformHandleui64ARB(location, value);

SV *
glUniformHandleui64NV(location, value);
     GLint location;
     GLuint64 value;
CODE:
    if(! __glewUniformHandleui64NV) {
        croak("glUniformHandleui64NV not available on this machine");
    };
    glUniformHandleui64NV(location, value);

SV *
glUniformHandleui64vARB(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniformHandleui64vARB) {
        croak("glUniformHandleui64vARB not available on this machine");
    };
    glUniformHandleui64vARB(location, count, value);

SV *
glUniformHandleui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64* value;
CODE:
    if(! __glewUniformHandleui64vNV) {
        croak("glUniformHandleui64vNV not available on this machine");
    };
    glUniformHandleui64vNV(location, count, value);

SV *
glUniformMatrix2dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix2dv) {
        croak("glUniformMatrix2dv not available on this machine");
    };
    glUniformMatrix2dv(location, count, transpose, value);

SV *
glUniformMatrix2fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix2fv) {
        croak("glUniformMatrix2fv not available on this machine");
    };
    glUniformMatrix2fv(location, count, transpose, value);

SV *
glUniformMatrix2fvARB(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix2fvARB) {
        croak("glUniformMatrix2fvARB not available on this machine");
    };
    glUniformMatrix2fvARB(location, count, transpose, value);

SV *
glUniformMatrix2x3dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix2x3dv) {
        croak("glUniformMatrix2x3dv not available on this machine");
    };
    glUniformMatrix2x3dv(location, count, transpose, value);

SV *
glUniformMatrix2x3fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix2x3fv) {
        croak("glUniformMatrix2x3fv not available on this machine");
    };
    glUniformMatrix2x3fv(location, count, transpose, value);

SV *
glUniformMatrix2x4dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix2x4dv) {
        croak("glUniformMatrix2x4dv not available on this machine");
    };
    glUniformMatrix2x4dv(location, count, transpose, value);

SV *
glUniformMatrix2x4fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix2x4fv) {
        croak("glUniformMatrix2x4fv not available on this machine");
    };
    glUniformMatrix2x4fv(location, count, transpose, value);

SV *
glUniformMatrix3dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix3dv) {
        croak("glUniformMatrix3dv not available on this machine");
    };
    glUniformMatrix3dv(location, count, transpose, value);

SV *
glUniformMatrix3fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix3fv) {
        croak("glUniformMatrix3fv not available on this machine");
    };
    glUniformMatrix3fv(location, count, transpose, value);

SV *
glUniformMatrix3fvARB(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix3fvARB) {
        croak("glUniformMatrix3fvARB not available on this machine");
    };
    glUniformMatrix3fvARB(location, count, transpose, value);

SV *
glUniformMatrix3x2dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix3x2dv) {
        croak("glUniformMatrix3x2dv not available on this machine");
    };
    glUniformMatrix3x2dv(location, count, transpose, value);

SV *
glUniformMatrix3x2fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix3x2fv) {
        croak("glUniformMatrix3x2fv not available on this machine");
    };
    glUniformMatrix3x2fv(location, count, transpose, value);

SV *
glUniformMatrix3x4dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix3x4dv) {
        croak("glUniformMatrix3x4dv not available on this machine");
    };
    glUniformMatrix3x4dv(location, count, transpose, value);

SV *
glUniformMatrix3x4fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix3x4fv) {
        croak("glUniformMatrix3x4fv not available on this machine");
    };
    glUniformMatrix3x4fv(location, count, transpose, value);

SV *
glUniformMatrix4dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix4dv) {
        croak("glUniformMatrix4dv not available on this machine");
    };
    glUniformMatrix4dv(location, count, transpose, value);

SV *
glUniformMatrix4fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix4fv) {
        croak("glUniformMatrix4fv not available on this machine");
    };
    glUniformMatrix4fv(location, count, transpose, value);

SV *
glUniformMatrix4fvARB(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat* value;
CODE:
    if(! __glewUniformMatrix4fvARB) {
        croak("glUniformMatrix4fvARB not available on this machine");
    };
    glUniformMatrix4fvARB(location, count, transpose, value);

SV *
glUniformMatrix4x2dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix4x2dv) {
        croak("glUniformMatrix4x2dv not available on this machine");
    };
    glUniformMatrix4x2dv(location, count, transpose, value);

SV *
glUniformMatrix4x2fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix4x2fv) {
        croak("glUniformMatrix4x2fv not available on this machine");
    };
    glUniformMatrix4x2fv(location, count, transpose, value);

SV *
glUniformMatrix4x3dv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLdouble* value;
CODE:
    if(! __glewUniformMatrix4x3dv) {
        croak("glUniformMatrix4x3dv not available on this machine");
    };
    glUniformMatrix4x3dv(location, count, transpose, value);

SV *
glUniformMatrix4x3fv(location, count, transpose, value);
     GLint location;
     GLsizei count;
     GLboolean transpose;
     const GLfloat *value;
CODE:
    if(! __glewUniformMatrix4x3fv) {
        croak("glUniformMatrix4x3fv not available on this machine");
    };
    glUniformMatrix4x3fv(location, count, transpose, value);

SV *
glUniformSubroutinesuiv(shadertype, count, indices);
     GLenum shadertype;
     GLsizei count;
     const GLuint* indices;
CODE:
    if(! __glewUniformSubroutinesuiv) {
        croak("glUniformSubroutinesuiv not available on this machine");
    };
    glUniformSubroutinesuiv(shadertype, count, indices);

SV *
glUniformui64NV(location, value);
     GLint location;
     GLuint64EXT value;
CODE:
    if(! __glewUniformui64NV) {
        croak("glUniformui64NV not available on this machine");
    };
    glUniformui64NV(location, value);

SV *
glUniformui64vNV(location, count, value);
     GLint location;
     GLsizei count;
     const GLuint64EXT* value;
CODE:
    if(! __glewUniformui64vNV) {
        croak("glUniformui64vNV not available on this machine");
    };
    glUniformui64vNV(location, count, value);

SV *
glUnlockArraysEXT();
CODE:
    if(! __glewUnlockArraysEXT) {
        croak("glUnlockArraysEXT not available on this machine");
    };
    glUnlockArraysEXT();

GLboolean
glUnmapBuffer(target);
     GLenum target;
CODE:
    if(! __glewUnmapBuffer) {
        croak("glUnmapBuffer not available on this machine");
    };
    RETVAL = glUnmapBuffer(target);
OUTPUT:
    RETVAL

GLboolean
glUnmapBufferARB(target);
     GLenum target;
CODE:
    if(! __glewUnmapBufferARB) {
        croak("glUnmapBufferARB not available on this machine");
    };
    RETVAL = glUnmapBufferARB(target);
OUTPUT:
    RETVAL

GLboolean
glUnmapNamedBuffer(buffer);
     GLuint buffer;
CODE:
    if(! __glewUnmapNamedBuffer) {
        croak("glUnmapNamedBuffer not available on this machine");
    };
    RETVAL = glUnmapNamedBuffer(buffer);
OUTPUT:
    RETVAL

GLboolean
glUnmapNamedBufferEXT(buffer);
     GLuint buffer;
CODE:
    if(! __glewUnmapNamedBufferEXT) {
        croak("glUnmapNamedBufferEXT not available on this machine");
    };
    RETVAL = glUnmapNamedBufferEXT(buffer);
OUTPUT:
    RETVAL

SV *
glUnmapObjectBufferATI(buffer);
     GLuint buffer;
CODE:
    if(! __glewUnmapObjectBufferATI) {
        croak("glUnmapObjectBufferATI not available on this machine");
    };
    glUnmapObjectBufferATI(buffer);

SV *
glUnmapTexture2DINTEL(texture, level);
     GLuint texture;
     GLint level;
CODE:
    if(! __glewUnmapTexture2DINTEL) {
        croak("glUnmapTexture2DINTEL not available on this machine");
    };
    glUnmapTexture2DINTEL(texture, level);

SV *
glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
     GLuint buffer;
     GLuint offset;
     GLsizei size;
     const void *pointer;
     GLenum preserve;
CODE:
    if(! __glewUpdateObjectBufferATI) {
        croak("glUpdateObjectBufferATI not available on this machine");
    };
    glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);

SV *
glUseProgram(program);
     GLuint program;
CODE:
    if(! __glewUseProgram) {
        croak("glUseProgram not available on this machine");
    };
    glUseProgram(program);

SV *
glUseProgramObjectARB(programObj);
     GLhandleARB programObj;
CODE:
    if(! __glewUseProgramObjectARB) {
        croak("glUseProgramObjectARB not available on this machine");
    };
    glUseProgramObjectARB(programObj);

SV *
glUseProgramStages(pipeline, stages, program);
     GLuint pipeline;
     GLbitfield stages;
     GLuint program;
CODE:
    if(! __glewUseProgramStages) {
        croak("glUseProgramStages not available on this machine");
    };
    glUseProgramStages(pipeline, stages, program);

SV *
glUseShaderProgramEXT(type, program);
     GLenum type;
     GLuint program;
CODE:
    if(! __glewUseShaderProgramEXT) {
        croak("glUseShaderProgramEXT not available on this machine");
    };
    glUseShaderProgramEXT(type, program);

SV *
glValidateProgram(program);
     GLuint program;
CODE:
    if(! __glewValidateProgram) {
        croak("glValidateProgram not available on this machine");
    };
    glValidateProgram(program);

SV *
glValidateProgramARB(programObj);
     GLhandleARB programObj;
CODE:
    if(! __glewValidateProgramARB) {
        croak("glValidateProgramARB not available on this machine");
    };
    glValidateProgramARB(programObj);

SV *
glValidateProgramPipeline(pipeline);
     GLuint pipeline;
CODE:
    if(! __glewValidateProgramPipeline) {
        croak("glValidateProgramPipeline not available on this machine");
    };
    glValidateProgramPipeline(pipeline);

SV *
glVariantArrayObjectATI(id, type, stride, buffer, offset);
     GLuint id;
     GLenum type;
     GLsizei stride;
     GLuint buffer;
     GLuint offset;
CODE:
    if(! __glewVariantArrayObjectATI) {
        croak("glVariantArrayObjectATI not available on this machine");
    };
    glVariantArrayObjectATI(id, type, stride, buffer, offset);

SV *
glVariantbvEXT(id, addr);
     GLuint id;
     GLbyte *addr;
CODE:
    if(! __glewVariantbvEXT) {
        croak("glVariantbvEXT not available on this machine");
    };
    glVariantbvEXT(id, addr);

SV *
glVariantdvEXT(id, addr);
     GLuint id;
     GLdouble *addr;
CODE:
    if(! __glewVariantdvEXT) {
        croak("glVariantdvEXT not available on this machine");
    };
    glVariantdvEXT(id, addr);

SV *
glVariantfvEXT(id, addr);
     GLuint id;
     GLfloat *addr;
CODE:
    if(! __glewVariantfvEXT) {
        croak("glVariantfvEXT not available on this machine");
    };
    glVariantfvEXT(id, addr);

SV *
glVariantivEXT(id, addr);
     GLuint id;
     GLint *addr;
CODE:
    if(! __glewVariantivEXT) {
        croak("glVariantivEXT not available on this machine");
    };
    glVariantivEXT(id, addr);

SV *
glVariantPointerEXT(id, type, stride, addr);
     GLuint id;
     GLenum type;
     GLuint stride;
     void *addr;
CODE:
    if(! __glewVariantPointerEXT) {
        croak("glVariantPointerEXT not available on this machine");
    };
    glVariantPointerEXT(id, type, stride, addr);

SV *
glVariantsvEXT(id, addr);
     GLuint id;
     GLshort *addr;
CODE:
    if(! __glewVariantsvEXT) {
        croak("glVariantsvEXT not available on this machine");
    };
    glVariantsvEXT(id, addr);

SV *
glVariantubvEXT(id, addr);
     GLuint id;
     GLubyte *addr;
CODE:
    if(! __glewVariantubvEXT) {
        croak("glVariantubvEXT not available on this machine");
    };
    glVariantubvEXT(id, addr);

SV *
glVariantuivEXT(id, addr);
     GLuint id;
     GLuint *addr;
CODE:
    if(! __glewVariantuivEXT) {
        croak("glVariantuivEXT not available on this machine");
    };
    glVariantuivEXT(id, addr);

SV *
glVariantusvEXT(id, addr);
     GLuint id;
     GLushort *addr;
CODE:
    if(! __glewVariantusvEXT) {
        croak("glVariantusvEXT not available on this machine");
    };
    glVariantusvEXT(id, addr);

SV *
glVDPAUFiniNV();
CODE:
    if(! __glewVDPAUFiniNV) {
        croak("glVDPAUFiniNV not available on this machine");
    };
    glVDPAUFiniNV();

SV *
glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
     GLvdpauSurfaceNV surface;
     GLenum pname;
     GLsizei bufSize;
     GLsizei* length;
     GLint *values;
CODE:
    if(! __glewVDPAUGetSurfaceivNV) {
        croak("glVDPAUGetSurfaceivNV not available on this machine");
    };
    glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);

SV *
glVDPAUInitNV(vdpDevice, getProcAddress);
     const void* vdpDevice;
     const void*getProcAddress;
CODE:
    if(! __glewVDPAUInitNV) {
        croak("glVDPAUInitNV not available on this machine");
    };
    glVDPAUInitNV(vdpDevice, getProcAddress);

SV *
glVDPAUIsSurfaceNV(surface);
     GLvdpauSurfaceNV surface;
CODE:
    if(! __glewVDPAUIsSurfaceNV) {
        croak("glVDPAUIsSurfaceNV not available on this machine");
    };
    glVDPAUIsSurfaceNV(surface);

SV *
glVDPAUMapSurfacesNV(numSurfaces, surfaces);
     GLsizei numSurfaces;
     const GLvdpauSurfaceNV* surfaces;
CODE:
    if(! __glewVDPAUMapSurfacesNV) {
        croak("glVDPAUMapSurfacesNV not available on this machine");
    };
    glVDPAUMapSurfacesNV(numSurfaces, surfaces);

GLvdpauSurfaceNV
glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
     const void* vdpSurface;
     GLenum target;
     GLsizei numTextureNames;
     const GLuint *textureNames;
CODE:
    if(! __glewVDPAURegisterOutputSurfaceNV) {
        croak("glVDPAURegisterOutputSurfaceNV not available on this machine");
    };
    RETVAL = glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
OUTPUT:
    RETVAL

GLvdpauSurfaceNV
glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
     const void* vdpSurface;
     GLenum target;
     GLsizei numTextureNames;
     const GLuint *textureNames;
CODE:
    if(! __glewVDPAURegisterVideoSurfaceNV) {
        croak("glVDPAURegisterVideoSurfaceNV not available on this machine");
    };
    RETVAL = glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
OUTPUT:
    RETVAL

SV *
glVDPAUSurfaceAccessNV(surface, access);
     GLvdpauSurfaceNV surface;
     GLenum access;
CODE:
    if(! __glewVDPAUSurfaceAccessNV) {
        croak("glVDPAUSurfaceAccessNV not available on this machine");
    };
    glVDPAUSurfaceAccessNV(surface, access);

SV *
glVDPAUUnmapSurfacesNV(numSurface, surfaces);
     GLsizei numSurface;
     const GLvdpauSurfaceNV* surfaces;
CODE:
    if(! __glewVDPAUUnmapSurfacesNV) {
        croak("glVDPAUUnmapSurfacesNV not available on this machine");
    };
    glVDPAUUnmapSurfacesNV(numSurface, surfaces);

SV *
glVDPAUUnregisterSurfaceNV(surface);
     GLvdpauSurfaceNV surface;
CODE:
    if(! __glewVDPAUUnregisterSurfaceNV) {
        croak("glVDPAUUnregisterSurfaceNV not available on this machine");
    };
    glVDPAUUnregisterSurfaceNV(surface);

SV *
glVertex2hNV(x, y);
     GLhalf x;
     GLhalf y;
CODE:
    if(! __glewVertex2hNV) {
        croak("glVertex2hNV not available on this machine");
    };
    glVertex2hNV(x, y);

SV *
glVertex2hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewVertex2hvNV) {
        croak("glVertex2hvNV not available on this machine");
    };
    glVertex2hvNV(v);

SV *
glVertex3hNV(x, y, z);
     GLhalf x;
     GLhalf y;
     GLhalf z;
CODE:
    if(! __glewVertex3hNV) {
        croak("glVertex3hNV not available on this machine");
    };
    glVertex3hNV(x, y, z);

SV *
glVertex3hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewVertex3hvNV) {
        croak("glVertex3hvNV not available on this machine");
    };
    glVertex3hvNV(v);

SV *
glVertex4hNV(x, y, z, w);
     GLhalf x;
     GLhalf y;
     GLhalf z;
     GLhalf w;
CODE:
    if(! __glewVertex4hNV) {
        croak("glVertex4hNV not available on this machine");
    };
    glVertex4hNV(x, y, z, w);

SV *
glVertex4hvNV(v);
     const GLhalf* v;
CODE:
    if(! __glewVertex4hvNV) {
        croak("glVertex4hvNV not available on this machine");
    };
    glVertex4hvNV(v);

SV *
glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
     GLuint vaobj;
     GLuint attribindex;
     GLuint bindingindex;
CODE:
    if(! __glewVertexArrayAttribBinding) {
        croak("glVertexArrayAttribBinding not available on this machine");
    };
    glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);

SV *
glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayAttribFormat) {
        croak("glVertexArrayAttribFormat not available on this machine");
    };
    glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);

SV *
glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayAttribIFormat) {
        croak("glVertexArrayAttribIFormat not available on this machine");
    };
    glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);

SV *
glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayAttribLFormat) {
        croak("glVertexArrayAttribLFormat not available on this machine");
    };
    glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);

SV *
glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
     GLuint vaobj;
     GLuint bindingindex;
     GLuint divisor;
CODE:
    if(! __glewVertexArrayBindingDivisor) {
        croak("glVertexArrayBindingDivisor not available on this machine");
    };
    glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);

SV *
glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
     GLuint vaobj;
     GLuint bindingindex;
     GLuint buffer;
     GLintptr offset;
     GLsizei stride;
CODE:
    if(! __glewVertexArrayBindVertexBufferEXT) {
        croak("glVertexArrayBindVertexBufferEXT not available on this machine");
    };
    glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);

SV *
glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayColorOffsetEXT) {
        croak("glVertexArrayColorOffsetEXT not available on this machine");
    };
    glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);

SV *
glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayEdgeFlagOffsetEXT) {
        croak("glVertexArrayEdgeFlagOffsetEXT not available on this machine");
    };
    glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);

SV *
glVertexArrayElementBuffer(vaobj, buffer);
     GLuint vaobj;
     GLuint buffer;
CODE:
    if(! __glewVertexArrayElementBuffer) {
        croak("glVertexArrayElementBuffer not available on this machine");
    };
    glVertexArrayElementBuffer(vaobj, buffer);

SV *
glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayFogCoordOffsetEXT) {
        croak("glVertexArrayFogCoordOffsetEXT not available on this machine");
    };
    glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);

SV *
glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayIndexOffsetEXT) {
        croak("glVertexArrayIndexOffsetEXT not available on this machine");
    };
    glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);

SV *
glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLenum texunit;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayMultiTexCoordOffsetEXT) {
        croak("glVertexArrayMultiTexCoordOffsetEXT not available on this machine");
    };
    glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);

SV *
glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayNormalOffsetEXT) {
        croak("glVertexArrayNormalOffsetEXT not available on this machine");
    };
    glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);

SV *
glVertexArrayParameteriAPPLE(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewVertexArrayParameteriAPPLE) {
        croak("glVertexArrayParameteriAPPLE not available on this machine");
    };
    glVertexArrayParameteriAPPLE(pname, param);

SV *
glVertexArrayRangeAPPLE(length, pointer);
     GLsizei length;
     void *pointer;
CODE:
    if(! __glewVertexArrayRangeAPPLE) {
        croak("glVertexArrayRangeAPPLE not available on this machine");
    };
    glVertexArrayRangeAPPLE(length, pointer);

SV *
glVertexArrayRangeNV(length, pointer);
     GLsizei length;
     void *pointer;
CODE:
    if(! __glewVertexArrayRangeNV) {
        croak("glVertexArrayRangeNV not available on this machine");
    };
    glVertexArrayRangeNV(length, pointer);

SV *
glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArraySecondaryColorOffsetEXT) {
        croak("glVertexArraySecondaryColorOffsetEXT not available on this machine");
    };
    glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);

SV *
glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayTexCoordOffsetEXT) {
        croak("glVertexArrayTexCoordOffsetEXT not available on this machine");
    };
    glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);

SV *
glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
     GLuint vaobj;
     GLuint attribindex;
     GLuint bindingindex;
CODE:
    if(! __glewVertexArrayVertexAttribBindingEXT) {
        croak("glVertexArrayVertexAttribBindingEXT not available on this machine");
    };
    glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);

SV *
glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
     GLuint vaobj;
     GLuint index;
     GLuint divisor;
CODE:
    if(! __glewVertexArrayVertexAttribDivisorEXT) {
        croak("glVertexArrayVertexAttribDivisorEXT not available on this machine");
    };
    glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);

SV *
glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayVertexAttribFormatEXT) {
        croak("glVertexArrayVertexAttribFormatEXT not available on this machine");
    };
    glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);

SV *
glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayVertexAttribIFormatEXT) {
        croak("glVertexArrayVertexAttribIFormatEXT not available on this machine");
    };
    glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);

SV *
glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayVertexAttribIOffsetEXT) {
        croak("glVertexArrayVertexAttribIOffsetEXT not available on this machine");
    };
    glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);

SV *
glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
     GLuint vaobj;
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexArrayVertexAttribLFormatEXT) {
        croak("glVertexArrayVertexAttribLFormatEXT not available on this machine");
    };
    glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);

SV *
glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayVertexAttribLOffsetEXT) {
        croak("glVertexArrayVertexAttribLOffsetEXT not available on this machine");
    };
    glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);

SV *
glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLuint index;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayVertexAttribOffsetEXT) {
        croak("glVertexArrayVertexAttribOffsetEXT not available on this machine");
    };
    glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);

SV *
glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
     GLuint vaobj;
     GLuint bindingindex;
     GLuint divisor;
CODE:
    if(! __glewVertexArrayVertexBindingDivisorEXT) {
        croak("glVertexArrayVertexBindingDivisorEXT not available on this machine");
    };
    glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);

SV *
glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
     GLuint vaobj;
     GLuint bindingindex;
     GLuint buffer;
     GLintptr offset;
     GLsizei stride;
CODE:
    if(! __glewVertexArrayVertexBuffer) {
        croak("glVertexArrayVertexBuffer not available on this machine");
    };
    glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);

SV *
glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
     GLuint vaobj;
     GLuint first;
     GLsizei count;
     const GLuint* buffers;
     const GLintptr *offsets;
     const GLsizei *strides;
CODE:
    if(! __glewVertexArrayVertexBuffers) {
        croak("glVertexArrayVertexBuffers not available on this machine");
    };
    glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);

SV *
glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
     GLuint vaobj;
     GLuint buffer;
     GLint size;
     GLenum type;
     GLsizei stride;
     GLintptr offset;
CODE:
    if(! __glewVertexArrayVertexOffsetEXT) {
        croak("glVertexArrayVertexOffsetEXT not available on this machine");
    };
    glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);

SV *
glVertexAttrib1d(index, x);
     GLuint index;
     GLdouble x;
CODE:
    if(! __glewVertexAttrib1d) {
        croak("glVertexAttrib1d not available on this machine");
    };
    glVertexAttrib1d(index, x);

SV *
glVertexAttrib1dARB(index, x);
     GLuint index;
     GLdouble x;
CODE:
    if(! __glewVertexAttrib1dARB) {
        croak("glVertexAttrib1dARB not available on this machine");
    };
    glVertexAttrib1dARB(index, x);

SV *
glVertexAttrib1dNV(index, x);
     GLuint index;
     GLdouble x;
CODE:
    if(! __glewVertexAttrib1dNV) {
        croak("glVertexAttrib1dNV not available on this machine");
    };
    glVertexAttrib1dNV(index, x);

SV *
glVertexAttrib1dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib1dv) {
        croak("glVertexAttrib1dv not available on this machine");
    };
    glVertexAttrib1dv(index, v);

SV *
glVertexAttrib1dvARB(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib1dvARB) {
        croak("glVertexAttrib1dvARB not available on this machine");
    };
    glVertexAttrib1dvARB(index, v);

SV *
glVertexAttrib1dvNV(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib1dvNV) {
        croak("glVertexAttrib1dvNV not available on this machine");
    };
    glVertexAttrib1dvNV(index, v);

SV *
glVertexAttrib1f(index, x);
     GLuint index;
     GLfloat x;
CODE:
    if(! __glewVertexAttrib1f) {
        croak("glVertexAttrib1f not available on this machine");
    };
    glVertexAttrib1f(index, x);

SV *
glVertexAttrib1fARB(index, x);
     GLuint index;
     GLfloat x;
CODE:
    if(! __glewVertexAttrib1fARB) {
        croak("glVertexAttrib1fARB not available on this machine");
    };
    glVertexAttrib1fARB(index, x);

SV *
glVertexAttrib1fNV(index, x);
     GLuint index;
     GLfloat x;
CODE:
    if(! __glewVertexAttrib1fNV) {
        croak("glVertexAttrib1fNV not available on this machine");
    };
    glVertexAttrib1fNV(index, x);

SV *
glVertexAttrib1fv(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib1fv) {
        croak("glVertexAttrib1fv not available on this machine");
    };
    glVertexAttrib1fv(index, v);

SV *
glVertexAttrib1fvARB(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib1fvARB) {
        croak("glVertexAttrib1fvARB not available on this machine");
    };
    glVertexAttrib1fvARB(index, v);

SV *
glVertexAttrib1fvNV(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib1fvNV) {
        croak("glVertexAttrib1fvNV not available on this machine");
    };
    glVertexAttrib1fvNV(index, v);

SV *
glVertexAttrib1hNV(index, x);
     GLuint index;
     GLhalf x;
CODE:
    if(! __glewVertexAttrib1hNV) {
        croak("glVertexAttrib1hNV not available on this machine");
    };
    glVertexAttrib1hNV(index, x);

SV *
glVertexAttrib1hvNV(index, v);
     GLuint index;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttrib1hvNV) {
        croak("glVertexAttrib1hvNV not available on this machine");
    };
    glVertexAttrib1hvNV(index, v);

SV *
glVertexAttrib1s(index, x);
     GLuint index;
     GLshort x;
CODE:
    if(! __glewVertexAttrib1s) {
        croak("glVertexAttrib1s not available on this machine");
    };
    glVertexAttrib1s(index, x);

SV *
glVertexAttrib1sARB(index, x);
     GLuint index;
     GLshort x;
CODE:
    if(! __glewVertexAttrib1sARB) {
        croak("glVertexAttrib1sARB not available on this machine");
    };
    glVertexAttrib1sARB(index, x);

SV *
glVertexAttrib1sNV(index, x);
     GLuint index;
     GLshort x;
CODE:
    if(! __glewVertexAttrib1sNV) {
        croak("glVertexAttrib1sNV not available on this machine");
    };
    glVertexAttrib1sNV(index, x);

SV *
glVertexAttrib1sv(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib1sv) {
        croak("glVertexAttrib1sv not available on this machine");
    };
    glVertexAttrib1sv(index, v);

SV *
glVertexAttrib1svARB(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib1svARB) {
        croak("glVertexAttrib1svARB not available on this machine");
    };
    glVertexAttrib1svARB(index, v);

SV *
glVertexAttrib1svNV(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib1svNV) {
        croak("glVertexAttrib1svNV not available on this machine");
    };
    glVertexAttrib1svNV(index, v);

SV *
glVertexAttrib2d(index, x, y);
     GLuint index;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexAttrib2d) {
        croak("glVertexAttrib2d not available on this machine");
    };
    glVertexAttrib2d(index, x, y);

SV *
glVertexAttrib2dARB(index, x, y);
     GLuint index;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexAttrib2dARB) {
        croak("glVertexAttrib2dARB not available on this machine");
    };
    glVertexAttrib2dARB(index, x, y);

SV *
glVertexAttrib2dNV(index, x, y);
     GLuint index;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexAttrib2dNV) {
        croak("glVertexAttrib2dNV not available on this machine");
    };
    glVertexAttrib2dNV(index, x, y);

SV *
glVertexAttrib2dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib2dv) {
        croak("glVertexAttrib2dv not available on this machine");
    };
    glVertexAttrib2dv(index, v);

SV *
glVertexAttrib2dvARB(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib2dvARB) {
        croak("glVertexAttrib2dvARB not available on this machine");
    };
    glVertexAttrib2dvARB(index, v);

SV *
glVertexAttrib2dvNV(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib2dvNV) {
        croak("glVertexAttrib2dvNV not available on this machine");
    };
    glVertexAttrib2dvNV(index, v);

SV *
glVertexAttrib2f(index, x, y);
     GLuint index;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewVertexAttrib2f) {
        croak("glVertexAttrib2f not available on this machine");
    };
    glVertexAttrib2f(index, x, y);

SV *
glVertexAttrib2fARB(index, x, y);
     GLuint index;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewVertexAttrib2fARB) {
        croak("glVertexAttrib2fARB not available on this machine");
    };
    glVertexAttrib2fARB(index, x, y);

SV *
glVertexAttrib2fNV(index, x, y);
     GLuint index;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewVertexAttrib2fNV) {
        croak("glVertexAttrib2fNV not available on this machine");
    };
    glVertexAttrib2fNV(index, x, y);

SV *
glVertexAttrib2fv(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib2fv) {
        croak("glVertexAttrib2fv not available on this machine");
    };
    glVertexAttrib2fv(index, v);

SV *
glVertexAttrib2fvARB(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib2fvARB) {
        croak("glVertexAttrib2fvARB not available on this machine");
    };
    glVertexAttrib2fvARB(index, v);

SV *
glVertexAttrib2fvNV(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib2fvNV) {
        croak("glVertexAttrib2fvNV not available on this machine");
    };
    glVertexAttrib2fvNV(index, v);

SV *
glVertexAttrib2hNV(index, x, y);
     GLuint index;
     GLhalf x;
     GLhalf y;
CODE:
    if(! __glewVertexAttrib2hNV) {
        croak("glVertexAttrib2hNV not available on this machine");
    };
    glVertexAttrib2hNV(index, x, y);

SV *
glVertexAttrib2hvNV(index, v);
     GLuint index;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttrib2hvNV) {
        croak("glVertexAttrib2hvNV not available on this machine");
    };
    glVertexAttrib2hvNV(index, v);

SV *
glVertexAttrib2s(index, x, y);
     GLuint index;
     GLshort x;
     GLshort y;
CODE:
    if(! __glewVertexAttrib2s) {
        croak("glVertexAttrib2s not available on this machine");
    };
    glVertexAttrib2s(index, x, y);

SV *
glVertexAttrib2sARB(index, x, y);
     GLuint index;
     GLshort x;
     GLshort y;
CODE:
    if(! __glewVertexAttrib2sARB) {
        croak("glVertexAttrib2sARB not available on this machine");
    };
    glVertexAttrib2sARB(index, x, y);

SV *
glVertexAttrib2sNV(index, x, y);
     GLuint index;
     GLshort x;
     GLshort y;
CODE:
    if(! __glewVertexAttrib2sNV) {
        croak("glVertexAttrib2sNV not available on this machine");
    };
    glVertexAttrib2sNV(index, x, y);

SV *
glVertexAttrib2sv(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib2sv) {
        croak("glVertexAttrib2sv not available on this machine");
    };
    glVertexAttrib2sv(index, v);

SV *
glVertexAttrib2svARB(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib2svARB) {
        croak("glVertexAttrib2svARB not available on this machine");
    };
    glVertexAttrib2svARB(index, v);

SV *
glVertexAttrib2svNV(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib2svNV) {
        croak("glVertexAttrib2svNV not available on this machine");
    };
    glVertexAttrib2svNV(index, v);

SV *
glVertexAttrib3d(index, x, y, z);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexAttrib3d) {
        croak("glVertexAttrib3d not available on this machine");
    };
    glVertexAttrib3d(index, x, y, z);

SV *
glVertexAttrib3dARB(index, x, y, z);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexAttrib3dARB) {
        croak("glVertexAttrib3dARB not available on this machine");
    };
    glVertexAttrib3dARB(index, x, y, z);

SV *
glVertexAttrib3dNV(index, x, y, z);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexAttrib3dNV) {
        croak("glVertexAttrib3dNV not available on this machine");
    };
    glVertexAttrib3dNV(index, x, y, z);

SV *
glVertexAttrib3dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib3dv) {
        croak("glVertexAttrib3dv not available on this machine");
    };
    glVertexAttrib3dv(index, v);

SV *
glVertexAttrib3dvARB(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib3dvARB) {
        croak("glVertexAttrib3dvARB not available on this machine");
    };
    glVertexAttrib3dvARB(index, v);

SV *
glVertexAttrib3dvNV(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib3dvNV) {
        croak("glVertexAttrib3dvNV not available on this machine");
    };
    glVertexAttrib3dvNV(index, v);

SV *
glVertexAttrib3f(index, x, y, z);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewVertexAttrib3f) {
        croak("glVertexAttrib3f not available on this machine");
    };
    glVertexAttrib3f(index, x, y, z);

SV *
glVertexAttrib3fARB(index, x, y, z);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewVertexAttrib3fARB) {
        croak("glVertexAttrib3fARB not available on this machine");
    };
    glVertexAttrib3fARB(index, x, y, z);

SV *
glVertexAttrib3fNV(index, x, y, z);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewVertexAttrib3fNV) {
        croak("glVertexAttrib3fNV not available on this machine");
    };
    glVertexAttrib3fNV(index, x, y, z);

SV *
glVertexAttrib3fv(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib3fv) {
        croak("glVertexAttrib3fv not available on this machine");
    };
    glVertexAttrib3fv(index, v);

SV *
glVertexAttrib3fvARB(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib3fvARB) {
        croak("glVertexAttrib3fvARB not available on this machine");
    };
    glVertexAttrib3fvARB(index, v);

SV *
glVertexAttrib3fvNV(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib3fvNV) {
        croak("glVertexAttrib3fvNV not available on this machine");
    };
    glVertexAttrib3fvNV(index, v);

SV *
glVertexAttrib3hNV(index, x, y, z);
     GLuint index;
     GLhalf x;
     GLhalf y;
     GLhalf z;
CODE:
    if(! __glewVertexAttrib3hNV) {
        croak("glVertexAttrib3hNV not available on this machine");
    };
    glVertexAttrib3hNV(index, x, y, z);

SV *
glVertexAttrib3hvNV(index, v);
     GLuint index;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttrib3hvNV) {
        croak("glVertexAttrib3hvNV not available on this machine");
    };
    glVertexAttrib3hvNV(index, v);

SV *
glVertexAttrib3s(index, x, y, z);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewVertexAttrib3s) {
        croak("glVertexAttrib3s not available on this machine");
    };
    glVertexAttrib3s(index, x, y, z);

SV *
glVertexAttrib3sARB(index, x, y, z);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewVertexAttrib3sARB) {
        croak("glVertexAttrib3sARB not available on this machine");
    };
    glVertexAttrib3sARB(index, x, y, z);

SV *
glVertexAttrib3sNV(index, x, y, z);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewVertexAttrib3sNV) {
        croak("glVertexAttrib3sNV not available on this machine");
    };
    glVertexAttrib3sNV(index, x, y, z);

SV *
glVertexAttrib3sv(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib3sv) {
        croak("glVertexAttrib3sv not available on this machine");
    };
    glVertexAttrib3sv(index, v);

SV *
glVertexAttrib3svARB(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib3svARB) {
        croak("glVertexAttrib3svARB not available on this machine");
    };
    glVertexAttrib3svARB(index, v);

SV *
glVertexAttrib3svNV(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib3svNV) {
        croak("glVertexAttrib3svNV not available on this machine");
    };
    glVertexAttrib3svNV(index, v);

SV *
glVertexAttrib4bv(index, v);
     GLuint index;
     const GLbyte* v;
CODE:
    if(! __glewVertexAttrib4bv) {
        croak("glVertexAttrib4bv not available on this machine");
    };
    glVertexAttrib4bv(index, v);

SV *
glVertexAttrib4bvARB(index, v);
     GLuint index;
     const GLbyte* v;
CODE:
    if(! __glewVertexAttrib4bvARB) {
        croak("glVertexAttrib4bvARB not available on this machine");
    };
    glVertexAttrib4bvARB(index, v);

SV *
glVertexAttrib4d(index, x, y, z, w);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexAttrib4d) {
        croak("glVertexAttrib4d not available on this machine");
    };
    glVertexAttrib4d(index, x, y, z, w);

SV *
glVertexAttrib4dARB(index, x, y, z, w);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexAttrib4dARB) {
        croak("glVertexAttrib4dARB not available on this machine");
    };
    glVertexAttrib4dARB(index, x, y, z, w);

SV *
glVertexAttrib4dNV(index, x, y, z, w);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexAttrib4dNV) {
        croak("glVertexAttrib4dNV not available on this machine");
    };
    glVertexAttrib4dNV(index, x, y, z, w);

SV *
glVertexAttrib4dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib4dv) {
        croak("glVertexAttrib4dv not available on this machine");
    };
    glVertexAttrib4dv(index, v);

SV *
glVertexAttrib4dvARB(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib4dvARB) {
        croak("glVertexAttrib4dvARB not available on this machine");
    };
    glVertexAttrib4dvARB(index, v);

SV *
glVertexAttrib4dvNV(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttrib4dvNV) {
        croak("glVertexAttrib4dvNV not available on this machine");
    };
    glVertexAttrib4dvNV(index, v);

SV *
glVertexAttrib4f(index, x, y, z, w);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewVertexAttrib4f) {
        croak("glVertexAttrib4f not available on this machine");
    };
    glVertexAttrib4f(index, x, y, z, w);

SV *
glVertexAttrib4fARB(index, x, y, z, w);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewVertexAttrib4fARB) {
        croak("glVertexAttrib4fARB not available on this machine");
    };
    glVertexAttrib4fARB(index, x, y, z, w);

SV *
glVertexAttrib4fNV(index, x, y, z, w);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewVertexAttrib4fNV) {
        croak("glVertexAttrib4fNV not available on this machine");
    };
    glVertexAttrib4fNV(index, x, y, z, w);

SV *
glVertexAttrib4fv(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib4fv) {
        croak("glVertexAttrib4fv not available on this machine");
    };
    glVertexAttrib4fv(index, v);

SV *
glVertexAttrib4fvARB(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib4fvARB) {
        croak("glVertexAttrib4fvARB not available on this machine");
    };
    glVertexAttrib4fvARB(index, v);

SV *
glVertexAttrib4fvNV(index, v);
     GLuint index;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttrib4fvNV) {
        croak("glVertexAttrib4fvNV not available on this machine");
    };
    glVertexAttrib4fvNV(index, v);

SV *
glVertexAttrib4hNV(index, x, y, z, w);
     GLuint index;
     GLhalf x;
     GLhalf y;
     GLhalf z;
     GLhalf w;
CODE:
    if(! __glewVertexAttrib4hNV) {
        croak("glVertexAttrib4hNV not available on this machine");
    };
    glVertexAttrib4hNV(index, x, y, z, w);

SV *
glVertexAttrib4hvNV(index, v);
     GLuint index;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttrib4hvNV) {
        croak("glVertexAttrib4hvNV not available on this machine");
    };
    glVertexAttrib4hvNV(index, v);

SV *
glVertexAttrib4iv(index, v);
     GLuint index;
     const GLint* v;
CODE:
    if(! __glewVertexAttrib4iv) {
        croak("glVertexAttrib4iv not available on this machine");
    };
    glVertexAttrib4iv(index, v);

SV *
glVertexAttrib4ivARB(index, v);
     GLuint index;
     const GLint* v;
CODE:
    if(! __glewVertexAttrib4ivARB) {
        croak("glVertexAttrib4ivARB not available on this machine");
    };
    glVertexAttrib4ivARB(index, v);

SV *
glVertexAttrib4Nbv(index, v);
     GLuint index;
     const GLbyte* v;
CODE:
    if(! __glewVertexAttrib4Nbv) {
        croak("glVertexAttrib4Nbv not available on this machine");
    };
    glVertexAttrib4Nbv(index, v);

SV *
glVertexAttrib4NbvARB(index, v);
     GLuint index;
     const GLbyte* v;
CODE:
    if(! __glewVertexAttrib4NbvARB) {
        croak("glVertexAttrib4NbvARB not available on this machine");
    };
    glVertexAttrib4NbvARB(index, v);

SV *
glVertexAttrib4Niv(index, v);
     GLuint index;
     const GLint* v;
CODE:
    if(! __glewVertexAttrib4Niv) {
        croak("glVertexAttrib4Niv not available on this machine");
    };
    glVertexAttrib4Niv(index, v);

SV *
glVertexAttrib4NivARB(index, v);
     GLuint index;
     const GLint* v;
CODE:
    if(! __glewVertexAttrib4NivARB) {
        croak("glVertexAttrib4NivARB not available on this machine");
    };
    glVertexAttrib4NivARB(index, v);

SV *
glVertexAttrib4Nsv(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib4Nsv) {
        croak("glVertexAttrib4Nsv not available on this machine");
    };
    glVertexAttrib4Nsv(index, v);

SV *
glVertexAttrib4NsvARB(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib4NsvARB) {
        croak("glVertexAttrib4NsvARB not available on this machine");
    };
    glVertexAttrib4NsvARB(index, v);

SV *
glVertexAttrib4Nub(index, x, y, z, w);
     GLuint index;
     GLubyte x;
     GLubyte y;
     GLubyte z;
     GLubyte w;
CODE:
    if(! __glewVertexAttrib4Nub) {
        croak("glVertexAttrib4Nub not available on this machine");
    };
    glVertexAttrib4Nub(index, x, y, z, w);

SV *
glVertexAttrib4NubARB(index, x, y, z, w);
     GLuint index;
     GLubyte x;
     GLubyte y;
     GLubyte z;
     GLubyte w;
CODE:
    if(! __glewVertexAttrib4NubARB) {
        croak("glVertexAttrib4NubARB not available on this machine");
    };
    glVertexAttrib4NubARB(index, x, y, z, w);

SV *
glVertexAttrib4Nubv(index, v);
     GLuint index;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttrib4Nubv) {
        croak("glVertexAttrib4Nubv not available on this machine");
    };
    glVertexAttrib4Nubv(index, v);

SV *
glVertexAttrib4NubvARB(index, v);
     GLuint index;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttrib4NubvARB) {
        croak("glVertexAttrib4NubvARB not available on this machine");
    };
    glVertexAttrib4NubvARB(index, v);

SV *
glVertexAttrib4Nuiv(index, v);
     GLuint index;
     const GLuint* v;
CODE:
    if(! __glewVertexAttrib4Nuiv) {
        croak("glVertexAttrib4Nuiv not available on this machine");
    };
    glVertexAttrib4Nuiv(index, v);

SV *
glVertexAttrib4NuivARB(index, v);
     GLuint index;
     const GLuint* v;
CODE:
    if(! __glewVertexAttrib4NuivARB) {
        croak("glVertexAttrib4NuivARB not available on this machine");
    };
    glVertexAttrib4NuivARB(index, v);

SV *
glVertexAttrib4Nusv(index, v);
     GLuint index;
     const GLushort* v;
CODE:
    if(! __glewVertexAttrib4Nusv) {
        croak("glVertexAttrib4Nusv not available on this machine");
    };
    glVertexAttrib4Nusv(index, v);

SV *
glVertexAttrib4NusvARB(index, v);
     GLuint index;
     const GLushort* v;
CODE:
    if(! __glewVertexAttrib4NusvARB) {
        croak("glVertexAttrib4NusvARB not available on this machine");
    };
    glVertexAttrib4NusvARB(index, v);

SV *
glVertexAttrib4s(index, x, y, z, w);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    if(! __glewVertexAttrib4s) {
        croak("glVertexAttrib4s not available on this machine");
    };
    glVertexAttrib4s(index, x, y, z, w);

SV *
glVertexAttrib4sARB(index, x, y, z, w);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    if(! __glewVertexAttrib4sARB) {
        croak("glVertexAttrib4sARB not available on this machine");
    };
    glVertexAttrib4sARB(index, x, y, z, w);

SV *
glVertexAttrib4sNV(index, x, y, z, w);
     GLuint index;
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    if(! __glewVertexAttrib4sNV) {
        croak("glVertexAttrib4sNV not available on this machine");
    };
    glVertexAttrib4sNV(index, x, y, z, w);

SV *
glVertexAttrib4sv(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib4sv) {
        croak("glVertexAttrib4sv not available on this machine");
    };
    glVertexAttrib4sv(index, v);

SV *
glVertexAttrib4svARB(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib4svARB) {
        croak("glVertexAttrib4svARB not available on this machine");
    };
    glVertexAttrib4svARB(index, v);

SV *
glVertexAttrib4svNV(index, v);
     GLuint index;
     const GLshort* v;
CODE:
    if(! __glewVertexAttrib4svNV) {
        croak("glVertexAttrib4svNV not available on this machine");
    };
    glVertexAttrib4svNV(index, v);

SV *
glVertexAttrib4ubNV(index, x, y, z, w);
     GLuint index;
     GLubyte x;
     GLubyte y;
     GLubyte z;
     GLubyte w;
CODE:
    if(! __glewVertexAttrib4ubNV) {
        croak("glVertexAttrib4ubNV not available on this machine");
    };
    glVertexAttrib4ubNV(index, x, y, z, w);

SV *
glVertexAttrib4ubv(index, v);
     GLuint index;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttrib4ubv) {
        croak("glVertexAttrib4ubv not available on this machine");
    };
    glVertexAttrib4ubv(index, v);

SV *
glVertexAttrib4ubvARB(index, v);
     GLuint index;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttrib4ubvARB) {
        croak("glVertexAttrib4ubvARB not available on this machine");
    };
    glVertexAttrib4ubvARB(index, v);

SV *
glVertexAttrib4ubvNV(index, v);
     GLuint index;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttrib4ubvNV) {
        croak("glVertexAttrib4ubvNV not available on this machine");
    };
    glVertexAttrib4ubvNV(index, v);

SV *
glVertexAttrib4uiv(index, v);
     GLuint index;
     const GLuint* v;
CODE:
    if(! __glewVertexAttrib4uiv) {
        croak("glVertexAttrib4uiv not available on this machine");
    };
    glVertexAttrib4uiv(index, v);

SV *
glVertexAttrib4uivARB(index, v);
     GLuint index;
     const GLuint* v;
CODE:
    if(! __glewVertexAttrib4uivARB) {
        croak("glVertexAttrib4uivARB not available on this machine");
    };
    glVertexAttrib4uivARB(index, v);

SV *
glVertexAttrib4usv(index, v);
     GLuint index;
     const GLushort* v;
CODE:
    if(! __glewVertexAttrib4usv) {
        croak("glVertexAttrib4usv not available on this machine");
    };
    glVertexAttrib4usv(index, v);

SV *
glVertexAttrib4usvARB(index, v);
     GLuint index;
     const GLushort* v;
CODE:
    if(! __glewVertexAttrib4usvARB) {
        croak("glVertexAttrib4usvARB not available on this machine");
    };
    glVertexAttrib4usvARB(index, v);

SV *
glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
     GLuint index;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLsizei stride;
     GLuint buffer;
     GLuint offset;
CODE:
    if(! __glewVertexAttribArrayObjectATI) {
        croak("glVertexAttribArrayObjectATI not available on this machine");
    };
    glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);

SV *
glVertexAttribBinding(attribindex, bindingindex);
     GLuint attribindex;
     GLuint bindingindex;
CODE:
    if(! __glewVertexAttribBinding) {
        croak("glVertexAttribBinding not available on this machine");
    };
    glVertexAttribBinding(attribindex, bindingindex);

SV *
glVertexAttribDivisor(index, divisor);
     GLuint index;
     GLuint divisor;
CODE:
    if(! __glewVertexAttribDivisor) {
        croak("glVertexAttribDivisor not available on this machine");
    };
    glVertexAttribDivisor(index, divisor);

SV *
glVertexAttribDivisorANGLE(index, divisor);
     GLuint index;
     GLuint divisor;
CODE:
    if(! __glewVertexAttribDivisorANGLE) {
        croak("glVertexAttribDivisorANGLE not available on this machine");
    };
    glVertexAttribDivisorANGLE(index, divisor);

SV *
glVertexAttribDivisorARB(index, divisor);
     GLuint index;
     GLuint divisor;
CODE:
    if(! __glewVertexAttribDivisorARB) {
        croak("glVertexAttribDivisorARB not available on this machine");
    };
    glVertexAttribDivisorARB(index, divisor);

SV *
glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexAttribFormat) {
        croak("glVertexAttribFormat not available on this machine");
    };
    glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);

SV *
glVertexAttribFormatNV(index, size, type, normalized, stride);
     GLuint index;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLsizei stride;
CODE:
    if(! __glewVertexAttribFormatNV) {
        croak("glVertexAttribFormatNV not available on this machine");
    };
    glVertexAttribFormatNV(index, size, type, normalized, stride);

SV *
glVertexAttribI1i(index, v0);
     GLuint index;
     GLint v0;
CODE:
    if(! __glewVertexAttribI1i) {
        croak("glVertexAttribI1i not available on this machine");
    };
    glVertexAttribI1i(index, v0);

SV *
glVertexAttribI1iEXT(index, x);
     GLuint index;
     GLint x;
CODE:
    if(! __glewVertexAttribI1iEXT) {
        croak("glVertexAttribI1iEXT not available on this machine");
    };
    glVertexAttribI1iEXT(index, x);

SV *
glVertexAttribI1iv(index, v0);
     GLuint index;
     const GLint* v0;
CODE:
    if(! __glewVertexAttribI1iv) {
        croak("glVertexAttribI1iv not available on this machine");
    };
    glVertexAttribI1iv(index, v0);

SV *
glVertexAttribI1ivEXT(index, v);
     GLuint index;
     const GLint *v;
CODE:
    if(! __glewVertexAttribI1ivEXT) {
        croak("glVertexAttribI1ivEXT not available on this machine");
    };
    glVertexAttribI1ivEXT(index, v);

SV *
glVertexAttribI1ui(index, v0);
     GLuint index;
     GLuint v0;
CODE:
    if(! __glewVertexAttribI1ui) {
        croak("glVertexAttribI1ui not available on this machine");
    };
    glVertexAttribI1ui(index, v0);

SV *
glVertexAttribI1uiEXT(index, x);
     GLuint index;
     GLuint x;
CODE:
    if(! __glewVertexAttribI1uiEXT) {
        croak("glVertexAttribI1uiEXT not available on this machine");
    };
    glVertexAttribI1uiEXT(index, x);

SV *
glVertexAttribI1uiv(index, v0);
     GLuint index;
     const GLuint* v0;
CODE:
    if(! __glewVertexAttribI1uiv) {
        croak("glVertexAttribI1uiv not available on this machine");
    };
    glVertexAttribI1uiv(index, v0);

SV *
glVertexAttribI1uivEXT(index, v);
     GLuint index;
     const GLuint *v;
CODE:
    if(! __glewVertexAttribI1uivEXT) {
        croak("glVertexAttribI1uivEXT not available on this machine");
    };
    glVertexAttribI1uivEXT(index, v);

SV *
glVertexAttribI2i(index, v0, v1);
     GLuint index;
     GLint v0;
     GLint v1;
CODE:
    if(! __glewVertexAttribI2i) {
        croak("glVertexAttribI2i not available on this machine");
    };
    glVertexAttribI2i(index, v0, v1);

SV *
glVertexAttribI2iEXT(index, x, y);
     GLuint index;
     GLint x;
     GLint y;
CODE:
    if(! __glewVertexAttribI2iEXT) {
        croak("glVertexAttribI2iEXT not available on this machine");
    };
    glVertexAttribI2iEXT(index, x, y);

SV *
glVertexAttribI2iv(index, v0);
     GLuint index;
     const GLint* v0;
CODE:
    if(! __glewVertexAttribI2iv) {
        croak("glVertexAttribI2iv not available on this machine");
    };
    glVertexAttribI2iv(index, v0);

SV *
glVertexAttribI2ivEXT(index, v);
     GLuint index;
     const GLint *v;
CODE:
    if(! __glewVertexAttribI2ivEXT) {
        croak("glVertexAttribI2ivEXT not available on this machine");
    };
    glVertexAttribI2ivEXT(index, v);

SV *
glVertexAttribI2ui(index, v0, v1);
     GLuint index;
     GLuint v0;
     GLuint v1;
CODE:
    if(! __glewVertexAttribI2ui) {
        croak("glVertexAttribI2ui not available on this machine");
    };
    glVertexAttribI2ui(index, v0, v1);

SV *
glVertexAttribI2uiEXT(index, x, y);
     GLuint index;
     GLuint x;
     GLuint y;
CODE:
    if(! __glewVertexAttribI2uiEXT) {
        croak("glVertexAttribI2uiEXT not available on this machine");
    };
    glVertexAttribI2uiEXT(index, x, y);

SV *
glVertexAttribI2uiv(index, v0);
     GLuint index;
     const GLuint* v0;
CODE:
    if(! __glewVertexAttribI2uiv) {
        croak("glVertexAttribI2uiv not available on this machine");
    };
    glVertexAttribI2uiv(index, v0);

SV *
glVertexAttribI2uivEXT(index, v);
     GLuint index;
     const GLuint *v;
CODE:
    if(! __glewVertexAttribI2uivEXT) {
        croak("glVertexAttribI2uivEXT not available on this machine");
    };
    glVertexAttribI2uivEXT(index, v);

SV *
glVertexAttribI3i(index, v0, v1, v2);
     GLuint index;
     GLint v0;
     GLint v1;
     GLint v2;
CODE:
    if(! __glewVertexAttribI3i) {
        croak("glVertexAttribI3i not available on this machine");
    };
    glVertexAttribI3i(index, v0, v1, v2);

SV *
glVertexAttribI3iEXT(index, x, y, z);
     GLuint index;
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewVertexAttribI3iEXT) {
        croak("glVertexAttribI3iEXT not available on this machine");
    };
    glVertexAttribI3iEXT(index, x, y, z);

SV *
glVertexAttribI3iv(index, v0);
     GLuint index;
     const GLint* v0;
CODE:
    if(! __glewVertexAttribI3iv) {
        croak("glVertexAttribI3iv not available on this machine");
    };
    glVertexAttribI3iv(index, v0);

SV *
glVertexAttribI3ivEXT(index, v);
     GLuint index;
     const GLint *v;
CODE:
    if(! __glewVertexAttribI3ivEXT) {
        croak("glVertexAttribI3ivEXT not available on this machine");
    };
    glVertexAttribI3ivEXT(index, v);

SV *
glVertexAttribI3ui(index, v0, v1, v2);
     GLuint index;
     GLuint v0;
     GLuint v1;
     GLuint v2;
CODE:
    if(! __glewVertexAttribI3ui) {
        croak("glVertexAttribI3ui not available on this machine");
    };
    glVertexAttribI3ui(index, v0, v1, v2);

SV *
glVertexAttribI3uiEXT(index, x, y, z);
     GLuint index;
     GLuint x;
     GLuint y;
     GLuint z;
CODE:
    if(! __glewVertexAttribI3uiEXT) {
        croak("glVertexAttribI3uiEXT not available on this machine");
    };
    glVertexAttribI3uiEXT(index, x, y, z);

SV *
glVertexAttribI3uiv(index, v0);
     GLuint index;
     const GLuint* v0;
CODE:
    if(! __glewVertexAttribI3uiv) {
        croak("glVertexAttribI3uiv not available on this machine");
    };
    glVertexAttribI3uiv(index, v0);

SV *
glVertexAttribI3uivEXT(index, v);
     GLuint index;
     const GLuint *v;
CODE:
    if(! __glewVertexAttribI3uivEXT) {
        croak("glVertexAttribI3uivEXT not available on this machine");
    };
    glVertexAttribI3uivEXT(index, v);

SV *
glVertexAttribI4bv(index, v0);
     GLuint index;
     const GLbyte* v0;
CODE:
    if(! __glewVertexAttribI4bv) {
        croak("glVertexAttribI4bv not available on this machine");
    };
    glVertexAttribI4bv(index, v0);

SV *
glVertexAttribI4bvEXT(index, v);
     GLuint index;
     const GLbyte *v;
CODE:
    if(! __glewVertexAttribI4bvEXT) {
        croak("glVertexAttribI4bvEXT not available on this machine");
    };
    glVertexAttribI4bvEXT(index, v);

SV *
glVertexAttribI4i(index, v0, v1, v2, v3);
     GLuint index;
     GLint v0;
     GLint v1;
     GLint v2;
     GLint v3;
CODE:
    if(! __glewVertexAttribI4i) {
        croak("glVertexAttribI4i not available on this machine");
    };
    glVertexAttribI4i(index, v0, v1, v2, v3);

SV *
glVertexAttribI4iEXT(index, x, y, z, w);
     GLuint index;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewVertexAttribI4iEXT) {
        croak("glVertexAttribI4iEXT not available on this machine");
    };
    glVertexAttribI4iEXT(index, x, y, z, w);

SV *
glVertexAttribI4iv(index, v0);
     GLuint index;
     const GLint* v0;
CODE:
    if(! __glewVertexAttribI4iv) {
        croak("glVertexAttribI4iv not available on this machine");
    };
    glVertexAttribI4iv(index, v0);

SV *
glVertexAttribI4ivEXT(index, v);
     GLuint index;
     const GLint *v;
CODE:
    if(! __glewVertexAttribI4ivEXT) {
        croak("glVertexAttribI4ivEXT not available on this machine");
    };
    glVertexAttribI4ivEXT(index, v);

SV *
glVertexAttribI4sv(index, v0);
     GLuint index;
     const GLshort* v0;
CODE:
    if(! __glewVertexAttribI4sv) {
        croak("glVertexAttribI4sv not available on this machine");
    };
    glVertexAttribI4sv(index, v0);

SV *
glVertexAttribI4svEXT(index, v);
     GLuint index;
     const GLshort *v;
CODE:
    if(! __glewVertexAttribI4svEXT) {
        croak("glVertexAttribI4svEXT not available on this machine");
    };
    glVertexAttribI4svEXT(index, v);

SV *
glVertexAttribI4ubv(index, v0);
     GLuint index;
     const GLubyte* v0;
CODE:
    if(! __glewVertexAttribI4ubv) {
        croak("glVertexAttribI4ubv not available on this machine");
    };
    glVertexAttribI4ubv(index, v0);

SV *
glVertexAttribI4ubvEXT(index, v);
     GLuint index;
     const GLubyte *v;
CODE:
    if(! __glewVertexAttribI4ubvEXT) {
        croak("glVertexAttribI4ubvEXT not available on this machine");
    };
    glVertexAttribI4ubvEXT(index, v);

SV *
glVertexAttribI4ui(index, v0, v1, v2, v3);
     GLuint index;
     GLuint v0;
     GLuint v1;
     GLuint v2;
     GLuint v3;
CODE:
    if(! __glewVertexAttribI4ui) {
        croak("glVertexAttribI4ui not available on this machine");
    };
    glVertexAttribI4ui(index, v0, v1, v2, v3);

SV *
glVertexAttribI4uiEXT(index, x, y, z, w);
     GLuint index;
     GLuint x;
     GLuint y;
     GLuint z;
     GLuint w;
CODE:
    if(! __glewVertexAttribI4uiEXT) {
        croak("glVertexAttribI4uiEXT not available on this machine");
    };
    glVertexAttribI4uiEXT(index, x, y, z, w);

SV *
glVertexAttribI4uiv(index, v0);
     GLuint index;
     const GLuint* v0;
CODE:
    if(! __glewVertexAttribI4uiv) {
        croak("glVertexAttribI4uiv not available on this machine");
    };
    glVertexAttribI4uiv(index, v0);

SV *
glVertexAttribI4uivEXT(index, v);
     GLuint index;
     const GLuint *v;
CODE:
    if(! __glewVertexAttribI4uivEXT) {
        croak("glVertexAttribI4uivEXT not available on this machine");
    };
    glVertexAttribI4uivEXT(index, v);

SV *
glVertexAttribI4usv(index, v0);
     GLuint index;
     const GLushort* v0;
CODE:
    if(! __glewVertexAttribI4usv) {
        croak("glVertexAttribI4usv not available on this machine");
    };
    glVertexAttribI4usv(index, v0);

SV *
glVertexAttribI4usvEXT(index, v);
     GLuint index;
     const GLushort *v;
CODE:
    if(! __glewVertexAttribI4usvEXT) {
        croak("glVertexAttribI4usvEXT not available on this machine");
    };
    glVertexAttribI4usvEXT(index, v);

SV *
glVertexAttribIFormat(attribindex, size, type, relativeoffset);
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexAttribIFormat) {
        croak("glVertexAttribIFormat not available on this machine");
    };
    glVertexAttribIFormat(attribindex, size, type, relativeoffset);

SV *
glVertexAttribIFormatNV(index, size, type, stride);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewVertexAttribIFormatNV) {
        croak("glVertexAttribIFormatNV not available on this machine");
    };
    glVertexAttribIFormatNV(index, size, type, stride);

SV *
glVertexAttribIPointer(index, size, type, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void*pointer;
CODE:
    if(! __glewVertexAttribIPointer) {
        croak("glVertexAttribIPointer not available on this machine");
    };
    glVertexAttribIPointer(index, size, type, stride, pointer);

SV *
glVertexAttribIPointerEXT(index, size, type, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewVertexAttribIPointerEXT) {
        croak("glVertexAttribIPointerEXT not available on this machine");
    };
    glVertexAttribIPointerEXT(index, size, type, stride, pointer);

SV *
glVertexAttribL1d(index, x);
     GLuint index;
     GLdouble x;
CODE:
    if(! __glewVertexAttribL1d) {
        croak("glVertexAttribL1d not available on this machine");
    };
    glVertexAttribL1d(index, x);

SV *
glVertexAttribL1dEXT(index, x);
     GLuint index;
     GLdouble x;
CODE:
    if(! __glewVertexAttribL1dEXT) {
        croak("glVertexAttribL1dEXT not available on this machine");
    };
    glVertexAttribL1dEXT(index, x);

SV *
glVertexAttribL1dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL1dv) {
        croak("glVertexAttribL1dv not available on this machine");
    };
    glVertexAttribL1dv(index, v);

SV *
glVertexAttribL1dvEXT(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL1dvEXT) {
        croak("glVertexAttribL1dvEXT not available on this machine");
    };
    glVertexAttribL1dvEXT(index, v);

SV *
glVertexAttribL1i64NV(index, x);
     GLuint index;
     GLint64EXT x;
CODE:
    if(! __glewVertexAttribL1i64NV) {
        croak("glVertexAttribL1i64NV not available on this machine");
    };
    glVertexAttribL1i64NV(index, x);

SV *
glVertexAttribL1i64vNV(index, v);
     GLuint index;
     const GLint64EXT* v;
CODE:
    if(! __glewVertexAttribL1i64vNV) {
        croak("glVertexAttribL1i64vNV not available on this machine");
    };
    glVertexAttribL1i64vNV(index, v);

SV *
glVertexAttribL1ui64ARB(index, x);
     GLuint index;
     GLuint64EXT x;
CODE:
    if(! __glewVertexAttribL1ui64ARB) {
        croak("glVertexAttribL1ui64ARB not available on this machine");
    };
    glVertexAttribL1ui64ARB(index, x);

SV *
glVertexAttribL1ui64NV(index, x);
     GLuint index;
     GLuint64EXT x;
CODE:
    if(! __glewVertexAttribL1ui64NV) {
        croak("glVertexAttribL1ui64NV not available on this machine");
    };
    glVertexAttribL1ui64NV(index, x);

SV *
glVertexAttribL1ui64vARB(index, v);
     GLuint index;
     const GLuint64EXT* v;
CODE:
    if(! __glewVertexAttribL1ui64vARB) {
        croak("glVertexAttribL1ui64vARB not available on this machine");
    };
    glVertexAttribL1ui64vARB(index, v);

SV *
glVertexAttribL1ui64vNV(index, v);
     GLuint index;
     const GLuint64EXT* v;
CODE:
    if(! __glewVertexAttribL1ui64vNV) {
        croak("glVertexAttribL1ui64vNV not available on this machine");
    };
    glVertexAttribL1ui64vNV(index, v);

SV *
glVertexAttribL2d(index, x, y);
     GLuint index;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexAttribL2d) {
        croak("glVertexAttribL2d not available on this machine");
    };
    glVertexAttribL2d(index, x, y);

SV *
glVertexAttribL2dEXT(index, x, y);
     GLuint index;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexAttribL2dEXT) {
        croak("glVertexAttribL2dEXT not available on this machine");
    };
    glVertexAttribL2dEXT(index, x, y);

SV *
glVertexAttribL2dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL2dv) {
        croak("glVertexAttribL2dv not available on this machine");
    };
    glVertexAttribL2dv(index, v);

SV *
glVertexAttribL2dvEXT(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL2dvEXT) {
        croak("glVertexAttribL2dvEXT not available on this machine");
    };
    glVertexAttribL2dvEXT(index, v);

SV *
glVertexAttribL2i64NV(index, x, y);
     GLuint index;
     GLint64EXT x;
     GLint64EXT y;
CODE:
    if(! __glewVertexAttribL2i64NV) {
        croak("glVertexAttribL2i64NV not available on this machine");
    };
    glVertexAttribL2i64NV(index, x, y);

SV *
glVertexAttribL2i64vNV(index, v);
     GLuint index;
     const GLint64EXT* v;
CODE:
    if(! __glewVertexAttribL2i64vNV) {
        croak("glVertexAttribL2i64vNV not available on this machine");
    };
    glVertexAttribL2i64vNV(index, v);

SV *
glVertexAttribL2ui64NV(index, x, y);
     GLuint index;
     GLuint64EXT x;
     GLuint64EXT y;
CODE:
    if(! __glewVertexAttribL2ui64NV) {
        croak("glVertexAttribL2ui64NV not available on this machine");
    };
    glVertexAttribL2ui64NV(index, x, y);

SV *
glVertexAttribL2ui64vNV(index, v);
     GLuint index;
     const GLuint64EXT* v;
CODE:
    if(! __glewVertexAttribL2ui64vNV) {
        croak("glVertexAttribL2ui64vNV not available on this machine");
    };
    glVertexAttribL2ui64vNV(index, v);

SV *
glVertexAttribL3d(index, x, y, z);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexAttribL3d) {
        croak("glVertexAttribL3d not available on this machine");
    };
    glVertexAttribL3d(index, x, y, z);

SV *
glVertexAttribL3dEXT(index, x, y, z);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexAttribL3dEXT) {
        croak("glVertexAttribL3dEXT not available on this machine");
    };
    glVertexAttribL3dEXT(index, x, y, z);

SV *
glVertexAttribL3dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL3dv) {
        croak("glVertexAttribL3dv not available on this machine");
    };
    glVertexAttribL3dv(index, v);

SV *
glVertexAttribL3dvEXT(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL3dvEXT) {
        croak("glVertexAttribL3dvEXT not available on this machine");
    };
    glVertexAttribL3dvEXT(index, v);

SV *
glVertexAttribL3i64NV(index, x, y, z);
     GLuint index;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
CODE:
    if(! __glewVertexAttribL3i64NV) {
        croak("glVertexAttribL3i64NV not available on this machine");
    };
    glVertexAttribL3i64NV(index, x, y, z);

SV *
glVertexAttribL3i64vNV(index, v);
     GLuint index;
     const GLint64EXT* v;
CODE:
    if(! __glewVertexAttribL3i64vNV) {
        croak("glVertexAttribL3i64vNV not available on this machine");
    };
    glVertexAttribL3i64vNV(index, v);

SV *
glVertexAttribL3ui64NV(index, x, y, z);
     GLuint index;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
CODE:
    if(! __glewVertexAttribL3ui64NV) {
        croak("glVertexAttribL3ui64NV not available on this machine");
    };
    glVertexAttribL3ui64NV(index, x, y, z);

SV *
glVertexAttribL3ui64vNV(index, v);
     GLuint index;
     const GLuint64EXT* v;
CODE:
    if(! __glewVertexAttribL3ui64vNV) {
        croak("glVertexAttribL3ui64vNV not available on this machine");
    };
    glVertexAttribL3ui64vNV(index, v);

SV *
glVertexAttribL4d(index, x, y, z, w);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexAttribL4d) {
        croak("glVertexAttribL4d not available on this machine");
    };
    glVertexAttribL4d(index, x, y, z, w);

SV *
glVertexAttribL4dEXT(index, x, y, z, w);
     GLuint index;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexAttribL4dEXT) {
        croak("glVertexAttribL4dEXT not available on this machine");
    };
    glVertexAttribL4dEXT(index, x, y, z, w);

SV *
glVertexAttribL4dv(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL4dv) {
        croak("glVertexAttribL4dv not available on this machine");
    };
    glVertexAttribL4dv(index, v);

SV *
glVertexAttribL4dvEXT(index, v);
     GLuint index;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribL4dvEXT) {
        croak("glVertexAttribL4dvEXT not available on this machine");
    };
    glVertexAttribL4dvEXT(index, v);

SV *
glVertexAttribL4i64NV(index, x, y, z, w);
     GLuint index;
     GLint64EXT x;
     GLint64EXT y;
     GLint64EXT z;
     GLint64EXT w;
CODE:
    if(! __glewVertexAttribL4i64NV) {
        croak("glVertexAttribL4i64NV not available on this machine");
    };
    glVertexAttribL4i64NV(index, x, y, z, w);

SV *
glVertexAttribL4i64vNV(index, v);
     GLuint index;
     const GLint64EXT* v;
CODE:
    if(! __glewVertexAttribL4i64vNV) {
        croak("glVertexAttribL4i64vNV not available on this machine");
    };
    glVertexAttribL4i64vNV(index, v);

SV *
glVertexAttribL4ui64NV(index, x, y, z, w);
     GLuint index;
     GLuint64EXT x;
     GLuint64EXT y;
     GLuint64EXT z;
     GLuint64EXT w;
CODE:
    if(! __glewVertexAttribL4ui64NV) {
        croak("glVertexAttribL4ui64NV not available on this machine");
    };
    glVertexAttribL4ui64NV(index, x, y, z, w);

SV *
glVertexAttribL4ui64vNV(index, v);
     GLuint index;
     const GLuint64EXT* v;
CODE:
    if(! __glewVertexAttribL4ui64vNV) {
        croak("glVertexAttribL4ui64vNV not available on this machine");
    };
    glVertexAttribL4ui64vNV(index, v);

SV *
glVertexAttribLFormat(attribindex, size, type, relativeoffset);
     GLuint attribindex;
     GLint size;
     GLenum type;
     GLuint relativeoffset;
CODE:
    if(! __glewVertexAttribLFormat) {
        croak("glVertexAttribLFormat not available on this machine");
    };
    glVertexAttribLFormat(attribindex, size, type, relativeoffset);

SV *
glVertexAttribLFormatNV(index, size, type, stride);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewVertexAttribLFormatNV) {
        croak("glVertexAttribLFormatNV not available on this machine");
    };
    glVertexAttribLFormatNV(index, size, type, stride);

SV *
glVertexAttribLPointer(index, size, type, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void* pointer;
CODE:
    if(! __glewVertexAttribLPointer) {
        croak("glVertexAttribLPointer not available on this machine");
    };
    glVertexAttribLPointer(index, size, type, stride, pointer);

SV *
glVertexAttribLPointerEXT(index, size, type, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewVertexAttribLPointerEXT) {
        croak("glVertexAttribLPointerEXT not available on this machine");
    };
    glVertexAttribLPointerEXT(index, size, type, stride, pointer);

SV *
glVertexAttribP1ui(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     GLuint value;
CODE:
    if(! __glewVertexAttribP1ui) {
        croak("glVertexAttribP1ui not available on this machine");
    };
    glVertexAttribP1ui(index, type, normalized, value);

SV *
glVertexAttribP1uiv(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     const GLuint* value;
CODE:
    if(! __glewVertexAttribP1uiv) {
        croak("glVertexAttribP1uiv not available on this machine");
    };
    glVertexAttribP1uiv(index, type, normalized, value);

SV *
glVertexAttribP2ui(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     GLuint value;
CODE:
    if(! __glewVertexAttribP2ui) {
        croak("glVertexAttribP2ui not available on this machine");
    };
    glVertexAttribP2ui(index, type, normalized, value);

SV *
glVertexAttribP2uiv(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     const GLuint* value;
CODE:
    if(! __glewVertexAttribP2uiv) {
        croak("glVertexAttribP2uiv not available on this machine");
    };
    glVertexAttribP2uiv(index, type, normalized, value);

SV *
glVertexAttribP3ui(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     GLuint value;
CODE:
    if(! __glewVertexAttribP3ui) {
        croak("glVertexAttribP3ui not available on this machine");
    };
    glVertexAttribP3ui(index, type, normalized, value);

SV *
glVertexAttribP3uiv(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     const GLuint* value;
CODE:
    if(! __glewVertexAttribP3uiv) {
        croak("glVertexAttribP3uiv not available on this machine");
    };
    glVertexAttribP3uiv(index, type, normalized, value);

SV *
glVertexAttribP4ui(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     GLuint value;
CODE:
    if(! __glewVertexAttribP4ui) {
        croak("glVertexAttribP4ui not available on this machine");
    };
    glVertexAttribP4ui(index, type, normalized, value);

SV *
glVertexAttribP4uiv(index, type, normalized, value);
     GLuint index;
     GLenum type;
     GLboolean normalized;
     const GLuint* value;
CODE:
    if(! __glewVertexAttribP4uiv) {
        croak("glVertexAttribP4uiv not available on this machine");
    };
    glVertexAttribP4uiv(index, type, normalized, value);

SV *
glVertexAttribParameteriAMD(index, pname, param);
     GLuint index;
     GLenum pname;
     GLint param;
CODE:
    if(! __glewVertexAttribParameteriAMD) {
        croak("glVertexAttribParameteriAMD not available on this machine");
    };
    glVertexAttribParameteriAMD(index, pname, param);

SV *
glVertexAttribPointer(index, size, type, normalized, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLsizei stride;
     const void* pointer;
CODE:
    if(! __glewVertexAttribPointer) {
        croak("glVertexAttribPointer not available on this machine");
    };
    glVertexAttribPointer(index, size, type, normalized, stride, pointer);

SV *
glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLboolean normalized;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewVertexAttribPointerARB) {
        croak("glVertexAttribPointerARB not available on this machine");
    };
    glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);

SV *
glVertexAttribPointerNV(index, size, type, stride, pointer);
     GLuint index;
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    if(! __glewVertexAttribPointerNV) {
        croak("glVertexAttribPointerNV not available on this machine");
    };
    glVertexAttribPointerNV(index, size, type, stride, pointer);

SV *
glVertexAttribs1dvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribs1dvNV) {
        croak("glVertexAttribs1dvNV not available on this machine");
    };
    glVertexAttribs1dvNV(index, n, v);

SV *
glVertexAttribs1fvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttribs1fvNV) {
        croak("glVertexAttribs1fvNV not available on this machine");
    };
    glVertexAttribs1fvNV(index, n, v);

SV *
glVertexAttribs1hvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttribs1hvNV) {
        croak("glVertexAttribs1hvNV not available on this machine");
    };
    glVertexAttribs1hvNV(index, n, v);

SV *
glVertexAttribs1svNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLshort* v;
CODE:
    if(! __glewVertexAttribs1svNV) {
        croak("glVertexAttribs1svNV not available on this machine");
    };
    glVertexAttribs1svNV(index, n, v);

SV *
glVertexAttribs2dvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribs2dvNV) {
        croak("glVertexAttribs2dvNV not available on this machine");
    };
    glVertexAttribs2dvNV(index, n, v);

SV *
glVertexAttribs2fvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttribs2fvNV) {
        croak("glVertexAttribs2fvNV not available on this machine");
    };
    glVertexAttribs2fvNV(index, n, v);

SV *
glVertexAttribs2hvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttribs2hvNV) {
        croak("glVertexAttribs2hvNV not available on this machine");
    };
    glVertexAttribs2hvNV(index, n, v);

SV *
glVertexAttribs2svNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLshort* v;
CODE:
    if(! __glewVertexAttribs2svNV) {
        croak("glVertexAttribs2svNV not available on this machine");
    };
    glVertexAttribs2svNV(index, n, v);

SV *
glVertexAttribs3dvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribs3dvNV) {
        croak("glVertexAttribs3dvNV not available on this machine");
    };
    glVertexAttribs3dvNV(index, n, v);

SV *
glVertexAttribs3fvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttribs3fvNV) {
        croak("glVertexAttribs3fvNV not available on this machine");
    };
    glVertexAttribs3fvNV(index, n, v);

SV *
glVertexAttribs3hvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttribs3hvNV) {
        croak("glVertexAttribs3hvNV not available on this machine");
    };
    glVertexAttribs3hvNV(index, n, v);

SV *
glVertexAttribs3svNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLshort* v;
CODE:
    if(! __glewVertexAttribs3svNV) {
        croak("glVertexAttribs3svNV not available on this machine");
    };
    glVertexAttribs3svNV(index, n, v);

SV *
glVertexAttribs4dvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLdouble* v;
CODE:
    if(! __glewVertexAttribs4dvNV) {
        croak("glVertexAttribs4dvNV not available on this machine");
    };
    glVertexAttribs4dvNV(index, n, v);

SV *
glVertexAttribs4fvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLfloat* v;
CODE:
    if(! __glewVertexAttribs4fvNV) {
        croak("glVertexAttribs4fvNV not available on this machine");
    };
    glVertexAttribs4fvNV(index, n, v);

SV *
glVertexAttribs4hvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLhalf* v;
CODE:
    if(! __glewVertexAttribs4hvNV) {
        croak("glVertexAttribs4hvNV not available on this machine");
    };
    glVertexAttribs4hvNV(index, n, v);

SV *
glVertexAttribs4svNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLshort* v;
CODE:
    if(! __glewVertexAttribs4svNV) {
        croak("glVertexAttribs4svNV not available on this machine");
    };
    glVertexAttribs4svNV(index, n, v);

SV *
glVertexAttribs4ubvNV(index, n, v);
     GLuint index;
     GLsizei n;
     const GLubyte* v;
CODE:
    if(! __glewVertexAttribs4ubvNV) {
        croak("glVertexAttribs4ubvNV not available on this machine");
    };
    glVertexAttribs4ubvNV(index, n, v);

SV *
glVertexBindingDivisor(bindingindex, divisor);
     GLuint bindingindex;
     GLuint divisor;
CODE:
    if(! __glewVertexBindingDivisor) {
        croak("glVertexBindingDivisor not available on this machine");
    };
    glVertexBindingDivisor(bindingindex, divisor);

SV *
glVertexBlendARB(count);
     GLint count;
CODE:
    if(! __glewVertexBlendARB) {
        croak("glVertexBlendARB not available on this machine");
    };
    glVertexBlendARB(count);

SV *
glVertexBlendEnvfATI(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    if(! __glewVertexBlendEnvfATI) {
        croak("glVertexBlendEnvfATI not available on this machine");
    };
    glVertexBlendEnvfATI(pname, param);

SV *
glVertexBlendEnviATI(pname, param);
     GLenum pname;
     GLint param;
CODE:
    if(! __glewVertexBlendEnviATI) {
        croak("glVertexBlendEnviATI not available on this machine");
    };
    glVertexBlendEnviATI(pname, param);

SV *
glVertexFormatNV(size, type, stride);
     GLint size;
     GLenum type;
     GLsizei stride;
CODE:
    if(! __glewVertexFormatNV) {
        croak("glVertexFormatNV not available on this machine");
    };
    glVertexFormatNV(size, type, stride);

SV *
glVertexP2ui(type, value);
     GLenum type;
     GLuint value;
CODE:
    if(! __glewVertexP2ui) {
        croak("glVertexP2ui not available on this machine");
    };
    glVertexP2ui(type, value);

SV *
glVertexP2uiv(type, value);
     GLenum type;
     const GLuint* value;
CODE:
    if(! __glewVertexP2uiv) {
        croak("glVertexP2uiv not available on this machine");
    };
    glVertexP2uiv(type, value);

SV *
glVertexP3ui(type, value);
     GLenum type;
     GLuint value;
CODE:
    if(! __glewVertexP3ui) {
        croak("glVertexP3ui not available on this machine");
    };
    glVertexP3ui(type, value);

SV *
glVertexP3uiv(type, value);
     GLenum type;
     const GLuint* value;
CODE:
    if(! __glewVertexP3uiv) {
        croak("glVertexP3uiv not available on this machine");
    };
    glVertexP3uiv(type, value);

SV *
glVertexP4ui(type, value);
     GLenum type;
     GLuint value;
CODE:
    if(! __glewVertexP4ui) {
        croak("glVertexP4ui not available on this machine");
    };
    glVertexP4ui(type, value);

SV *
glVertexP4uiv(type, value);
     GLenum type;
     const GLuint* value;
CODE:
    if(! __glewVertexP4uiv) {
        croak("glVertexP4uiv not available on this machine");
    };
    glVertexP4uiv(type, value);

SV *
glVertexPointerEXT(size, type, stride, count, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     GLsizei count;
     const void *pointer;
CODE:
    if(! __glewVertexPointerEXT) {
        croak("glVertexPointerEXT not available on this machine");
    };
    glVertexPointerEXT(size, type, stride, count, pointer);

SV *
glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
     GLint size;
     GLenum type;
     GLint stride;
     const void** pointer;
     GLint ptrstride;
CODE:
    if(! __glewVertexPointerListIBM) {
        croak("glVertexPointerListIBM not available on this machine");
    };
    glVertexPointerListIBM(size, type, stride, pointer, ptrstride);

SV *
glVertexPointervINTEL(size, type, pointer);
     GLint size;
     GLenum type;
     const void** pointer;
CODE:
    if(! __glewVertexPointervINTEL) {
        croak("glVertexPointervINTEL not available on this machine");
    };
    glVertexPointervINTEL(size, type, pointer);

SV *
glVertexStream1dATI(stream, x);
     GLenum stream;
     GLdouble x;
CODE:
    if(! __glewVertexStream1dATI) {
        croak("glVertexStream1dATI not available on this machine");
    };
    glVertexStream1dATI(stream, x);

SV *
glVertexStream1dvATI(stream, coords);
     GLenum stream;
     const GLdouble *coords;
CODE:
    if(! __glewVertexStream1dvATI) {
        croak("glVertexStream1dvATI not available on this machine");
    };
    glVertexStream1dvATI(stream, coords);

SV *
glVertexStream1fATI(stream, x);
     GLenum stream;
     GLfloat x;
CODE:
    if(! __glewVertexStream1fATI) {
        croak("glVertexStream1fATI not available on this machine");
    };
    glVertexStream1fATI(stream, x);

SV *
glVertexStream1fvATI(stream, coords);
     GLenum stream;
     const GLfloat *coords;
CODE:
    if(! __glewVertexStream1fvATI) {
        croak("glVertexStream1fvATI not available on this machine");
    };
    glVertexStream1fvATI(stream, coords);

SV *
glVertexStream1iATI(stream, x);
     GLenum stream;
     GLint x;
CODE:
    if(! __glewVertexStream1iATI) {
        croak("glVertexStream1iATI not available on this machine");
    };
    glVertexStream1iATI(stream, x);

SV *
glVertexStream1ivATI(stream, coords);
     GLenum stream;
     const GLint *coords;
CODE:
    if(! __glewVertexStream1ivATI) {
        croak("glVertexStream1ivATI not available on this machine");
    };
    glVertexStream1ivATI(stream, coords);

SV *
glVertexStream1sATI(stream, x);
     GLenum stream;
     GLshort x;
CODE:
    if(! __glewVertexStream1sATI) {
        croak("glVertexStream1sATI not available on this machine");
    };
    glVertexStream1sATI(stream, x);

SV *
glVertexStream1svATI(stream, coords);
     GLenum stream;
     const GLshort *coords;
CODE:
    if(! __glewVertexStream1svATI) {
        croak("glVertexStream1svATI not available on this machine");
    };
    glVertexStream1svATI(stream, coords);

SV *
glVertexStream2dATI(stream, x, y);
     GLenum stream;
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewVertexStream2dATI) {
        croak("glVertexStream2dATI not available on this machine");
    };
    glVertexStream2dATI(stream, x, y);

SV *
glVertexStream2dvATI(stream, coords);
     GLenum stream;
     const GLdouble *coords;
CODE:
    if(! __glewVertexStream2dvATI) {
        croak("glVertexStream2dvATI not available on this machine");
    };
    glVertexStream2dvATI(stream, coords);

SV *
glVertexStream2fATI(stream, x, y);
     GLenum stream;
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewVertexStream2fATI) {
        croak("glVertexStream2fATI not available on this machine");
    };
    glVertexStream2fATI(stream, x, y);

SV *
glVertexStream2fvATI(stream, coords);
     GLenum stream;
     const GLfloat *coords;
CODE:
    if(! __glewVertexStream2fvATI) {
        croak("glVertexStream2fvATI not available on this machine");
    };
    glVertexStream2fvATI(stream, coords);

SV *
glVertexStream2iATI(stream, x, y);
     GLenum stream;
     GLint x;
     GLint y;
CODE:
    if(! __glewVertexStream2iATI) {
        croak("glVertexStream2iATI not available on this machine");
    };
    glVertexStream2iATI(stream, x, y);

SV *
glVertexStream2ivATI(stream, coords);
     GLenum stream;
     const GLint *coords;
CODE:
    if(! __glewVertexStream2ivATI) {
        croak("glVertexStream2ivATI not available on this machine");
    };
    glVertexStream2ivATI(stream, coords);

SV *
glVertexStream2sATI(stream, x, y);
     GLenum stream;
     GLshort x;
     GLshort y;
CODE:
    if(! __glewVertexStream2sATI) {
        croak("glVertexStream2sATI not available on this machine");
    };
    glVertexStream2sATI(stream, x, y);

SV *
glVertexStream2svATI(stream, coords);
     GLenum stream;
     const GLshort *coords;
CODE:
    if(! __glewVertexStream2svATI) {
        croak("glVertexStream2svATI not available on this machine");
    };
    glVertexStream2svATI(stream, coords);

SV *
glVertexStream3dATI(stream, x, y, z);
     GLenum stream;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewVertexStream3dATI) {
        croak("glVertexStream3dATI not available on this machine");
    };
    glVertexStream3dATI(stream, x, y, z);

SV *
glVertexStream3dvATI(stream, coords);
     GLenum stream;
     const GLdouble *coords;
CODE:
    if(! __glewVertexStream3dvATI) {
        croak("glVertexStream3dvATI not available on this machine");
    };
    glVertexStream3dvATI(stream, coords);

SV *
glVertexStream3fATI(stream, x, y, z);
     GLenum stream;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewVertexStream3fATI) {
        croak("glVertexStream3fATI not available on this machine");
    };
    glVertexStream3fATI(stream, x, y, z);

SV *
glVertexStream3fvATI(stream, coords);
     GLenum stream;
     const GLfloat *coords;
CODE:
    if(! __glewVertexStream3fvATI) {
        croak("glVertexStream3fvATI not available on this machine");
    };
    glVertexStream3fvATI(stream, coords);

SV *
glVertexStream3iATI(stream, x, y, z);
     GLenum stream;
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewVertexStream3iATI) {
        croak("glVertexStream3iATI not available on this machine");
    };
    glVertexStream3iATI(stream, x, y, z);

SV *
glVertexStream3ivATI(stream, coords);
     GLenum stream;
     const GLint *coords;
CODE:
    if(! __glewVertexStream3ivATI) {
        croak("glVertexStream3ivATI not available on this machine");
    };
    glVertexStream3ivATI(stream, coords);

SV *
glVertexStream3sATI(stream, x, y, z);
     GLenum stream;
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewVertexStream3sATI) {
        croak("glVertexStream3sATI not available on this machine");
    };
    glVertexStream3sATI(stream, x, y, z);

SV *
glVertexStream3svATI(stream, coords);
     GLenum stream;
     const GLshort *coords;
CODE:
    if(! __glewVertexStream3svATI) {
        croak("glVertexStream3svATI not available on this machine");
    };
    glVertexStream3svATI(stream, coords);

SV *
glVertexStream4dATI(stream, x, y, z, w);
     GLenum stream;
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewVertexStream4dATI) {
        croak("glVertexStream4dATI not available on this machine");
    };
    glVertexStream4dATI(stream, x, y, z, w);

SV *
glVertexStream4dvATI(stream, coords);
     GLenum stream;
     const GLdouble *coords;
CODE:
    if(! __glewVertexStream4dvATI) {
        croak("glVertexStream4dvATI not available on this machine");
    };
    glVertexStream4dvATI(stream, coords);

SV *
glVertexStream4fATI(stream, x, y, z, w);
     GLenum stream;
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewVertexStream4fATI) {
        croak("glVertexStream4fATI not available on this machine");
    };
    glVertexStream4fATI(stream, x, y, z, w);

SV *
glVertexStream4fvATI(stream, coords);
     GLenum stream;
     const GLfloat *coords;
CODE:
    if(! __glewVertexStream4fvATI) {
        croak("glVertexStream4fvATI not available on this machine");
    };
    glVertexStream4fvATI(stream, coords);

SV *
glVertexStream4iATI(stream, x, y, z, w);
     GLenum stream;
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewVertexStream4iATI) {
        croak("glVertexStream4iATI not available on this machine");
    };
    glVertexStream4iATI(stream, x, y, z, w);

SV *
glVertexStream4ivATI(stream, coords);
     GLenum stream;
     const GLint *coords;
CODE:
    if(! __glewVertexStream4ivATI) {
        croak("glVertexStream4ivATI not available on this machine");
    };
    glVertexStream4ivATI(stream, coords);

SV *
glVertexStream4sATI(stream, x, y, z, w);
     GLenum stream;
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    if(! __glewVertexStream4sATI) {
        croak("glVertexStream4sATI not available on this machine");
    };
    glVertexStream4sATI(stream, x, y, z, w);

SV *
glVertexStream4svATI(stream, coords);
     GLenum stream;
     const GLshort *coords;
CODE:
    if(! __glewVertexStream4svATI) {
        croak("glVertexStream4svATI not available on this machine");
    };
    glVertexStream4svATI(stream, coords);

SV *
glVertexWeightfEXT(weight);
     GLfloat weight;
CODE:
    if(! __glewVertexWeightfEXT) {
        croak("glVertexWeightfEXT not available on this machine");
    };
    glVertexWeightfEXT(weight);

SV *
glVertexWeightfvEXT(weight);
     GLfloat* weight;
CODE:
    if(! __glewVertexWeightfvEXT) {
        croak("glVertexWeightfvEXT not available on this machine");
    };
    glVertexWeightfvEXT(weight);

SV *
glVertexWeighthNV(weight);
     GLhalf weight;
CODE:
    if(! __glewVertexWeighthNV) {
        croak("glVertexWeighthNV not available on this machine");
    };
    glVertexWeighthNV(weight);

SV *
glVertexWeighthvNV(weight);
     const GLhalf* weight;
CODE:
    if(! __glewVertexWeighthvNV) {
        croak("glVertexWeighthvNV not available on this machine");
    };
    glVertexWeighthvNV(weight);

SV *
glVertexWeightPointerEXT(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     void *pointer;
CODE:
    if(! __glewVertexWeightPointerEXT) {
        croak("glVertexWeightPointerEXT not available on this machine");
    };
    glVertexWeightPointerEXT(size, type, stride, pointer);

GLenum
glVideoCaptureNV(video_capture_slot, sequence_num, capture_time);
     GLuint video_capture_slot;
     GLuint* sequence_num;
     GLuint64EXT *capture_time;
CODE:
    if(! __glewVideoCaptureNV) {
        croak("glVideoCaptureNV not available on this machine");
    };
    RETVAL = glVideoCaptureNV(video_capture_slot, sequence_num, capture_time);
OUTPUT:
    RETVAL

SV *
glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     const GLdouble* params;
CODE:
    if(! __glewVideoCaptureStreamParameterdvNV) {
        croak("glVideoCaptureStreamParameterdvNV not available on this machine");
    };
    glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);

SV *
glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     const GLfloat* params;
CODE:
    if(! __glewVideoCaptureStreamParameterfvNV) {
        croak("glVideoCaptureStreamParameterfvNV not available on this machine");
    };
    glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);

SV *
glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
     GLuint video_capture_slot;
     GLuint stream;
     GLenum pname;
     const GLint* params;
CODE:
    if(! __glewVideoCaptureStreamParameterivNV) {
        croak("glVideoCaptureStreamParameterivNV not available on this machine");
    };
    glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);

SV *
glViewportArrayv(first, count, v);
     GLuint first;
     GLsizei count;
     const GLfloat * v;
CODE:
    if(! __glewViewportArrayv) {
        croak("glViewportArrayv not available on this machine");
    };
    glViewportArrayv(first, count, v);

SV *
glViewportIndexedf(index, x, y, w, h);
     GLuint index;
     GLfloat x;
     GLfloat y;
     GLfloat w;
     GLfloat h;
CODE:
    if(! __glewViewportIndexedf) {
        croak("glViewportIndexedf not available on this machine");
    };
    glViewportIndexedf(index, x, y, w, h);

SV *
glViewportIndexedfv(index, v);
     GLuint index;
     const GLfloat * v;
CODE:
    if(! __glewViewportIndexedfv) {
        croak("glViewportIndexedfv not available on this machine");
    };
    glViewportIndexedfv(index, v);

SV *
glViewportPositionWScaleNV(index, xcoeff, ycoeff);
     GLuint index;
     GLfloat xcoeff;
     GLfloat ycoeff;
CODE:
    if(! __glewViewportPositionWScaleNV) {
        croak("glViewportPositionWScaleNV not available on this machine");
    };
    glViewportPositionWScaleNV(index, xcoeff, ycoeff);

SV *
glViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);
     GLuint index;
     GLenum swizzlex;
     GLenum swizzley;
     GLenum swizzlez;
     GLenum swizzlew;
CODE:
    if(! __glewViewportSwizzleNV) {
        croak("glViewportSwizzleNV not available on this machine");
    };
    glViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);

SV *
glWaitSync(GLsync,flags,timeout);
     GLsync GLsync;
    GLbitfield flags;
    GLuint64 timeout;
CODE:
    if(! __glewWaitSync) {
        croak("glWaitSync not available on this machine");
    };
    glWaitSync(GLsync,flags,timeout);

SV *
glWaitVkSemaphoreNV(vkSemaphore);
     GLuint64 vkSemaphore;
CODE:
    if(! __glewWaitVkSemaphoreNV) {
        croak("glWaitVkSemaphoreNV not available on this machine");
    };
    glWaitVkSemaphoreNV(vkSemaphore);

SV *
glWeightbvARB(size, weights);
     GLint size;
     GLbyte *weights;
CODE:
    if(! __glewWeightbvARB) {
        croak("glWeightbvARB not available on this machine");
    };
    glWeightbvARB(size, weights);

SV *
glWeightdvARB(size, weights);
     GLint size;
     GLdouble *weights;
CODE:
    if(! __glewWeightdvARB) {
        croak("glWeightdvARB not available on this machine");
    };
    glWeightdvARB(size, weights);

SV *
glWeightfvARB(size, weights);
     GLint size;
     GLfloat *weights;
CODE:
    if(! __glewWeightfvARB) {
        croak("glWeightfvARB not available on this machine");
    };
    glWeightfvARB(size, weights);

SV *
glWeightivARB(size, weights);
     GLint size;
     GLint *weights;
CODE:
    if(! __glewWeightivARB) {
        croak("glWeightivARB not available on this machine");
    };
    glWeightivARB(size, weights);

SV *
glWeightPathsNV(resultPath, numPaths, paths, weights);
     GLuint resultPath;
     GLsizei numPaths;
     const GLuint * paths;
     const GLfloat * weights;
CODE:
    if(! __glewWeightPathsNV) {
        croak("glWeightPathsNV not available on this machine");
    };
    glWeightPathsNV(resultPath, numPaths, paths, weights);

SV *
glWeightPointerARB(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     void *pointer;
CODE:
    if(! __glewWeightPointerARB) {
        croak("glWeightPointerARB not available on this machine");
    };
    glWeightPointerARB(size, type, stride, pointer);

SV *
glWeightsvARB(size, weights);
     GLint size;
     GLshort *weights;
CODE:
    if(! __glewWeightsvARB) {
        croak("glWeightsvARB not available on this machine");
    };
    glWeightsvARB(size, weights);

SV *
glWeightubvARB(size, weights);
     GLint size;
     GLubyte *weights;
CODE:
    if(! __glewWeightubvARB) {
        croak("glWeightubvARB not available on this machine");
    };
    glWeightubvARB(size, weights);

SV *
glWeightuivARB(size, weights);
     GLint size;
     GLuint *weights;
CODE:
    if(! __glewWeightuivARB) {
        croak("glWeightuivARB not available on this machine");
    };
    glWeightuivARB(size, weights);

SV *
glWeightusvARB(size, weights);
     GLint size;
     GLushort *weights;
CODE:
    if(! __glewWeightusvARB) {
        croak("glWeightusvARB not available on this machine");
    };
    glWeightusvARB(size, weights);

SV *
glWindowPos2d(x, y);
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewWindowPos2d) {
        croak("glWindowPos2d not available on this machine");
    };
    glWindowPos2d(x, y);

SV *
glWindowPos2dARB(x, y);
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewWindowPos2dARB) {
        croak("glWindowPos2dARB not available on this machine");
    };
    glWindowPos2dARB(x, y);

SV *
glWindowPos2dMESA(x, y);
     GLdouble x;
     GLdouble y;
CODE:
    if(! __glewWindowPos2dMESA) {
        croak("glWindowPos2dMESA not available on this machine");
    };
    glWindowPos2dMESA(x, y);

SV *
glWindowPos2dv(p);
     const GLdouble *p;
CODE:
    if(! __glewWindowPos2dv) {
        croak("glWindowPos2dv not available on this machine");
    };
    glWindowPos2dv(p);

SV *
glWindowPos2dvARB(p);
     const GLdouble* p;
CODE:
    if(! __glewWindowPos2dvARB) {
        croak("glWindowPos2dvARB not available on this machine");
    };
    glWindowPos2dvARB(p);

SV *
glWindowPos2dvMESA(p);
     const GLdouble* p;
CODE:
    if(! __glewWindowPos2dvMESA) {
        croak("glWindowPos2dvMESA not available on this machine");
    };
    glWindowPos2dvMESA(p);

SV *
glWindowPos2f(x, y);
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewWindowPos2f) {
        croak("glWindowPos2f not available on this machine");
    };
    glWindowPos2f(x, y);

SV *
glWindowPos2fARB(x, y);
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewWindowPos2fARB) {
        croak("glWindowPos2fARB not available on this machine");
    };
    glWindowPos2fARB(x, y);

SV *
glWindowPos2fMESA(x, y);
     GLfloat x;
     GLfloat y;
CODE:
    if(! __glewWindowPos2fMESA) {
        croak("glWindowPos2fMESA not available on this machine");
    };
    glWindowPos2fMESA(x, y);

SV *
glWindowPos2fv(p);
     const GLfloat *p;
CODE:
    if(! __glewWindowPos2fv) {
        croak("glWindowPos2fv not available on this machine");
    };
    glWindowPos2fv(p);

SV *
glWindowPos2fvARB(p);
     const GLfloat* p;
CODE:
    if(! __glewWindowPos2fvARB) {
        croak("glWindowPos2fvARB not available on this machine");
    };
    glWindowPos2fvARB(p);

SV *
glWindowPos2fvMESA(p);
     const GLfloat* p;
CODE:
    if(! __glewWindowPos2fvMESA) {
        croak("glWindowPos2fvMESA not available on this machine");
    };
    glWindowPos2fvMESA(p);

SV *
glWindowPos2i(x, y);
     GLint x;
     GLint y;
CODE:
    if(! __glewWindowPos2i) {
        croak("glWindowPos2i not available on this machine");
    };
    glWindowPos2i(x, y);

SV *
glWindowPos2iARB(x, y);
     GLint x;
     GLint y;
CODE:
    if(! __glewWindowPos2iARB) {
        croak("glWindowPos2iARB not available on this machine");
    };
    glWindowPos2iARB(x, y);

SV *
glWindowPos2iMESA(x, y);
     GLint x;
     GLint y;
CODE:
    if(! __glewWindowPos2iMESA) {
        croak("glWindowPos2iMESA not available on this machine");
    };
    glWindowPos2iMESA(x, y);

SV *
glWindowPos2iv(p);
     const GLint *p;
CODE:
    if(! __glewWindowPos2iv) {
        croak("glWindowPos2iv not available on this machine");
    };
    glWindowPos2iv(p);

SV *
glWindowPos2ivARB(p);
     const GLint* p;
CODE:
    if(! __glewWindowPos2ivARB) {
        croak("glWindowPos2ivARB not available on this machine");
    };
    glWindowPos2ivARB(p);

SV *
glWindowPos2ivMESA(p);
     const GLint* p;
CODE:
    if(! __glewWindowPos2ivMESA) {
        croak("glWindowPos2ivMESA not available on this machine");
    };
    glWindowPos2ivMESA(p);

SV *
glWindowPos2s(x, y);
     GLshort x;
     GLshort y;
CODE:
    if(! __glewWindowPos2s) {
        croak("glWindowPos2s not available on this machine");
    };
    glWindowPos2s(x, y);

SV *
glWindowPos2sARB(x, y);
     GLshort x;
     GLshort y;
CODE:
    if(! __glewWindowPos2sARB) {
        croak("glWindowPos2sARB not available on this machine");
    };
    glWindowPos2sARB(x, y);

SV *
glWindowPos2sMESA(x, y);
     GLshort x;
     GLshort y;
CODE:
    if(! __glewWindowPos2sMESA) {
        croak("glWindowPos2sMESA not available on this machine");
    };
    glWindowPos2sMESA(x, y);

SV *
glWindowPos2sv(p);
     const GLshort *p;
CODE:
    if(! __glewWindowPos2sv) {
        croak("glWindowPos2sv not available on this machine");
    };
    glWindowPos2sv(p);

SV *
glWindowPos2svARB(p);
     const GLshort* p;
CODE:
    if(! __glewWindowPos2svARB) {
        croak("glWindowPos2svARB not available on this machine");
    };
    glWindowPos2svARB(p);

SV *
glWindowPos2svMESA(p);
     const GLshort* p;
CODE:
    if(! __glewWindowPos2svMESA) {
        croak("glWindowPos2svMESA not available on this machine");
    };
    glWindowPos2svMESA(p);

SV *
glWindowPos3d(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewWindowPos3d) {
        croak("glWindowPos3d not available on this machine");
    };
    glWindowPos3d(x, y, z);

SV *
glWindowPos3dARB(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewWindowPos3dARB) {
        croak("glWindowPos3dARB not available on this machine");
    };
    glWindowPos3dARB(x, y, z);

SV *
glWindowPos3dMESA(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    if(! __glewWindowPos3dMESA) {
        croak("glWindowPos3dMESA not available on this machine");
    };
    glWindowPos3dMESA(x, y, z);

SV *
glWindowPos3dv(p);
     const GLdouble *p;
CODE:
    if(! __glewWindowPos3dv) {
        croak("glWindowPos3dv not available on this machine");
    };
    glWindowPos3dv(p);

SV *
glWindowPos3dvARB(p);
     const GLdouble* p;
CODE:
    if(! __glewWindowPos3dvARB) {
        croak("glWindowPos3dvARB not available on this machine");
    };
    glWindowPos3dvARB(p);

SV *
glWindowPos3dvMESA(p);
     const GLdouble* p;
CODE:
    if(! __glewWindowPos3dvMESA) {
        croak("glWindowPos3dvMESA not available on this machine");
    };
    glWindowPos3dvMESA(p);

SV *
glWindowPos3f(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewWindowPos3f) {
        croak("glWindowPos3f not available on this machine");
    };
    glWindowPos3f(x, y, z);

SV *
glWindowPos3fARB(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewWindowPos3fARB) {
        croak("glWindowPos3fARB not available on this machine");
    };
    glWindowPos3fARB(x, y, z);

SV *
glWindowPos3fMESA(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    if(! __glewWindowPos3fMESA) {
        croak("glWindowPos3fMESA not available on this machine");
    };
    glWindowPos3fMESA(x, y, z);

SV *
glWindowPos3fv(p);
     const GLfloat *p;
CODE:
    if(! __glewWindowPos3fv) {
        croak("glWindowPos3fv not available on this machine");
    };
    glWindowPos3fv(p);

SV *
glWindowPos3fvARB(p);
     const GLfloat* p;
CODE:
    if(! __glewWindowPos3fvARB) {
        croak("glWindowPos3fvARB not available on this machine");
    };
    glWindowPos3fvARB(p);

SV *
glWindowPos3fvMESA(p);
     const GLfloat* p;
CODE:
    if(! __glewWindowPos3fvMESA) {
        croak("glWindowPos3fvMESA not available on this machine");
    };
    glWindowPos3fvMESA(p);

SV *
glWindowPos3i(x, y, z);
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewWindowPos3i) {
        croak("glWindowPos3i not available on this machine");
    };
    glWindowPos3i(x, y, z);

SV *
glWindowPos3iARB(x, y, z);
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewWindowPos3iARB) {
        croak("glWindowPos3iARB not available on this machine");
    };
    glWindowPos3iARB(x, y, z);

SV *
glWindowPos3iMESA(x, y, z);
     GLint x;
     GLint y;
     GLint z;
CODE:
    if(! __glewWindowPos3iMESA) {
        croak("glWindowPos3iMESA not available on this machine");
    };
    glWindowPos3iMESA(x, y, z);

SV *
glWindowPos3iv(p);
     const GLint *p;
CODE:
    if(! __glewWindowPos3iv) {
        croak("glWindowPos3iv not available on this machine");
    };
    glWindowPos3iv(p);

SV *
glWindowPos3ivARB(p);
     const GLint* p;
CODE:
    if(! __glewWindowPos3ivARB) {
        croak("glWindowPos3ivARB not available on this machine");
    };
    glWindowPos3ivARB(p);

SV *
glWindowPos3ivMESA(p);
     const GLint* p;
CODE:
    if(! __glewWindowPos3ivMESA) {
        croak("glWindowPos3ivMESA not available on this machine");
    };
    glWindowPos3ivMESA(p);

SV *
glWindowPos3s(x, y, z);
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewWindowPos3s) {
        croak("glWindowPos3s not available on this machine");
    };
    glWindowPos3s(x, y, z);

SV *
glWindowPos3sARB(x, y, z);
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewWindowPos3sARB) {
        croak("glWindowPos3sARB not available on this machine");
    };
    glWindowPos3sARB(x, y, z);

SV *
glWindowPos3sMESA(x, y, z);
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    if(! __glewWindowPos3sMESA) {
        croak("glWindowPos3sMESA not available on this machine");
    };
    glWindowPos3sMESA(x, y, z);

SV *
glWindowPos3sv(p);
     const GLshort *p;
CODE:
    if(! __glewWindowPos3sv) {
        croak("glWindowPos3sv not available on this machine");
    };
    glWindowPos3sv(p);

SV *
glWindowPos3svARB(p);
     const GLshort* p;
CODE:
    if(! __glewWindowPos3svARB) {
        croak("glWindowPos3svARB not available on this machine");
    };
    glWindowPos3svARB(p);

SV *
glWindowPos3svMESA(p);
     const GLshort* p;
CODE:
    if(! __glewWindowPos3svMESA) {
        croak("glWindowPos3svMESA not available on this machine");
    };
    glWindowPos3svMESA(p);

SV *
glWindowPos4dMESA(x, y, z, w);
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    if(! __glewWindowPos4dMESA) {
        croak("glWindowPos4dMESA not available on this machine");
    };
    glWindowPos4dMESA(x, y, z, w);

SV *
glWindowPos4dvMESA(p);
     const GLdouble* p;
CODE:
    if(! __glewWindowPos4dvMESA) {
        croak("glWindowPos4dvMESA not available on this machine");
    };
    glWindowPos4dvMESA(p);

SV *
glWindowPos4fMESA(x, y, z, w);
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    if(! __glewWindowPos4fMESA) {
        croak("glWindowPos4fMESA not available on this machine");
    };
    glWindowPos4fMESA(x, y, z, w);

SV *
glWindowPos4fvMESA(p);
     const GLfloat* p;
CODE:
    if(! __glewWindowPos4fvMESA) {
        croak("glWindowPos4fvMESA not available on this machine");
    };
    glWindowPos4fvMESA(p);

SV *
glWindowPos4iMESA(x, y, z, w);
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    if(! __glewWindowPos4iMESA) {
        croak("glWindowPos4iMESA not available on this machine");
    };
    glWindowPos4iMESA(x, y, z, w);

SV *
glWindowPos4ivMESA(p);
     const GLint* p;
CODE:
    if(! __glewWindowPos4ivMESA) {
        croak("glWindowPos4ivMESA not available on this machine");
    };
    glWindowPos4ivMESA(p);

SV *
glWindowPos4sMESA(x, y, z, w);
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    if(! __glewWindowPos4sMESA) {
        croak("glWindowPos4sMESA not available on this machine");
    };
    glWindowPos4sMESA(x, y, z, w);

SV *
glWindowPos4svMESA(p);
     const GLshort* p;
CODE:
    if(! __glewWindowPos4svMESA) {
        croak("glWindowPos4svMESA not available on this machine");
    };
    glWindowPos4svMESA(p);

SV *
glWindowRectanglesEXT(mode, count, box);
     GLenum mode;
     GLsizei count;
     const GLint * box;
CODE:
    if(! __glewWindowRectanglesEXT) {
        croak("glWindowRectanglesEXT not available on this machine");
    };
    glWindowRectanglesEXT(mode, count, box);

SV *
glWriteMaskEXT(res, in, outX, outY, outZ, outW);
     GLuint res;
     GLuint in;
     GLenum outX;
     GLenum outY;
     GLenum outZ;
     GLenum outW;
CODE:
    if(! __glewWriteMaskEXT) {
        croak("glWriteMaskEXT not available on this machine");
    };
    glWriteMaskEXT(res, in, outX, outY, outZ, outW);

SV *
glAccum(op, value);
     GLenum op;
     GLfloat value;
CODE:
    glAccum(op, value);

SV *
glAlphaFunc(func, ref);
     GLenum func;
     GLclampf ref;
CODE:
    glAlphaFunc(func, ref);

GLboolean
glAreTexturesResident(n, textures, residences);
     GLsizei n;
     const GLuint *textures;
     GLboolean *residences;
CODE:
    RETVAL = glAreTexturesResident(n, textures, residences);
OUTPUT:
    RETVAL

SV *
glArrayElement(i);
     GLint i;
CODE:
    glArrayElement(i);

SV *
glBegin(mode);
     GLenum mode;
CODE:
    glBegin(mode);

SV *
glBindTexture(target, texture);
     GLenum target;
     GLuint texture;
CODE:
    glBindTexture(target, texture);

SV *
glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
     GLsizei width;
     GLsizei height;
     GLfloat xorig;
     GLfloat yorig;
     GLfloat xmove;
     GLfloat ymove;
     const GLubyte *bitmap;
CODE:
    glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);

SV *
glBlendFunc(sfactor, dfactor);
     GLenum sfactor;
     GLenum dfactor;
CODE:
    glBlendFunc(sfactor, dfactor);

SV *
glCallList(list);
     GLuint list;
CODE:
    glCallList(list);

SV *
glCallLists(n, type, lists);
     GLsizei n;
     GLenum type;
     const void *lists;
CODE:
    glCallLists(n, type, lists);

SV *
glClear(mask);
     GLbitfield mask;
CODE:
    glClear(mask);

SV *
glClearAccum(red, green, blue, alpha);
     GLfloat red;
     GLfloat green;
     GLfloat blue;
     GLfloat alpha;
CODE:
    glClearAccum(red, green, blue, alpha);

SV *
glClearColor(red, green, blue, alpha);
     GLclampf red;
     GLclampf green;
     GLclampf blue;
     GLclampf alpha;
CODE:
    glClearColor(red, green, blue, alpha);

SV *
glClearDepth(depth);
     GLclampd depth;
CODE:
    glClearDepth(depth);

SV *
glClearIndex(c);
     GLfloat c;
CODE:
    glClearIndex(c);

SV *
glClearStencil(s);
     GLint s;
CODE:
    glClearStencil(s);

SV *
glClipPlane(plane, equation);
     GLenum plane;
     const GLdouble *equation;
CODE:
    glClipPlane(plane, equation);

SV *
glColor3b(red, green, blue);
     GLbyte red;
     GLbyte green;
     GLbyte blue;
CODE:
    glColor3b(red, green, blue);

SV *
glColor3bv(v);
     const GLbyte *v;
CODE:
    glColor3bv(v);

SV *
glColor3d(red, green, blue);
     GLdouble red;
     GLdouble green;
     GLdouble blue;
CODE:
    glColor3d(red, green, blue);

SV *
glColor3dv(v);
     const GLdouble *v;
CODE:
    glColor3dv(v);

SV *
glColor3f(red, green, blue);
     GLfloat red;
     GLfloat green;
     GLfloat blue;
CODE:
    glColor3f(red, green, blue);

SV *
glColor3fv(v);
     const GLfloat *v;
CODE:
    glColor3fv(v);

SV *
glColor3i(red, green, blue);
     GLint red;
     GLint green;
     GLint blue;
CODE:
    glColor3i(red, green, blue);

SV *
glColor3iv(v);
     const GLint *v;
CODE:
    glColor3iv(v);

SV *
glColor3s(red, green, blue);
     GLshort red;
     GLshort green;
     GLshort blue;
CODE:
    glColor3s(red, green, blue);

SV *
glColor3sv(v);
     const GLshort *v;
CODE:
    glColor3sv(v);

SV *
glColor3ub(red, green, blue);
     GLubyte red;
     GLubyte green;
     GLubyte blue;
CODE:
    glColor3ub(red, green, blue);

SV *
glColor3ubv(v);
     const GLubyte *v;
CODE:
    glColor3ubv(v);

SV *
glColor3ui(red, green, blue);
     GLuint red;
     GLuint green;
     GLuint blue;
CODE:
    glColor3ui(red, green, blue);

SV *
glColor3uiv(v);
     const GLuint *v;
CODE:
    glColor3uiv(v);

SV *
glColor3us(red, green, blue);
     GLushort red;
     GLushort green;
     GLushort blue;
CODE:
    glColor3us(red, green, blue);

SV *
glColor3usv(v);
     const GLushort *v;
CODE:
    glColor3usv(v);

SV *
glColor4b(red, green, blue, alpha);
     GLbyte red;
     GLbyte green;
     GLbyte blue;
     GLbyte alpha;
CODE:
    glColor4b(red, green, blue, alpha);

SV *
glColor4bv(v);
     const GLbyte *v;
CODE:
    glColor4bv(v);

SV *
glColor4d(red, green, blue, alpha);
     GLdouble red;
     GLdouble green;
     GLdouble blue;
     GLdouble alpha;
CODE:
    glColor4d(red, green, blue, alpha);

SV *
glColor4dv(v);
     const GLdouble *v;
CODE:
    glColor4dv(v);

SV *
glColor4f(red, green, blue, alpha);
     GLfloat red;
     GLfloat green;
     GLfloat blue;
     GLfloat alpha;
CODE:
    glColor4f(red, green, blue, alpha);

SV *
glColor4fv(v);
     const GLfloat *v;
CODE:
    glColor4fv(v);

SV *
glColor4i(red, green, blue, alpha);
     GLint red;
     GLint green;
     GLint blue;
     GLint alpha;
CODE:
    glColor4i(red, green, blue, alpha);

SV *
glColor4iv(v);
     const GLint *v;
CODE:
    glColor4iv(v);

SV *
glColor4s(red, green, blue, alpha);
     GLshort red;
     GLshort green;
     GLshort blue;
     GLshort alpha;
CODE:
    glColor4s(red, green, blue, alpha);

SV *
glColor4sv(v);
     const GLshort *v;
CODE:
    glColor4sv(v);

SV *
glColor4ub(red, green, blue, alpha);
     GLubyte red;
     GLubyte green;
     GLubyte blue;
     GLubyte alpha;
CODE:
    glColor4ub(red, green, blue, alpha);

SV *
glColor4ubv(v);
     const GLubyte *v;
CODE:
    glColor4ubv(v);

SV *
glColor4ui(red, green, blue, alpha);
     GLuint red;
     GLuint green;
     GLuint blue;
     GLuint alpha;
CODE:
    glColor4ui(red, green, blue, alpha);

SV *
glColor4uiv(v);
     const GLuint *v;
CODE:
    glColor4uiv(v);

SV *
glColor4us(red, green, blue, alpha);
     GLushort red;
     GLushort green;
     GLushort blue;
     GLushort alpha;
CODE:
    glColor4us(red, green, blue, alpha);

SV *
glColor4usv(v);
     const GLushort *v;
CODE:
    glColor4usv(v);

SV *
glColorMask(red, green, blue, alpha);
     GLboolean red;
     GLboolean green;
     GLboolean blue;
     GLboolean alpha;
CODE:
    glColorMask(red, green, blue, alpha);

SV *
glColorMaterial(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    glColorMaterial(face, mode);

SV *
glColorPointer(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    glColorPointer(size, type, stride, pointer);

SV *
glCopyPixels(x, y, width, height, type);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLenum type;
CODE:
    glCopyPixels(x, y, width, height, type);

SV *
glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
     GLenum target;
     GLint level;
     GLenum internalFormat;
     GLint x;
     GLint y;
     GLsizei width;
     GLint border;
CODE:
    glCopyTexImage1D(target, level, internalFormat, x, y, width, border);

SV *
glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
     GLenum target;
     GLint level;
     GLenum internalFormat;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLint border;
CODE:
    glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);

SV *
glCopyTexSubImage1D(target, level, xoffset, x, y, width);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint x;
     GLint y;
     GLsizei width;
CODE:
    glCopyTexSubImage1D(target, level, xoffset, x, y, width);

SV *
glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);

SV *
glCullFace(mode);
     GLenum mode;
CODE:
    glCullFace(mode);

SV *
glDeleteLists(list, range);
     GLuint list;
     GLsizei range;
CODE:
    glDeleteLists(list, range);

SV *
glDeleteTextures(n, textures);
     GLsizei n;
     const GLuint *textures;
CODE:
    glDeleteTextures(n, textures);

SV *
glDepthFunc(func);
     GLenum func;
CODE:
    glDepthFunc(func);

SV *
glDepthMask(flag);
     GLboolean flag;
CODE:
    glDepthMask(flag);

SV *
glDepthRange(zNear, zFar);
     GLclampd zNear;
     GLclampd zFar;
CODE:
    glDepthRange(zNear, zFar);

SV *
glDisable(cap);
     GLenum cap;
CODE:
    glDisable(cap);

SV *
glDisableClientState(array);
     GLenum array;
CODE:
    glDisableClientState(array);

SV *
glDrawArrays(mode, first, count);
     GLenum mode;
     GLint first;
     GLsizei count;
CODE:
    glDrawArrays(mode, first, count);

SV *
glDrawBuffer(mode);
     GLenum mode;
CODE:
    glDrawBuffer(mode);

SV *
glDrawElements(mode, count, type, indices);
     GLenum mode;
     GLsizei count;
     GLenum type;
     const void *indices;
CODE:
    glDrawElements(mode, count, type, indices);

SV *
glDrawPixels(width, height, format, type, pixels);
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    glDrawPixels(width, height, format, type, pixels);

SV *
glEdgeFlag(flag);
     GLboolean flag;
CODE:
    glEdgeFlag(flag);

SV *
glEdgeFlagPointer(stride, pointer);
     GLsizei stride;
     const void *pointer;
CODE:
    glEdgeFlagPointer(stride, pointer);

SV *
glEdgeFlagv(flag);
     const GLboolean *flag;
CODE:
    glEdgeFlagv(flag);

SV *
glEnable(cap);
     GLenum cap;
CODE:
    glEnable(cap);

SV *
glEnableClientState(array);
     GLenum array;
CODE:
    glEnableClientState(array);

SV *
glEnd();
CODE:
    glEnd();

SV *
glEndList();
CODE:
    glEndList();

SV *
glEvalCoord1d(u);
     GLdouble u;
CODE:
    glEvalCoord1d(u);

SV *
glEvalCoord1dv(u);
     const GLdouble *u;
CODE:
    glEvalCoord1dv(u);

SV *
glEvalCoord1f(u);
     GLfloat u;
CODE:
    glEvalCoord1f(u);

SV *
glEvalCoord1fv(u);
     const GLfloat *u;
CODE:
    glEvalCoord1fv(u);

SV *
glEvalCoord2d(u, v);
     GLdouble u;
     GLdouble v;
CODE:
    glEvalCoord2d(u, v);

SV *
glEvalCoord2dv(u);
     const GLdouble *u;
CODE:
    glEvalCoord2dv(u);

SV *
glEvalCoord2f(u, v);
     GLfloat u;
     GLfloat v;
CODE:
    glEvalCoord2f(u, v);

SV *
glEvalCoord2fv(u);
     const GLfloat *u;
CODE:
    glEvalCoord2fv(u);

SV *
glEvalMesh1(mode, i1, i2);
     GLenum mode;
     GLint i1;
     GLint i2;
CODE:
    glEvalMesh1(mode, i1, i2);

SV *
glEvalMesh2(mode, i1, i2, j1, j2);
     GLenum mode;
     GLint i1;
     GLint i2;
     GLint j1;
     GLint j2;
CODE:
    glEvalMesh2(mode, i1, i2, j1, j2);

SV *
glEvalPoint1(i);
     GLint i;
CODE:
    glEvalPoint1(i);

SV *
glEvalPoint2(i, j);
     GLint i;
     GLint j;
CODE:
    glEvalPoint2(i, j);

SV *
glFeedbackBuffer(size, type, buffer);
     GLsizei size;
     GLenum type;
     GLfloat *buffer;
CODE:
    glFeedbackBuffer(size, type, buffer);

SV *
glFinish();
CODE:
    glFinish();

SV *
glFlush();
CODE:
    glFlush();

SV *
glFogf(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    glFogf(pname, param);

SV *
glFogfv(pname, params);
     GLenum pname;
     const GLfloat *params;
CODE:
    glFogfv(pname, params);

SV *
glFogi(pname, param);
     GLenum pname;
     GLint param;
CODE:
    glFogi(pname, param);

SV *
glFogiv(pname, params);
     GLenum pname;
     const GLint *params;
CODE:
    glFogiv(pname, params);

SV *
glFrontFace(mode);
     GLenum mode;
CODE:
    glFrontFace(mode);

SV *
glFrustum(left, right, bottom, top, zNear, zFar);
     GLdouble left;
     GLdouble right;
     GLdouble bottom;
     GLdouble top;
     GLdouble zNear;
     GLdouble zFar;
CODE:
    glFrustum(left, right, bottom, top, zNear, zFar);

GLuint
glGenLists(range);
     GLsizei range;
CODE:
    RETVAL = glGenLists(range);
OUTPUT:
    RETVAL

SV *
glGenTextures(n, textures);
     GLsizei n;
     GLuint *textures;
CODE:
    glGenTextures(n, textures);

SV *
glGetBooleanv(pname, params);
     GLenum pname;
     GLboolean *params;
CODE:
    glGetBooleanv(pname, params);

SV *
glGetClipPlane(plane, equation);
     GLenum plane;
     GLdouble *equation;
CODE:
    glGetClipPlane(plane, equation);

SV *
glGetDoublev(pname, params);
     GLenum pname;
     GLdouble *params;
CODE:
    glGetDoublev(pname, params);

SV *
glGetFloatv(pname, params);
     GLenum pname;
     GLfloat *params;
CODE:
    glGetFloatv(pname, params);

SV *
glGetIntegerv(pname, params);
     GLenum pname;
     GLint *params;
CODE:
    glGetIntegerv(pname, params);

SV *
glGetLightfv(light, pname, params);
     GLenum light;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetLightfv(light, pname, params);

SV *
glGetLightiv(light, pname, params);
     GLenum light;
     GLenum pname;
     GLint *params;
CODE:
    glGetLightiv(light, pname, params);

SV *
glGetMapdv(target, query, v);
     GLenum target;
     GLenum query;
     GLdouble *v;
CODE:
    glGetMapdv(target, query, v);

SV *
glGetMapfv(target, query, v);
     GLenum target;
     GLenum query;
     GLfloat *v;
CODE:
    glGetMapfv(target, query, v);

SV *
glGetMapiv(target, query, v);
     GLenum target;
     GLenum query;
     GLint *v;
CODE:
    glGetMapiv(target, query, v);

SV *
glGetMaterialfv(face, pname, params);
     GLenum face;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetMaterialfv(face, pname, params);

SV *
glGetMaterialiv(face, pname, params);
     GLenum face;
     GLenum pname;
     GLint *params;
CODE:
    glGetMaterialiv(face, pname, params);

SV *
glGetPixelMapfv(map, values);
     GLenum map;
     GLfloat *values;
CODE:
    glGetPixelMapfv(map, values);

SV *
glGetPixelMapuiv(map, values);
     GLenum map;
     GLuint *values;
CODE:
    glGetPixelMapuiv(map, values);

SV *
glGetPixelMapusv(map, values);
     GLenum map;
     GLushort *values;
CODE:
    glGetPixelMapusv(map, values);

SV *
glGetPointerv(pname, params);
     GLenum pname;
     void* *params;
CODE:
    glGetPointerv(pname, params);

SV *
glGetPolygonStipple(mask);
     GLubyte *mask;
CODE:
    glGetPolygonStipple(mask);

SV *
glGetTexEnvfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetTexEnvfv(target, pname, params);

SV *
glGetTexEnviv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    glGetTexEnviv(target, pname, params);

SV *
glGetTexGendv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     GLdouble *params;
CODE:
    glGetTexGendv(coord, pname, params);

SV *
glGetTexGenfv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetTexGenfv(coord, pname, params);

SV *
glGetTexGeniv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     GLint *params;
CODE:
    glGetTexGeniv(coord, pname, params);

SV *
glGetTexImage(target, level, format, type, pixels);
     GLenum target;
     GLint level;
     GLenum format;
     GLenum type;
     void *pixels;
CODE:
    glGetTexImage(target, level, format, type, pixels);

SV *
glGetTexLevelParameterfv(target, level, pname, params);
     GLenum target;
     GLint level;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetTexLevelParameterfv(target, level, pname, params);

SV *
glGetTexLevelParameteriv(target, level, pname, params);
     GLenum target;
     GLint level;
     GLenum pname;
     GLint *params;
CODE:
    glGetTexLevelParameteriv(target, level, pname, params);

SV *
glGetTexParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLfloat *params;
CODE:
    glGetTexParameterfv(target, pname, params);

SV *
glGetTexParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     GLint *params;
CODE:
    glGetTexParameteriv(target, pname, params);

SV *
glHint(target, mode);
     GLenum target;
     GLenum mode;
CODE:
    glHint(target, mode);

SV *
glIndexMask(mask);
     GLuint mask;
CODE:
    glIndexMask(mask);

SV *
glIndexPointer(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    glIndexPointer(type, stride, pointer);

SV *
glIndexd(c);
     GLdouble c;
CODE:
    glIndexd(c);

SV *
glIndexdv(c);
     const GLdouble *c;
CODE:
    glIndexdv(c);

SV *
glIndexf(c);
     GLfloat c;
CODE:
    glIndexf(c);

SV *
glIndexfv(c);
     const GLfloat *c;
CODE:
    glIndexfv(c);

SV *
glIndexi(c);
     GLint c;
CODE:
    glIndexi(c);

SV *
glIndexiv(c);
     const GLint *c;
CODE:
    glIndexiv(c);

SV *
glIndexs(c);
     GLshort c;
CODE:
    glIndexs(c);

SV *
glIndexsv(c);
     const GLshort *c;
CODE:
    glIndexsv(c);

SV *
glIndexub(c);
     GLubyte c;
CODE:
    glIndexub(c);

SV *
glIndexubv(c);
     const GLubyte *c;
CODE:
    glIndexubv(c);

SV *
glInitNames();
CODE:
    glInitNames();

SV *
glInterleavedArrays(format, stride, pointer);
     GLenum format;
     GLsizei stride;
     const void *pointer;
CODE:
    glInterleavedArrays(format, stride, pointer);

GLboolean
glIsEnabled(cap);
     GLenum cap;
CODE:
    RETVAL = glIsEnabled(cap);
OUTPUT:
    RETVAL

GLboolean
glIsList(list);
     GLuint list;
CODE:
    RETVAL = glIsList(list);
OUTPUT:
    RETVAL

GLboolean
glIsTexture(texture);
     GLuint texture;
CODE:
    RETVAL = glIsTexture(texture);
OUTPUT:
    RETVAL

SV *
glLightModelf(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    glLightModelf(pname, param);

SV *
glLightModelfv(pname, params);
     GLenum pname;
     const GLfloat *params;
CODE:
    glLightModelfv(pname, params);

SV *
glLightModeli(pname, param);
     GLenum pname;
     GLint param;
CODE:
    glLightModeli(pname, param);

SV *
glLightModeliv(pname, params);
     GLenum pname;
     const GLint *params;
CODE:
    glLightModeliv(pname, params);

SV *
glLightf(light, pname, param);
     GLenum light;
     GLenum pname;
     GLfloat param;
CODE:
    glLightf(light, pname, param);

SV *
glLightfv(light, pname, params);
     GLenum light;
     GLenum pname;
     const GLfloat *params;
CODE:
    glLightfv(light, pname, params);

SV *
glLighti(light, pname, param);
     GLenum light;
     GLenum pname;
     GLint param;
CODE:
    glLighti(light, pname, param);

SV *
glLightiv(light, pname, params);
     GLenum light;
     GLenum pname;
     const GLint *params;
CODE:
    glLightiv(light, pname, params);

SV *
glLineStipple(factor, pattern);
     GLint factor;
     GLushort pattern;
CODE:
    glLineStipple(factor, pattern);

SV *
glLineWidth(width);
     GLfloat width;
CODE:
    glLineWidth(width);

SV *
glListBase(base);
     GLuint base;
CODE:
    glListBase(base);

SV *
glLoadIdentity();
CODE:
    glLoadIdentity();

SV *
glLoadMatrixd(m);
     const GLdouble *m;
CODE:
    glLoadMatrixd(m);

SV *
glLoadMatrixf(m);
     const GLfloat *m;
CODE:
    glLoadMatrixf(m);

SV *
glLoadName(name);
     GLuint name;
CODE:
    glLoadName(name);

SV *
glLogicOp(opcode);
     GLenum opcode;
CODE:
    glLogicOp(opcode);

SV *
glMap1d(target, u1, u2, stride, order, points);
     GLenum target;
     GLdouble u1;
     GLdouble u2;
     GLint stride;
     GLint order;
     const GLdouble *points;
CODE:
    glMap1d(target, u1, u2, stride, order, points);

SV *
glMap1f(target, u1, u2, stride, order, points);
     GLenum target;
     GLfloat u1;
     GLfloat u2;
     GLint stride;
     GLint order;
     const GLfloat *points;
CODE:
    glMap1f(target, u1, u2, stride, order, points);

SV *
glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
     GLenum target;
     GLdouble u1;
     GLdouble u2;
     GLint ustride;
     GLint uorder;
     GLdouble v1;
     GLdouble v2;
     GLint vstride;
     GLint vorder;
     const GLdouble *points;
CODE:
    glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);

SV *
glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
     GLenum target;
     GLfloat u1;
     GLfloat u2;
     GLint ustride;
     GLint uorder;
     GLfloat v1;
     GLfloat v2;
     GLint vstride;
     GLint vorder;
     const GLfloat *points;
CODE:
    glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);

SV *
glMapGrid1d(un, u1, u2);
     GLint un;
     GLdouble u1;
     GLdouble u2;
CODE:
    glMapGrid1d(un, u1, u2);

SV *
glMapGrid1f(un, u1, u2);
     GLint un;
     GLfloat u1;
     GLfloat u2;
CODE:
    glMapGrid1f(un, u1, u2);

SV *
glMapGrid2d(un, u1, u2, vn, v1, v2);
     GLint un;
     GLdouble u1;
     GLdouble u2;
     GLint vn;
     GLdouble v1;
     GLdouble v2;
CODE:
    glMapGrid2d(un, u1, u2, vn, v1, v2);

SV *
glMapGrid2f(un, u1, u2, vn, v1, v2);
     GLint un;
     GLfloat u1;
     GLfloat u2;
     GLint vn;
     GLfloat v1;
     GLfloat v2;
CODE:
    glMapGrid2f(un, u1, u2, vn, v1, v2);

SV *
glMaterialf(face, pname, param);
     GLenum face;
     GLenum pname;
     GLfloat param;
CODE:
    glMaterialf(face, pname, param);

SV *
glMaterialfv(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLfloat *params;
CODE:
    glMaterialfv(face, pname, params);

SV *
glMateriali(face, pname, param);
     GLenum face;
     GLenum pname;
     GLint param;
CODE:
    glMateriali(face, pname, param);

SV *
glMaterialiv(face, pname, params);
     GLenum face;
     GLenum pname;
     const GLint *params;
CODE:
    glMaterialiv(face, pname, params);

SV *
glMatrixMode(mode);
     GLenum mode;
CODE:
    glMatrixMode(mode);

SV *
glMultMatrixd(m);
     const GLdouble *m;
CODE:
    glMultMatrixd(m);

SV *
glMultMatrixf(m);
     const GLfloat *m;
CODE:
    glMultMatrixf(m);

SV *
glNewList(list, mode);
     GLuint list;
     GLenum mode;
CODE:
    glNewList(list, mode);

SV *
glNormal3b(nx, ny, nz);
     GLbyte nx;
     GLbyte ny;
     GLbyte nz;
CODE:
    glNormal3b(nx, ny, nz);

SV *
glNormal3bv(v);
     const GLbyte *v;
CODE:
    glNormal3bv(v);

SV *
glNormal3d(nx, ny, nz);
     GLdouble nx;
     GLdouble ny;
     GLdouble nz;
CODE:
    glNormal3d(nx, ny, nz);

SV *
glNormal3dv(v);
     const GLdouble *v;
CODE:
    glNormal3dv(v);

SV *
glNormal3f(nx, ny, nz);
     GLfloat nx;
     GLfloat ny;
     GLfloat nz;
CODE:
    glNormal3f(nx, ny, nz);

SV *
glNormal3fv(v);
     const GLfloat *v;
CODE:
    glNormal3fv(v);

SV *
glNormal3i(nx, ny, nz);
     GLint nx;
     GLint ny;
     GLint nz;
CODE:
    glNormal3i(nx, ny, nz);

SV *
glNormal3iv(v);
     const GLint *v;
CODE:
    glNormal3iv(v);

SV *
glNormal3s(nx, ny, nz);
     GLshort nx;
     GLshort ny;
     GLshort nz;
CODE:
    glNormal3s(nx, ny, nz);

SV *
glNormal3sv(v);
     const GLshort *v;
CODE:
    glNormal3sv(v);

SV *
glNormalPointer(type, stride, pointer);
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    glNormalPointer(type, stride, pointer);

SV *
glOrtho(left, right, bottom, top, zNear, zFar);
     GLdouble left;
     GLdouble right;
     GLdouble bottom;
     GLdouble top;
     GLdouble zNear;
     GLdouble zFar;
CODE:
    glOrtho(left, right, bottom, top, zNear, zFar);

SV *
glPassThrough(token);
     GLfloat token;
CODE:
    glPassThrough(token);

SV *
glPixelMapfv(map, mapsize, values);
     GLenum map;
     GLsizei mapsize;
     const GLfloat *values;
CODE:
    glPixelMapfv(map, mapsize, values);

SV *
glPixelMapuiv(map, mapsize, values);
     GLenum map;
     GLsizei mapsize;
     const GLuint *values;
CODE:
    glPixelMapuiv(map, mapsize, values);

SV *
glPixelMapusv(map, mapsize, values);
     GLenum map;
     GLsizei mapsize;
     const GLushort *values;
CODE:
    glPixelMapusv(map, mapsize, values);

SV *
glPixelStoref(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    glPixelStoref(pname, param);

SV *
glPixelStorei(pname, param);
     GLenum pname;
     GLint param;
CODE:
    glPixelStorei(pname, param);

SV *
glPixelTransferf(pname, param);
     GLenum pname;
     GLfloat param;
CODE:
    glPixelTransferf(pname, param);

SV *
glPixelTransferi(pname, param);
     GLenum pname;
     GLint param;
CODE:
    glPixelTransferi(pname, param);

SV *
glPixelZoom(xfactor, yfactor);
     GLfloat xfactor;
     GLfloat yfactor;
CODE:
    glPixelZoom(xfactor, yfactor);

SV *
glPointSize(size);
     GLfloat size;
CODE:
    glPointSize(size);

SV *
glPolygonMode(face, mode);
     GLenum face;
     GLenum mode;
CODE:
    glPolygonMode(face, mode);

SV *
glPolygonOffset(factor, units);
     GLfloat factor;
     GLfloat units;
CODE:
    glPolygonOffset(factor, units);

SV *
glPolygonStipple(mask);
     const GLubyte *mask;
CODE:
    glPolygonStipple(mask);

SV *
glPopAttrib();
CODE:
    glPopAttrib();

SV *
glPopClientAttrib();
CODE:
    glPopClientAttrib();

SV *
glPopMatrix();
CODE:
    glPopMatrix();

SV *
glPopName();
CODE:
    glPopName();

SV *
glPrioritizeTextures(n, textures, priorities);
     GLsizei n;
     const GLuint *textures;
     const GLclampf *priorities;
CODE:
    glPrioritizeTextures(n, textures, priorities);

SV *
glPushAttrib(mask);
     GLbitfield mask;
CODE:
    glPushAttrib(mask);

SV *
glPushClientAttrib(mask);
     GLbitfield mask;
CODE:
    glPushClientAttrib(mask);

SV *
glPushMatrix();
CODE:
    glPushMatrix();

SV *
glPushName(name);
     GLuint name;
CODE:
    glPushName(name);

SV *
glRasterPos2d(x, y);
     GLdouble x;
     GLdouble y;
CODE:
    glRasterPos2d(x, y);

SV *
glRasterPos2dv(v);
     const GLdouble *v;
CODE:
    glRasterPos2dv(v);

SV *
glRasterPos2f(x, y);
     GLfloat x;
     GLfloat y;
CODE:
    glRasterPos2f(x, y);

SV *
glRasterPos2fv(v);
     const GLfloat *v;
CODE:
    glRasterPos2fv(v);

SV *
glRasterPos2i(x, y);
     GLint x;
     GLint y;
CODE:
    glRasterPos2i(x, y);

SV *
glRasterPos2iv(v);
     const GLint *v;
CODE:
    glRasterPos2iv(v);

SV *
glRasterPos2s(x, y);
     GLshort x;
     GLshort y;
CODE:
    glRasterPos2s(x, y);

SV *
glRasterPos2sv(v);
     const GLshort *v;
CODE:
    glRasterPos2sv(v);

SV *
glRasterPos3d(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    glRasterPos3d(x, y, z);

SV *
glRasterPos3dv(v);
     const GLdouble *v;
CODE:
    glRasterPos3dv(v);

SV *
glRasterPos3f(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    glRasterPos3f(x, y, z);

SV *
glRasterPos3fv(v);
     const GLfloat *v;
CODE:
    glRasterPos3fv(v);

SV *
glRasterPos3i(x, y, z);
     GLint x;
     GLint y;
     GLint z;
CODE:
    glRasterPos3i(x, y, z);

SV *
glRasterPos3iv(v);
     const GLint *v;
CODE:
    glRasterPos3iv(v);

SV *
glRasterPos3s(x, y, z);
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    glRasterPos3s(x, y, z);

SV *
glRasterPos3sv(v);
     const GLshort *v;
CODE:
    glRasterPos3sv(v);

SV *
glRasterPos4d(x, y, z, w);
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    glRasterPos4d(x, y, z, w);

SV *
glRasterPos4dv(v);
     const GLdouble *v;
CODE:
    glRasterPos4dv(v);

SV *
glRasterPos4f(x, y, z, w);
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    glRasterPos4f(x, y, z, w);

SV *
glRasterPos4fv(v);
     const GLfloat *v;
CODE:
    glRasterPos4fv(v);

SV *
glRasterPos4i(x, y, z, w);
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    glRasterPos4i(x, y, z, w);

SV *
glRasterPos4iv(v);
     const GLint *v;
CODE:
    glRasterPos4iv(v);

SV *
glRasterPos4s(x, y, z, w);
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    glRasterPos4s(x, y, z, w);

SV *
glRasterPos4sv(v);
     const GLshort *v;
CODE:
    glRasterPos4sv(v);

SV *
glReadBuffer(mode);
     GLenum mode;
CODE:
    glReadBuffer(mode);

SV *
glReadPixels(x, y, width, height, format, type, pixels);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     void *pixels;
CODE:
    glReadPixels(x, y, width, height, format, type, pixels);

SV *
glRectd(x1, y1, x2, y2);
     GLdouble x1;
     GLdouble y1;
     GLdouble x2;
     GLdouble y2;
CODE:
    glRectd(x1, y1, x2, y2);

SV *
glRectdv(v1, v2);
     const GLdouble *v1;
     const GLdouble *v2;
CODE:
    glRectdv(v1, v2);

SV *
glRectf(x1, y1, x2, y2);
     GLfloat x1;
     GLfloat y1;
     GLfloat x2;
     GLfloat y2;
CODE:
    glRectf(x1, y1, x2, y2);

SV *
glRectfv(v1, v2);
     const GLfloat *v1;
     const GLfloat *v2;
CODE:
    glRectfv(v1, v2);

SV *
glRecti(x1, y1, x2, y2);
     GLint x1;
     GLint y1;
     GLint x2;
     GLint y2;
CODE:
    glRecti(x1, y1, x2, y2);

SV *
glRectiv(v1, v2);
     const GLint *v1;
     const GLint *v2;
CODE:
    glRectiv(v1, v2);

SV *
glRects(x1, y1, x2, y2);
     GLshort x1;
     GLshort y1;
     GLshort x2;
     GLshort y2;
CODE:
    glRects(x1, y1, x2, y2);

SV *
glRectsv(v1, v2);
     const GLshort *v1;
     const GLshort *v2;
CODE:
    glRectsv(v1, v2);

GLint
glRenderMode(mode);
     GLenum mode;
CODE:
    RETVAL = glRenderMode(mode);
OUTPUT:
    RETVAL

SV *
glRotated(angle, x, y, z);
     GLdouble angle;
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    glRotated(angle, x, y, z);

SV *
glRotatef(angle, x, y, z);
     GLfloat angle;
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    glRotatef(angle, x, y, z);

SV *
glScaled(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    glScaled(x, y, z);

SV *
glScalef(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    glScalef(x, y, z);

SV *
glScissor(x, y, width, height);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    glScissor(x, y, width, height);

SV *
glSelectBuffer(size, buffer);
     GLsizei size;
     GLuint *buffer;
CODE:
    glSelectBuffer(size, buffer);

SV *
glShadeModel(mode);
     GLenum mode;
CODE:
    glShadeModel(mode);

SV *
glStencilFunc(func, ref, mask);
     GLenum func;
     GLint ref;
     GLuint mask;
CODE:
    glStencilFunc(func, ref, mask);

SV *
glStencilMask(mask);
     GLuint mask;
CODE:
    glStencilMask(mask);

SV *
glStencilOp(fail, zfail, zpass);
     GLenum fail;
     GLenum zfail;
     GLenum zpass;
CODE:
    glStencilOp(fail, zfail, zpass);

SV *
glTexCoord1d(s);
     GLdouble s;
CODE:
    glTexCoord1d(s);

SV *
glTexCoord1dv(v);
     const GLdouble *v;
CODE:
    glTexCoord1dv(v);

SV *
glTexCoord1f(s);
     GLfloat s;
CODE:
    glTexCoord1f(s);

SV *
glTexCoord1fv(v);
     const GLfloat *v;
CODE:
    glTexCoord1fv(v);

SV *
glTexCoord1i(s);
     GLint s;
CODE:
    glTexCoord1i(s);

SV *
glTexCoord1iv(v);
     const GLint *v;
CODE:
    glTexCoord1iv(v);

SV *
glTexCoord1s(s);
     GLshort s;
CODE:
    glTexCoord1s(s);

SV *
glTexCoord1sv(v);
     const GLshort *v;
CODE:
    glTexCoord1sv(v);

SV *
glTexCoord2d(s, t);
     GLdouble s;
     GLdouble t;
CODE:
    glTexCoord2d(s, t);

SV *
glTexCoord2dv(v);
     const GLdouble *v;
CODE:
    glTexCoord2dv(v);

SV *
glTexCoord2f(s, t);
     GLfloat s;
     GLfloat t;
CODE:
    glTexCoord2f(s, t);

SV *
glTexCoord2fv(v);
     const GLfloat *v;
CODE:
    glTexCoord2fv(v);

SV *
glTexCoord2i(s, t);
     GLint s;
     GLint t;
CODE:
    glTexCoord2i(s, t);

SV *
glTexCoord2iv(v);
     const GLint *v;
CODE:
    glTexCoord2iv(v);

SV *
glTexCoord2s(s, t);
     GLshort s;
     GLshort t;
CODE:
    glTexCoord2s(s, t);

SV *
glTexCoord2sv(v);
     const GLshort *v;
CODE:
    glTexCoord2sv(v);

SV *
glTexCoord3d(s, t, r);
     GLdouble s;
     GLdouble t;
     GLdouble r;
CODE:
    glTexCoord3d(s, t, r);

SV *
glTexCoord3dv(v);
     const GLdouble *v;
CODE:
    glTexCoord3dv(v);

SV *
glTexCoord3f(s, t, r);
     GLfloat s;
     GLfloat t;
     GLfloat r;
CODE:
    glTexCoord3f(s, t, r);

SV *
glTexCoord3fv(v);
     const GLfloat *v;
CODE:
    glTexCoord3fv(v);

SV *
glTexCoord3i(s, t, r);
     GLint s;
     GLint t;
     GLint r;
CODE:
    glTexCoord3i(s, t, r);

SV *
glTexCoord3iv(v);
     const GLint *v;
CODE:
    glTexCoord3iv(v);

SV *
glTexCoord3s(s, t, r);
     GLshort s;
     GLshort t;
     GLshort r;
CODE:
    glTexCoord3s(s, t, r);

SV *
glTexCoord3sv(v);
     const GLshort *v;
CODE:
    glTexCoord3sv(v);

SV *
glTexCoord4d(s, t, r, q);
     GLdouble s;
     GLdouble t;
     GLdouble r;
     GLdouble q;
CODE:
    glTexCoord4d(s, t, r, q);

SV *
glTexCoord4dv(v);
     const GLdouble *v;
CODE:
    glTexCoord4dv(v);

SV *
glTexCoord4f(s, t, r, q);
     GLfloat s;
     GLfloat t;
     GLfloat r;
     GLfloat q;
CODE:
    glTexCoord4f(s, t, r, q);

SV *
glTexCoord4fv(v);
     const GLfloat *v;
CODE:
    glTexCoord4fv(v);

SV *
glTexCoord4i(s, t, r, q);
     GLint s;
     GLint t;
     GLint r;
     GLint q;
CODE:
    glTexCoord4i(s, t, r, q);

SV *
glTexCoord4iv(v);
     const GLint *v;
CODE:
    glTexCoord4iv(v);

SV *
glTexCoord4s(s, t, r, q);
     GLshort s;
     GLshort t;
     GLshort r;
     GLshort q;
CODE:
    glTexCoord4s(s, t, r, q);

SV *
glTexCoord4sv(v);
     const GLshort *v;
CODE:
    glTexCoord4sv(v);

SV *
glTexCoordPointer(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    glTexCoordPointer(size, type, stride, pointer);

SV *
glTexEnvf(target, pname, param);
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    glTexEnvf(target, pname, param);

SV *
glTexEnvfv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat *params;
CODE:
    glTexEnvfv(target, pname, params);

SV *
glTexEnvi(target, pname, param);
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    glTexEnvi(target, pname, param);

SV *
glTexEnviv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint *params;
CODE:
    glTexEnviv(target, pname, params);

SV *
glTexGend(coord, pname, param);
     GLenum coord;
     GLenum pname;
     GLdouble param;
CODE:
    glTexGend(coord, pname, param);

SV *
glTexGendv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     const GLdouble *params;
CODE:
    glTexGendv(coord, pname, params);

SV *
glTexGenf(coord, pname, param);
     GLenum coord;
     GLenum pname;
     GLfloat param;
CODE:
    glTexGenf(coord, pname, param);

SV *
glTexGenfv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     const GLfloat *params;
CODE:
    glTexGenfv(coord, pname, params);

SV *
glTexGeni(coord, pname, param);
     GLenum coord;
     GLenum pname;
     GLint param;
CODE:
    glTexGeni(coord, pname, param);

SV *
glTexGeniv(coord, pname, params);
     GLenum coord;
     GLenum pname;
     const GLint *params;
CODE:
    glTexGeniv(coord, pname, params);

SV *
glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    glTexImage1D(target, level, internalformat, width, border, format, type, pixels);

SV *
glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
     GLenum target;
     GLint level;
     GLint internalformat;
     GLsizei width;
     GLsizei height;
     GLint border;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);

SV *
glTexParameterf(target, pname, param);
     GLenum target;
     GLenum pname;
     GLfloat param;
CODE:
    glTexParameterf(target, pname, param);

SV *
glTexParameterfv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLfloat *params;
CODE:
    glTexParameterfv(target, pname, params);

SV *
glTexParameteri(target, pname, param);
     GLenum target;
     GLenum pname;
     GLint param;
CODE:
    glTexParameteri(target, pname, param);

SV *
glTexParameteriv(target, pname, params);
     GLenum target;
     GLenum pname;
     const GLint *params;
CODE:
    glTexParameteriv(target, pname, params);

SV *
glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLsizei width;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    glTexSubImage1D(target, level, xoffset, width, format, type, pixels);

SV *
glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
     GLenum target;
     GLint level;
     GLint xoffset;
     GLint yoffset;
     GLsizei width;
     GLsizei height;
     GLenum format;
     GLenum type;
     const void *pixels;
CODE:
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);

SV *
glTranslated(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    glTranslated(x, y, z);

SV *
glTranslatef(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    glTranslatef(x, y, z);

SV *
glVertex2d(x, y);
     GLdouble x;
     GLdouble y;
CODE:
    glVertex2d(x, y);

SV *
glVertex2dv(v);
     const GLdouble *v;
CODE:
    glVertex2dv(v);

SV *
glVertex2f(x, y);
     GLfloat x;
     GLfloat y;
CODE:
    glVertex2f(x, y);

SV *
glVertex2fv(v);
     const GLfloat *v;
CODE:
    glVertex2fv(v);

SV *
glVertex2i(x, y);
     GLint x;
     GLint y;
CODE:
    glVertex2i(x, y);

SV *
glVertex2iv(v);
     const GLint *v;
CODE:
    glVertex2iv(v);

SV *
glVertex2s(x, y);
     GLshort x;
     GLshort y;
CODE:
    glVertex2s(x, y);

SV *
glVertex2sv(v);
     const GLshort *v;
CODE:
    glVertex2sv(v);

SV *
glVertex3d(x, y, z);
     GLdouble x;
     GLdouble y;
     GLdouble z;
CODE:
    glVertex3d(x, y, z);

SV *
glVertex3dv(v);
     const GLdouble *v;
CODE:
    glVertex3dv(v);

SV *
glVertex3f(x, y, z);
     GLfloat x;
     GLfloat y;
     GLfloat z;
CODE:
    glVertex3f(x, y, z);

SV *
glVertex3fv(v);
     const GLfloat *v;
CODE:
    glVertex3fv(v);

SV *
glVertex3i(x, y, z);
     GLint x;
     GLint y;
     GLint z;
CODE:
    glVertex3i(x, y, z);

SV *
glVertex3iv(v);
     const GLint *v;
CODE:
    glVertex3iv(v);

SV *
glVertex3s(x, y, z);
     GLshort x;
     GLshort y;
     GLshort z;
CODE:
    glVertex3s(x, y, z);

SV *
glVertex3sv(v);
     const GLshort *v;
CODE:
    glVertex3sv(v);

SV *
glVertex4d(x, y, z, w);
     GLdouble x;
     GLdouble y;
     GLdouble z;
     GLdouble w;
CODE:
    glVertex4d(x, y, z, w);

SV *
glVertex4dv(v);
     const GLdouble *v;
CODE:
    glVertex4dv(v);

SV *
glVertex4f(x, y, z, w);
     GLfloat x;
     GLfloat y;
     GLfloat z;
     GLfloat w;
CODE:
    glVertex4f(x, y, z, w);

SV *
glVertex4fv(v);
     const GLfloat *v;
CODE:
    glVertex4fv(v);

SV *
glVertex4i(x, y, z, w);
     GLint x;
     GLint y;
     GLint z;
     GLint w;
CODE:
    glVertex4i(x, y, z, w);

SV *
glVertex4iv(v);
     const GLint *v;
CODE:
    glVertex4iv(v);

SV *
glVertex4s(x, y, z, w);
     GLshort x;
     GLshort y;
     GLshort z;
     GLshort w;
CODE:
    glVertex4s(x, y, z, w);

SV *
glVertex4sv(v);
     const GLshort *v;
CODE:
    glVertex4sv(v);

SV *
glVertexPointer(size, type, stride, pointer);
     GLint size;
     GLenum type;
     GLsizei stride;
     const void *pointer;
CODE:
    glVertexPointer(size, type, stride, pointer);

SV *
glViewport(x, y, width, height);
     GLint x;
     GLint y;
     GLsizei width;
     GLsizei height;
CODE:
    glViewport(x, y, width, height);

