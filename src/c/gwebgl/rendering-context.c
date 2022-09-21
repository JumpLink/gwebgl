#include "rendering-context.h"

G_DEFINE_TYPE( \
    GwebglWebGLRenderingContext, gwebgl_webgl_rendering_context, \
    GWEBGL_TYPE_WEBGL_RENDERING_CONTEXT_BASE);

static void gwebgl_webgl_rendering_context_init(
    GwebglWebGLRenderingContext *self)
{
    (void) self;
}

static void gwebgl_webgl_rendering_context_class_init(
    GwebglWebGLRenderingContextClass *klass)
{
    (void) klass;
}

/**
 * gwebgl_webgl_rendering_context_bufferData:
 * @self: A WebGLRenderingContext
 * @target:
 * @data:
 * @usage:
 */
void 
gwebgl_webgl_rendering_context_bufferData(
    GwebglWebGLRenderingContext *self,
    guint target,
    const GByteArray *data,
    guint usage)
{
    (void) self;
    glBufferData(target, data ? data->len : 0, 
        data ? (gpointer) data->data : NULL, usage);
}

/**
 * gwebgl_webgl_rendering_context_bufferDataSizeOnly:
 * @self: A WebGLRenderingContext
 * @target:
 * @size:
 * @usage:
 */
void 
gwebgl_webgl_rendering_context_bufferDataSizeOnly(
    GwebglWebGLRenderingContext *self,
    guint target,
    gssize size,
    guint usage)
{
    (void) self;
    glBufferData(target, size, NULL, usage);
}

/**
 * gwebgl_webgl_rendering_context_bufferSubData:
 * @self: A WebGLRenderingContext
 * @target:
 * @offset:
 * @data:
 */
void 
gwebgl_webgl_rendering_context_bufferSubData(
    GwebglWebGLRenderingContext *self,
    guint target,
    glong offset,
    const GByteArray *data)
{
    (void) self;
    glBufferSubData(target, offset, data ? data->len : 0, 
        data ? (gpointer) data->data : NULL);
}

/**
 * gwebgl_webgl_rendering_context_compressedTexImage2D:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @internalformat:
 * @width:
 * @height:
 * @border:
 * @data:
 */
void 
gwebgl_webgl_rendering_context_compressedTexImage2D(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    guint internalformat,
    gint width,
    gint height,
    gint border,
    const GByteArray *data)
{
    (void) self;
    glCompressedTexImage2D(target, level, internalformat, width, height, 
        border, data ? data->len : 0, data ? (gpointer) data->data : NULL);
}

/**
 * gwebgl_webgl_rendering_context_compressedTexSubImage2D:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @xoffset:
 * @yoffset:
 * @width:
 * @height:
 * @format:
 * @data:
 */
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
    const GByteArray *data)
{
    (void) self;
    glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, 
        format, data ? data->len : 0, data ? (gpointer) data->data : NULL);
}

/**
 * gwebgl_webgl_rendering_context_readPixels:
 * @self: A WebGLRenderingContext
 * @x:
 * @y:
 * @width:
 * @height:
 * @format:
 * @type:
 * @pixels: (nullable) (transfer full):
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_readPixels(
    GwebglWebGLRenderingContext *self,
    gint x,
    gint y,
    gint width,
    gint height,
    guint format,
    guint type,
    GByteArray *pixels)
{
    (void) self;
    glReadPixels(x, y, width, height, format, type, 
        pixels ? (gpointer) pixels->data : NULL);
    return pixels;
}

/**
 * gwebgl_webgl_rendering_context_texImage2D:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @internalformat:
 * @width:
 * @height:
 * @border:
 * @format:
 * @type:
 * @pixels: (nullable):
 */
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
    const GByteArray *pixels)
{
    (void) self;
    glTexImage2D(target, level, internalformat, width, height, border, format, 
        type, pixels ? (gpointer) pixels->data : NULL);
}

