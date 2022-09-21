#ifndef __GWEBGL_WEBGL_RENDERING_CONTEXT_BASE_H
#define __GWEBGL_WEBGL_RENDERING_CONTEXT_BASE_H

#include <epoxy/gl.h>
#include <glib-object.h>
#include "handle-types.h"

G_BEGIN_DECLS

#define GWEBGL_TYPE_WEBGL_RENDERING_CONTEXT_BASE \
    gwebgl_webgl_rendering_context_base_get_type()
G_DECLARE_DERIVABLE_TYPE( \
    GwebglWebGLRenderingContextBase, gwebgl_webgl_rendering_context_base, \
    GWEBGL, WEBGL_RENDERING_CONTEXT_BASE, GObject)

struct _GwebglWebGLRenderingContextBaseClass {
    GObjectClass parent_class;
};

void 
gwebgl_webgl_rendering_context_base_activeTexture(
    GwebglWebGLRenderingContextBase *self,
    guint texture);

void 
gwebgl_webgl_rendering_context_base_attachShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLShader shader);

void 
gwebgl_webgl_rendering_context_base_bindAttribLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    const gchar *name);

void 
gwebgl_webgl_rendering_context_base_bindBuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLBuffer buffer);

void 
gwebgl_webgl_rendering_context_base_bindFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLFramebuffer framebuffer);

void 
gwebgl_webgl_rendering_context_base_bindRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLRenderbuffer renderbuffer);

void 
gwebgl_webgl_rendering_context_base_bindTexture(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLTexture texture);

void 
gwebgl_webgl_rendering_context_base_blendColor(
    GwebglWebGLRenderingContextBase *self,
    gfloat red,
    gfloat green,
    gfloat blue,
    gfloat alpha);

void 
gwebgl_webgl_rendering_context_base_blendEquation(
    GwebglWebGLRenderingContextBase *self,
    guint mode);

void 
gwebgl_webgl_rendering_context_base_blendEquationSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint modeRGB,
    guint modeAlpha);

void 
gwebgl_webgl_rendering_context_base_blendFunc(
    GwebglWebGLRenderingContextBase *self,
    guint sfactor,
    guint dfactor);

void 
gwebgl_webgl_rendering_context_base_blendFuncSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint srcRGB,
    guint dstRGB,
    guint srcAlpha,
    guint dstAlpha);

guint 
gwebgl_webgl_rendering_context_base_checkFramebufferStatus(
    GwebglWebGLRenderingContextBase *self,
    guint target);

void 
gwebgl_webgl_rendering_context_base_clear(
    GwebglWebGLRenderingContextBase *self,
    guint mask);

void 
gwebgl_webgl_rendering_context_base_clearColor(
    GwebglWebGLRenderingContextBase *self,
    gfloat red,
    gfloat green,
    gfloat blue,
    gfloat alpha);

void 
gwebgl_webgl_rendering_context_base_clearDepth(
    GwebglWebGLRenderingContextBase *self,
    gfloat depth);

void 
gwebgl_webgl_rendering_context_base_clearStencil(
    GwebglWebGLRenderingContextBase *self,
    gint s);

void 
gwebgl_webgl_rendering_context_base_colorMask(
    GwebglWebGLRenderingContextBase *self,
    gboolean red,
    gboolean green,
    gboolean blue,
    gboolean alpha);

void 
gwebgl_webgl_rendering_context_base_compileShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader);

void 
gwebgl_webgl_rendering_context_base_copyTexImage2D(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    gint level,
    guint internalformat,
    gint x,
    gint y,
    gint width,
    gint height,
    gint border);

void 
gwebgl_webgl_rendering_context_base_copyTexSubImage2D(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    gint level,
    gint xoffset,
    gint yoffset,
    gint x,
    gint y,
    gint width,
    gint height);

GwebglWebGLBuffer 
gwebgl_webgl_rendering_context_base_createBuffer(
    GwebglWebGLRenderingContextBase *self);

GwebglWebGLFramebuffer 
gwebgl_webgl_rendering_context_base_createFramebuffer(
    GwebglWebGLRenderingContextBase *self);

GwebglWebGLProgram 
gwebgl_webgl_rendering_context_base_createProgram(
    GwebglWebGLRenderingContextBase *self);

