#ifndef __GWEBGL_WEBGL_RENDERING_CONTEXT_H
#define __GWEBGL_WEBGL_RENDERING_CONTEXT_H

#include <epoxy/gl.h>
#include <glib-object.h>
#include "handle-types.h"
#include "rendering-context-base.h"
#include <gdk-pixbuf/gdk-pixbuf.h>

G_BEGIN_DECLS

#define GWEBGL_TYPE_WEBGL_RENDERING_CONTEXT \
    gwebgl_webgl_rendering_context_get_type()
G_DECLARE_DERIVABLE_TYPE( \
    GwebglWebGLRenderingContext, gwebgl_webgl_rendering_context, \
    GWEBGL, WEBGL_RENDERING_CONTEXT, GwebglWebGLRenderingContextBase)

struct _GwebglWebGLRenderingContextClass {
    GwebglWebGLRenderingContextBaseClass parent_class;
};

void 
gwebgl_webgl_rendering_context_bufferData(
    GwebglWebGLRenderingContext *self,
    guint target,
    const GByteArray *data,
    guint usage);

void 
gwebgl_webgl_rendering_context_bufferDataSizeOnly(
    GwebglWebGLRenderingContext *self,
    guint target,
    gssize size,
    guint usage);

void 
gwebgl_webgl_rendering_context_bufferSubData(
    GwebglWebGLRenderingContext *self,
    guint target,
    glong offset,
    const GByteArray *data);

void 
gwebgl_webgl_rendering_context_compressedTexImage2D(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    guint internalformat,
    gint width,
    gint height,
    gint border,
    const GByteArray *data);

void 
gwebgl_webgl_rendering_context_compressedTexSubImage2D(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint xoffset,
    gint yoffset,
    gint width,
    gint height,
    guint format,
    const GByteArray *data);

GByteArray *
gwebgl_webgl_rendering_context_readPixels(
    GwebglWebGLRenderingContext *self,
    gint x,
    gint y,
    gint width,
    gint height,
    guint format,
    guint type,
    GByteArray *pixels);

void 
gwebgl_webgl_rendering_context_texImage2D(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint internalformat,
    gint width,
    gint height,
    gint border,
    guint format,
    guint type,
    const GByteArray *pixels);

void 
gwebgl_webgl_rendering_context_texImage2DFromPixbuf(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint internalformat,
    guint format,
    guint type,
    const GdkPixbuf *source);

void 
gwebgl_webgl_rendering_context_texSubImage2D(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint xoffset,
    gint yoffset,
    gint width,
    gint height,
    guint format,
    guint type,
    const GByteArray *pixels);

void 
gwebgl_webgl_rendering_context_texSubImage2DFromPixbuf(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint xoffset,
    gint yoffset,
    guint format,
    guint type,
    const GdkPixbuf *source);

void 
gwebgl_webgl_rendering_context_uniform1fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v);

void 
gwebgl_webgl_rendering_context_uniform1iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v);

void 
gwebgl_webgl_rendering_context_uniform2fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v);

void 
gwebgl_webgl_rendering_context_uniform2iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v);

void 
gwebgl_webgl_rendering_context_uniform3fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v);

void 
gwebgl_webgl_rendering_context_uniform3iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v);

void 
gwebgl_webgl_rendering_context_uniform4fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v);

void 
gwebgl_webgl_rendering_context_uniform4iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v);

void 
gwebgl_webgl_rendering_context_uniformMatrix2fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value);

void 
gwebgl_webgl_rendering_context_uniformMatrix3fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value);

void 
gwebgl_webgl_rendering_context_uniformMatrix4fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value);


G_END_DECLS

#endif // __GWEBGL_WEBGL_RENDERING_CONTEXT_H