/**
 * gwebgl_webgl_rendering_context_texImage2DFromPixbuf:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @internalformat:
 * @format:
 * @type:
 * @source:
 */
void 
gwebgl_webgl_rendering_context_texImage2DFromPixbuf(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint internalformat,
    guint format,
    guint type,
    const GdkPixbuf *source)
{
    (void) self;
    int width  = gdk_pixbuf_get_width(source);
    int height = gdk_pixbuf_get_height(source);
    const guint8 *data = gdk_pixbuf_get_pixels(source);
    glTexImage2D(target, level, internalformat, width, height, 0, format, type, 
        data);
}

/**
 * gwebgl_webgl_rendering_context_texSubImage2D:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @xoffset:
 * @yoffset:
 * @width:
 * @height:
 * @format:
 * @type:
 * @pixels: (nullable):
 */
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
    const GByteArray *pixels)
{
    (void) self;
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, 
        type, pixels ? (gpointer) pixels->data : NULL);
}

/**
 * gwebgl_webgl_rendering_context_texSubImage2DFromPixbuf:
 * @self: A WebGLRenderingContext
 * @target:
 * @level:
 * @xoffset:
 * @yoffset:
 * @format:
 * @type:
 * @source:
 */
void 
gwebgl_webgl_rendering_context_texSubImage2DFromPixbuf(
    GwebglWebGLRenderingContext *self,
    guint target,
    gint level,
    gint xoffset,
    gint yoffset,
    guint format,
    guint type,
    const GdkPixbuf *source)
{
    (void) self;
    int width  = gdk_pixbuf_get_width(source);
    int height = gdk_pixbuf_get_height(source);
    const guint8 *data = gdk_pixbuf_get_pixels(source);
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, 
        type, data);
}

/**
 * gwebgl_webgl_rendering_context_uniform1fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniform1fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v)
{
    (void) self;
    glUniform1fv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform1iv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gint):
 */
void 
gwebgl_webgl_rendering_context_uniform1iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v)
{
    (void) self;
    glUniform1iv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform2fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniform2fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v)
{
    (void) self;
    glUniform2fv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform2iv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gint):
 */
void 
gwebgl_webgl_rendering_context_uniform2iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v)
{
    (void) self;
    glUniform2iv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform3fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniform3fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v)
{
    (void) self;
    glUniform3fv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform3iv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gint):
 */
void 
gwebgl_webgl_rendering_context_uniform3iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v)
{
    (void) self;
    glUniform3iv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform4fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniform4fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gfloat *v)
{
    (void) self;
    glUniform4fv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniform4iv:
 * @self: A WebGLRenderingContext
 * @location:
 * @vLength:
 * @v: (array length=vLength) (element-type gint):
 */
void 
gwebgl_webgl_rendering_context_uniform4iv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint vLength,
    const gint *v)
{
    (void) self;
    glUniform4iv(location, vLength, v);
}

/**
 * gwebgl_webgl_rendering_context_uniformMatrix2fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @valueLength:
 * @transpose:
 * @value: (array length=valueLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniformMatrix2fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value)
{
    (void) self;
    glUniformMatrix2fv(location, valueLength / 4, transpose, value);
}

/**
 * gwebgl_webgl_rendering_context_uniformMatrix3fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @valueLength:
 * @transpose:
 * @value: (array length=valueLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniformMatrix3fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value)
{
    (void) self;
    glUniformMatrix3fv(location, valueLength / 9, transpose, value);
}

/**
 * gwebgl_webgl_rendering_context_uniformMatrix4fv:
 * @self: A WebGLRenderingContext
 * @location:
 * @valueLength:
 * @transpose:
 * @value: (array length=valueLength) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_uniformMatrix4fv(
    GwebglWebGLRenderingContext *self,
    GwebglWebGLUniformLocation location,
    gint valueLength,
    gboolean transpose,
    const gfloat *value)
{
    (void) self;
    glUniformMatrix4fv(location, valueLength / 16, transpose, value);
}