GwebglWebGLRenderbuffer 
gwebgl_webgl_rendering_context_base_createRenderbuffer(
    GwebglWebGLRenderingContextBase *self);

GwebglWebGLShader 
gwebgl_webgl_rendering_context_base_createShader(
    GwebglWebGLRenderingContextBase *self,
    guint type);

GwebglWebGLTexture 
gwebgl_webgl_rendering_context_base_createTexture(
    GwebglWebGLRenderingContextBase *self);

void 
gwebgl_webgl_rendering_context_base_cullFace(
    GwebglWebGLRenderingContextBase *self,
    guint mode);

void 
gwebgl_webgl_rendering_context_base_deleteBuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLBuffer buffer);

void 
gwebgl_webgl_rendering_context_base_deleteFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLFramebuffer framebuffer);

void 
gwebgl_webgl_rendering_context_base_deleteProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

void 
gwebgl_webgl_rendering_context_base_deleteRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLRenderbuffer renderbuffer);

void 
gwebgl_webgl_rendering_context_base_deleteShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader);

void 
gwebgl_webgl_rendering_context_base_deleteTexture(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLTexture texture);

void 
gwebgl_webgl_rendering_context_base_depthFunc(
    GwebglWebGLRenderingContextBase *self,
    guint func);

void 
gwebgl_webgl_rendering_context_base_depthMask(
    GwebglWebGLRenderingContextBase *self,
    gboolean flag);

void 
gwebgl_webgl_rendering_context_base_depthRange(
    GwebglWebGLRenderingContextBase *self,
    gfloat zNear,
    gfloat zFar);

void 
gwebgl_webgl_rendering_context_base_detachShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLShader shader);

void 
gwebgl_webgl_rendering_context_base_disable(
    GwebglWebGLRenderingContextBase *self,
    guint cap);

void 
gwebgl_webgl_rendering_context_base_disableVertexAttribArray(
    GwebglWebGLRenderingContextBase *self,
    guint index);

void 
gwebgl_webgl_rendering_context_base_drawArrays(
    GwebglWebGLRenderingContextBase *self,
    guint mode,
    gint first,
    gint count);

void 
gwebgl_webgl_rendering_context_base_drawElements(
    GwebglWebGLRenderingContextBase *self,
    guint mode,
    gint count,
    guint type,
    glong offset);

void 
gwebgl_webgl_rendering_context_base_enable(
    GwebglWebGLRenderingContextBase *self,
    guint cap);

void 
gwebgl_webgl_rendering_context_base_enableVertexAttribArray(
    GwebglWebGLRenderingContextBase *self,
    guint index);

void 
gwebgl_webgl_rendering_context_base_finish(
    GwebglWebGLRenderingContextBase *self);

void 
gwebgl_webgl_rendering_context_base_flush(
    GwebglWebGLRenderingContextBase *self);

void 
gwebgl_webgl_rendering_context_base_framebufferRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint renderbuffertarget,
    GwebglWebGLRenderbuffer renderbuffer);

void 
gwebgl_webgl_rendering_context_base_framebufferTexture2D(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint textarget,
    GwebglWebGLTexture texture,
    gint level);

void 
gwebgl_webgl_rendering_context_base_frontFace(
    GwebglWebGLRenderingContextBase *self,
    guint mode);

void 
gwebgl_webgl_rendering_context_base_generateMipmap(
    GwebglWebGLRenderingContextBase *self,
    guint target);

void 
gwebgl_webgl_rendering_context_base_getActiveAttrib(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    gint *size,
    guint *type,
    gchar **name);

void 
gwebgl_webgl_rendering_context_base_getActiveUniform(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    gint *size,
    guint *type,
    gchar **name);

const GwebglWebGLShader *
gwebgl_webgl_rendering_context_base_getAttachedShaders(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

gint 
gwebgl_webgl_rendering_context_base_getAttribLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    const gchar *name);

gint 
gwebgl_webgl_rendering_context_base_getBufferParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname);

// GwebglWebGLContextAttributes 
// gwebgl_webgl_rendering_context_base_getContextAttributes(
//     GwebglWebGLRenderingContextBase *self);

guint 
gwebgl_webgl_rendering_context_base_getError(
    GwebglWebGLRenderingContextBase *self);

// const GwebglEXT_blend_minmax *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglEXT_texture_filter_anisotropic *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglEXT_frag_depth *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglEXT_shader_texture_lod *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglEXT_sRGB *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_vertex_array_object *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_color_buffer_float *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_compressed_texture_astc *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_compressed_texture_s3tc_srgb *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_debug_shaders *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_draw_buffers *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_lose_context *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_depth_texture *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_debug_renderer_info *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglWEBGL_compressed_texture_s3tc *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_texture_half_float_linear *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_texture_half_float *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_texture_float_linear *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_texture_float *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_standard_derivatives *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglOES_element_index_uint *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// const GwebglANGLE_instanced_arrays *
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

// gpointer 
// gwebgl_webgl_rendering_context_base_getExtension(
//     GwebglWebGLRenderingContextBase *self,
//     const gchar *extensionName);

gint 
gwebgl_webgl_rendering_context_base_getFramebufferAttachmentParameter(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint pname);

guint8 
gwebgl_webgl_rendering_context_base_getParameterb(
    GwebglWebGLRenderingContextBase *self,
    guint pname);

GByteArray *
gwebgl_webgl_rendering_context_base_getParameterbv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize);

gfloat 
gwebgl_webgl_rendering_context_base_getParameterf(
    GwebglWebGLRenderingContextBase *self,
    guint pname);

GByteArray *
gwebgl_webgl_rendering_context_base_getParameterfv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize);

gint 
gwebgl_webgl_rendering_context_base_getParameteri(
    GwebglWebGLRenderingContextBase *self,
    guint pname);

GByteArray *
gwebgl_webgl_rendering_context_base_getParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize);

gchar *
gwebgl_webgl_rendering_context_base_getProgramInfoLog(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

gint 
gwebgl_webgl_rendering_context_base_getProgramParameter(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint pname);

gint 
gwebgl_webgl_rendering_context_base_getRenderbufferParameter(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname);

gchar *
gwebgl_webgl_rendering_context_base_getShaderInfoLog(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader);

gint 
gwebgl_webgl_rendering_context_base_getShaderParameter(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader,
    guint pname);

void 
gwebgl_webgl_rendering_context_base_getShaderPrecisionFormat(
    GwebglWebGLRenderingContextBase *self,
    guint shadertype,
    guint precisiontype,
    gint *range_min,
    gint *range_max,
    gint *precision);

gchar *
gwebgl_webgl_rendering_context_base_getShaderSource(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader);

const gchar *
gwebgl_webgl_rendering_context_base_getString(
    GwebglWebGLRenderingContextBase *self,
    guint pname);

gchar **
gwebgl_webgl_rendering_context_base_getSupportedExtensions(
    GwebglWebGLRenderingContextBase *self);

gfloat 
gwebgl_webgl_rendering_context_base_getTexParameterfv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname);

gint 
gwebgl_webgl_rendering_context_base_getTexParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname);

GwebglWebGLUniformLocation 
gwebgl_webgl_rendering_context_base_getUniformLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    const gchar *name);

gfloat 
gwebgl_webgl_rendering_context_base_getUniformf(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location);

GByteArray *
gwebgl_webgl_rendering_context_base_getUniformfv(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location,
    gint resultSize);

gint 
gwebgl_webgl_rendering_context_base_getUniformi(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location);

GByteArray *
gwebgl_webgl_rendering_context_base_getUniformiv(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location,
    gint resultSize);

glong 
gwebgl_webgl_rendering_context_base_getVertexAttribOffset(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname);

gfloat 
gwebgl_webgl_rendering_context_base_getVertexAttribf(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname);

GByteArray *
gwebgl_webgl_rendering_context_base_getVertexAttribfv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname,
    gint resultSize);

gint 
gwebgl_webgl_rendering_context_base_getVertexAttribi(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname);

void 
gwebgl_webgl_rendering_context_base_hint(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint mode);

gboolean 
gwebgl_webgl_rendering_context_base_isBuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLBuffer buffer);

gboolean 
gwebgl_webgl_rendering_context_base_isEnabled(
    GwebglWebGLRenderingContextBase *self,
    guint cap);

gboolean 
gwebgl_webgl_rendering_context_base_isFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLFramebuffer framebuffer);

gboolean 
gwebgl_webgl_rendering_context_base_isProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

gboolean 
gwebgl_webgl_rendering_context_base_isRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLRenderbuffer renderbuffer);

gboolean 
gwebgl_webgl_rendering_context_base_isShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader);

gboolean 
gwebgl_webgl_rendering_context_base_isTexture(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLTexture texture);

void 
gwebgl_webgl_rendering_context_base_lineWidth(
    GwebglWebGLRenderingContextBase *self,
    gfloat width);

void 
gwebgl_webgl_rendering_context_base_linkProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

void 
gwebgl_webgl_rendering_context_base_pixelStorei(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint param);

void 
gwebgl_webgl_rendering_context_base_polygonOffset(
    GwebglWebGLRenderingContextBase *self,
    gfloat factor,
    gfloat units);

void 
gwebgl_webgl_rendering_context_base_renderbufferStorage(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint internalformat,
    gint width,
    gint height);

void 
gwebgl_webgl_rendering_context_base_sampleCoverage(
    GwebglWebGLRenderingContextBase *self,
    gfloat value,
    gboolean invert);

void 
gwebgl_webgl_rendering_context_base_scissor(
    GwebglWebGLRenderingContextBase *self,
    gint x,
    gint y,
    gint width,
    gint height);

void 
gwebgl_webgl_rendering_context_base_shaderSource(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader,
    const gchar *source);

void 
gwebgl_webgl_rendering_context_base_stencilFunc(
    GwebglWebGLRenderingContextBase *self,
    guint func,
    gint ref,
    guint mask);

void 
gwebgl_webgl_rendering_context_base_stencilFuncSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint func,
    gint ref,
    guint mask);

void 
gwebgl_webgl_rendering_context_base_stencilMask(
    GwebglWebGLRenderingContextBase *self,
    guint mask);

void 
gwebgl_webgl_rendering_context_base_stencilMaskSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint mask);

void 
gwebgl_webgl_rendering_context_base_stencilOp(
    GwebglWebGLRenderingContextBase *self,
    guint fail,
    guint zfail,
    guint zpass);

void 
gwebgl_webgl_rendering_context_base_stencilOpSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint fail,
    guint zfail,
    guint zpass);

void 
gwebgl_webgl_rendering_context_base_texParameterf(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname,
    gfloat param);

void 
gwebgl_webgl_rendering_context_base_texParameteri(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname,
    gint param);

void 
gwebgl_webgl_rendering_context_base_uniform1f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x);

void 
gwebgl_webgl_rendering_context_base_uniform1i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x);

void 
gwebgl_webgl_rendering_context_base_uniform2f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y);

void 
gwebgl_webgl_rendering_context_base_uniform2i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y);

void 
gwebgl_webgl_rendering_context_base_uniform3f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y,
    gfloat z);

void 
gwebgl_webgl_rendering_context_base_uniform3i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y,
    gint z);

void 
gwebgl_webgl_rendering_context_base_uniform4f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y,
    gfloat z,
    gfloat w);

void 
gwebgl_webgl_rendering_context_base_uniform4i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y,
    gint z,
    gint w);

void 
gwebgl_webgl_rendering_context_base_useProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

void 
gwebgl_webgl_rendering_context_base_validateProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib1f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib1fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib2f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib2fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib3f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y,
    gfloat z);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib3fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib4f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y,
    gfloat z,
    gfloat w);

void 
gwebgl_webgl_rendering_context_base_vertexAttrib4fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values);

void 
gwebgl_webgl_rendering_context_base_vertexAttribPointer(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gint size,
    guint type,
    gboolean normalized,
    gint stride,
    glong offset);

void 
gwebgl_webgl_rendering_context_base_viewport(
    GwebglWebGLRenderingContextBase *self,
    gint x,
    gint y,
    gint width,
    gint height);

GHashTable *gwebgl_webgl_rendering_context_base_get_webgl_constants();


G_END_DECLS

#endif // __GWEBGL_WEBGL_RENDERING_CONTEXT_BASE_H