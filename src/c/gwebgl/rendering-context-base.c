#include "rendering-context-base.h"

G_DEFINE_TYPE( \
    GwebglWebGLRenderingContextBase, gwebgl_webgl_rendering_context_base, \
    G_TYPE_OBJECT);

static void gwebgl_webgl_rendering_context_base_init(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
}


static GHashTable *webgl_constants;

/**
 * gwebgl_webgl_rendering_context_base_get_webgl_constants:
 * Returns: (transfer none) (element-type utf8 guint):
 */
GHashTable *gwebgl_webgl_rendering_context_base_get_webgl_constants()
{
    return webgl_constants;
}

static void gwebgl_webgl_rendering_context_base_class_init(
    GwebglWebGLRenderingContextBaseClass *klass)
{
    (void) klass;
    webgl_constants = g_hash_table_new(g_str_hash, g_str_equal);
    g_hash_table_insert(webgl_constants, 
        "ACTIVE_ATTRIBUTES", 
        (gconstpointer *) GL_ACTIVE_ATTRIBUTES);
    g_hash_table_insert(webgl_constants, 
        "ACTIVE_TEXTURE", 
        (gconstpointer *) GL_ACTIVE_TEXTURE);
    g_hash_table_insert(webgl_constants, 
        "ACTIVE_UNIFORMS", 
        (gconstpointer *) GL_ACTIVE_UNIFORMS);
    g_hash_table_insert(webgl_constants, 
        "ALIASED_LINE_WIDTH_RANGE", 
        (gconstpointer *) GL_ALIASED_LINE_WIDTH_RANGE);
    g_hash_table_insert(webgl_constants, 
        "ALIASED_POINT_SIZE_RANGE", 
        (gconstpointer *) GL_ALIASED_POINT_SIZE_RANGE);
    g_hash_table_insert(webgl_constants, 
        "ALPHA", 
        (gconstpointer *) GL_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "ALPHA_BITS", 
        (gconstpointer *) GL_ALPHA_BITS);
    g_hash_table_insert(webgl_constants, 
        "ALWAYS", 
        (gconstpointer *) GL_ALWAYS);
    g_hash_table_insert(webgl_constants, 
        "ARRAY_BUFFER", 
        (gconstpointer *) GL_ARRAY_BUFFER);
    g_hash_table_insert(webgl_constants, 
        "ARRAY_BUFFER_BINDING", 
        (gconstpointer *) GL_ARRAY_BUFFER_BINDING);
    g_hash_table_insert(webgl_constants, 
        "ATTACHED_SHADERS", 
        (gconstpointer *) GL_ATTACHED_SHADERS);
    g_hash_table_insert(webgl_constants, 
        "BACK", 
        (gconstpointer *) GL_BACK);
    g_hash_table_insert(webgl_constants, 
        "BLEND", 
        (gconstpointer *) GL_BLEND);
    g_hash_table_insert(webgl_constants, 
        "BLEND_COLOR", 
        (gconstpointer *) GL_BLEND_COLOR);
    g_hash_table_insert(webgl_constants, 
        "BLEND_DST_ALPHA", 
        (gconstpointer *) GL_BLEND_DST_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "BLEND_DST_RGB", 
        (gconstpointer *) GL_BLEND_DST_RGB);
    g_hash_table_insert(webgl_constants, 
        "BLEND_EQUATION", 
        (gconstpointer *) GL_BLEND_EQUATION);
    g_hash_table_insert(webgl_constants, 
        "BLEND_EQUATION_ALPHA", 
        (gconstpointer *) GL_BLEND_EQUATION_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "BLEND_EQUATION_RGB", 
        (gconstpointer *) GL_BLEND_EQUATION_RGB);
    g_hash_table_insert(webgl_constants, 
        "BLEND_SRC_ALPHA", 
        (gconstpointer *) GL_BLEND_SRC_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "BLEND_SRC_RGB", 
        (gconstpointer *) GL_BLEND_SRC_RGB);
    g_hash_table_insert(webgl_constants, 
        "BLUE_BITS", 
        (gconstpointer *) GL_BLUE_BITS);
    g_hash_table_insert(webgl_constants, 
        "BOOL", 
        (gconstpointer *) GL_BOOL);
    g_hash_table_insert(webgl_constants, 
        "BOOL_VEC2", 
        (gconstpointer *) GL_BOOL_VEC2);
    g_hash_table_insert(webgl_constants, 
        "BOOL_VEC3", 
        (gconstpointer *) GL_BOOL_VEC3);
    g_hash_table_insert(webgl_constants, 
        "BOOL_VEC4", 
        (gconstpointer *) GL_BOOL_VEC4);
    g_hash_table_insert(webgl_constants, 
        "BUFFER_SIZE", 
        (gconstpointer *) GL_BUFFER_SIZE);
    g_hash_table_insert(webgl_constants, 
        "BUFFER_USAGE", 
        (gconstpointer *) GL_BUFFER_USAGE);
    g_hash_table_insert(webgl_constants, 
        "BYTE", 
        (gconstpointer *) GL_BYTE);
    g_hash_table_insert(webgl_constants, 
        "CCW", 
        (gconstpointer *) GL_CCW);
    g_hash_table_insert(webgl_constants, 
        "CLAMP_TO_EDGE", 
        (gconstpointer *) GL_CLAMP_TO_EDGE);
    g_hash_table_insert(webgl_constants, 
        "COLOR_ATTACHMENT0", 
        (gconstpointer *) GL_COLOR_ATTACHMENT0);
    g_hash_table_insert(webgl_constants, 
        "COLOR_BUFFER_BIT", 
        (gconstpointer *) GL_COLOR_BUFFER_BIT);
    g_hash_table_insert(webgl_constants, 
        "COLOR_CLEAR_VALUE", 
        (gconstpointer *) GL_COLOR_CLEAR_VALUE);
    g_hash_table_insert(webgl_constants, 
        "COLOR_WRITEMASK", 
        (gconstpointer *) GL_COLOR_WRITEMASK);
    g_hash_table_insert(webgl_constants, 
        "COMPILE_STATUS", 
        (gconstpointer *) GL_COMPILE_STATUS);
    g_hash_table_insert(webgl_constants, 
        "COMPRESSED_TEXTURE_FORMATS", 
        (gconstpointer *) GL_COMPRESSED_TEXTURE_FORMATS);
    g_hash_table_insert(webgl_constants, 
        "CONSTANT_ALPHA", 
        (gconstpointer *) GL_CONSTANT_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "CONSTANT_COLOR", 
        (gconstpointer *) GL_CONSTANT_COLOR);
    g_hash_table_insert(webgl_constants, 
        "CULL_FACE", 
        (gconstpointer *) GL_CULL_FACE);
    g_hash_table_insert(webgl_constants, 
        "CULL_FACE_MODE", 
        (gconstpointer *) GL_CULL_FACE_MODE);
    g_hash_table_insert(webgl_constants, 
        "CURRENT_PROGRAM", 
        (gconstpointer *) GL_CURRENT_PROGRAM);
    g_hash_table_insert(webgl_constants, 
        "CURRENT_VERTEX_ATTRIB", 
        (gconstpointer *) GL_CURRENT_VERTEX_ATTRIB);
    g_hash_table_insert(webgl_constants, 
        "CW", 
        (gconstpointer *) GL_CW);
    g_hash_table_insert(webgl_constants, 
        "DECR", 
        (gconstpointer *) GL_DECR);
    g_hash_table_insert(webgl_constants, 
        "DECR_WRAP", 
        (gconstpointer *) GL_DECR_WRAP);
    g_hash_table_insert(webgl_constants, 
        "DELETE_STATUS", 
        (gconstpointer *) GL_DELETE_STATUS);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_ATTACHMENT", 
        (gconstpointer *) GL_DEPTH_ATTACHMENT);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_BITS", 
        (gconstpointer *) GL_DEPTH_BITS);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_BUFFER_BIT", 
        (gconstpointer *) GL_DEPTH_BUFFER_BIT);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_CLEAR_VALUE", 
        (gconstpointer *) GL_DEPTH_CLEAR_VALUE);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_COMPONENT", 
        (gconstpointer *) GL_DEPTH_COMPONENT);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_COMPONENT16", 
        (gconstpointer *) GL_DEPTH_COMPONENT16);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_FUNC", 
        (gconstpointer *) GL_DEPTH_FUNC);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_RANGE", 
        (gconstpointer *) GL_DEPTH_RANGE);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_TEST", 
        (gconstpointer *) GL_DEPTH_TEST);
    g_hash_table_insert(webgl_constants, 
        "DEPTH_WRITEMASK", 
        (gconstpointer *) GL_DEPTH_WRITEMASK);
    g_hash_table_insert(webgl_constants, 
        "DITHER", 
        (gconstpointer *) GL_DITHER);
    g_hash_table_insert(webgl_constants, 
        "DONT_CARE", 
        (gconstpointer *) GL_DONT_CARE);
    g_hash_table_insert(webgl_constants, 
        "DST_ALPHA", 
        (gconstpointer *) GL_DST_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "DST_COLOR", 
        (gconstpointer *) GL_DST_COLOR);
    g_hash_table_insert(webgl_constants, 
        "DYNAMIC_DRAW", 
        (gconstpointer *) GL_DYNAMIC_DRAW);
    g_hash_table_insert(webgl_constants, 
        "ELEMENT_ARRAY_BUFFER", 
        (gconstpointer *) GL_ELEMENT_ARRAY_BUFFER);
    g_hash_table_insert(webgl_constants, 
        "ELEMENT_ARRAY_BUFFER_BINDING", 
        (gconstpointer *) GL_ELEMENT_ARRAY_BUFFER_BINDING);
    g_hash_table_insert(webgl_constants, 
        "EQUAL", 
        (gconstpointer *) GL_EQUAL);
    g_hash_table_insert(webgl_constants, 
        "FASTEST", 
        (gconstpointer *) GL_FASTEST);
    g_hash_table_insert(webgl_constants, 
        "FLOAT", 
        (gconstpointer *) GL_FLOAT);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_MAT2", 
        (gconstpointer *) GL_FLOAT_MAT2);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_MAT3", 
        (gconstpointer *) GL_FLOAT_MAT3);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_MAT4", 
        (gconstpointer *) GL_FLOAT_MAT4);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_VEC2", 
        (gconstpointer *) GL_FLOAT_VEC2);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_VEC3", 
        (gconstpointer *) GL_FLOAT_VEC3);
    g_hash_table_insert(webgl_constants, 
        "FLOAT_VEC4", 
        (gconstpointer *) GL_FLOAT_VEC4);
    g_hash_table_insert(webgl_constants, 
        "FRAGMENT_SHADER", 
        (gconstpointer *) GL_FRAGMENT_SHADER);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER", 
        (gconstpointer *) GL_FRAMEBUFFER);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_ATTACHMENT_OBJECT_NAME", 
        (gconstpointer *) GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", 
        (gconstpointer *) GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE", 
        (gconstpointer *) GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL", 
        (gconstpointer *) GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_BINDING", 
        (gconstpointer *) GL_FRAMEBUFFER_BINDING);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_COMPLETE", 
        (gconstpointer *) GL_FRAMEBUFFER_COMPLETE);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_INCOMPLETE_ATTACHMENT", 
        (gconstpointer *) GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_INCOMPLETE_DIMENSIONS", 
        (gconstpointer *) GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", 
        (gconstpointer *) GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT);
    g_hash_table_insert(webgl_constants, 
        "FRAMEBUFFER_UNSUPPORTED", 
        (gconstpointer *) GL_FRAMEBUFFER_UNSUPPORTED);
    g_hash_table_insert(webgl_constants, 
        "FRONT", 
        (gconstpointer *) GL_FRONT);
    g_hash_table_insert(webgl_constants, 
        "FRONT_AND_BACK", 
        (gconstpointer *) GL_FRONT_AND_BACK);
    g_hash_table_insert(webgl_constants, 
        "FRONT_FACE", 
        (gconstpointer *) GL_FRONT_FACE);
    g_hash_table_insert(webgl_constants, 
        "FUNC_ADD", 
        (gconstpointer *) GL_FUNC_ADD);
    g_hash_table_insert(webgl_constants, 
        "FUNC_REVERSE_SUBTRACT", 
        (gconstpointer *) GL_FUNC_REVERSE_SUBTRACT);
    g_hash_table_insert(webgl_constants, 
        "FUNC_SUBTRACT", 
        (gconstpointer *) GL_FUNC_SUBTRACT);
    g_hash_table_insert(webgl_constants, 
        "GENERATE_MIPMAP_HINT", 
        (gconstpointer *) GL_GENERATE_MIPMAP_HINT);
    g_hash_table_insert(webgl_constants, 
        "GEQUAL", 
        (gconstpointer *) GL_GEQUAL);
    g_hash_table_insert(webgl_constants, 
        "GREATER", 
        (gconstpointer *) GL_GREATER);
    g_hash_table_insert(webgl_constants, 
        "GREEN_BITS", 
        (gconstpointer *) GL_GREEN_BITS);
    g_hash_table_insert(webgl_constants, 
        "HIGH_FLOAT", 
        (gconstpointer *) GL_HIGH_FLOAT);
    g_hash_table_insert(webgl_constants, 
        "HIGH_INT", 
        (gconstpointer *) GL_HIGH_INT);
    g_hash_table_insert(webgl_constants, 
        "IMPLEMENTATION_COLOR_READ_FORMAT", 
        (gconstpointer *) GL_IMPLEMENTATION_COLOR_READ_FORMAT);
    g_hash_table_insert(webgl_constants, 
        "IMPLEMENTATION_COLOR_READ_TYPE", 
        (gconstpointer *) GL_IMPLEMENTATION_COLOR_READ_TYPE);
    g_hash_table_insert(webgl_constants, 
        "INCR", 
        (gconstpointer *) GL_INCR);
    g_hash_table_insert(webgl_constants, 
        "INCR_WRAP", 
        (gconstpointer *) GL_INCR_WRAP);
    g_hash_table_insert(webgl_constants, 
        "INT", 
        (gconstpointer *) GL_INT);
    g_hash_table_insert(webgl_constants, 
        "INT_VEC2", 
        (gconstpointer *) GL_INT_VEC2);
    g_hash_table_insert(webgl_constants, 
        "INT_VEC3", 
        (gconstpointer *) GL_INT_VEC3);
    g_hash_table_insert(webgl_constants, 
        "INT_VEC4", 
        (gconstpointer *) GL_INT_VEC4);
    g_hash_table_insert(webgl_constants, 
        "INVALID_ENUM", 
        (gconstpointer *) GL_INVALID_ENUM);
    g_hash_table_insert(webgl_constants, 
        "INVALID_FRAMEBUFFER_OPERATION", 
        (gconstpointer *) GL_INVALID_FRAMEBUFFER_OPERATION);
    g_hash_table_insert(webgl_constants, 
        "INVALID_OPERATION", 
        (gconstpointer *) GL_INVALID_OPERATION);
    g_hash_table_insert(webgl_constants, 
        "INVALID_VALUE", 
        (gconstpointer *) GL_INVALID_VALUE);
    g_hash_table_insert(webgl_constants, 
        "INVERT", 
        (gconstpointer *) GL_INVERT);
    g_hash_table_insert(webgl_constants, 
        "KEEP", 
        (gconstpointer *) GL_KEEP);
    g_hash_table_insert(webgl_constants, 
        "LEQUAL", 
        (gconstpointer *) GL_LEQUAL);
    g_hash_table_insert(webgl_constants, 
        "LESS", 
        (gconstpointer *) GL_LESS);
    g_hash_table_insert(webgl_constants, 
        "LINEAR", 
        (gconstpointer *) GL_LINEAR);
    g_hash_table_insert(webgl_constants, 
        "LINEAR_MIPMAP_LINEAR", 
        (gconstpointer *) GL_LINEAR_MIPMAP_LINEAR);
    g_hash_table_insert(webgl_constants, 
        "LINEAR_MIPMAP_NEAREST", 
        (gconstpointer *) GL_LINEAR_MIPMAP_NEAREST);
    g_hash_table_insert(webgl_constants, 
        "LINES", 
        (gconstpointer *) GL_LINES);
    g_hash_table_insert(webgl_constants, 
        "LINE_LOOP", 
        (gconstpointer *) GL_LINE_LOOP);
    g_hash_table_insert(webgl_constants, 
        "LINE_STRIP", 
        (gconstpointer *) GL_LINE_STRIP);
    g_hash_table_insert(webgl_constants, 
        "LINE_WIDTH", 
        (gconstpointer *) GL_LINE_WIDTH);
    g_hash_table_insert(webgl_constants, 
        "LINK_STATUS", 
        (gconstpointer *) GL_LINK_STATUS);
    g_hash_table_insert(webgl_constants, 
        "LOW_FLOAT", 
        (gconstpointer *) GL_LOW_FLOAT);
    g_hash_table_insert(webgl_constants, 
        "LOW_INT", 
        (gconstpointer *) GL_LOW_INT);
    g_hash_table_insert(webgl_constants, 
        "LUMINANCE", 
        (gconstpointer *) GL_LUMINANCE);
    g_hash_table_insert(webgl_constants, 
        "LUMINANCE_ALPHA", 
        (gconstpointer *) GL_LUMINANCE_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "MAX_COMBINED_TEXTURE_IMAGE_UNITS", 
        (gconstpointer *) GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
    g_hash_table_insert(webgl_constants, 
        "MAX_CUBE_MAP_TEXTURE_SIZE", 
        (gconstpointer *) GL_MAX_CUBE_MAP_TEXTURE_SIZE);
    g_hash_table_insert(webgl_constants, 
        "MAX_FRAGMENT_UNIFORM_VECTORS", 
        (gconstpointer *) GL_MAX_FRAGMENT_UNIFORM_VECTORS);
    g_hash_table_insert(webgl_constants, 
        "MAX_RENDERBUFFER_SIZE", 
        (gconstpointer *) GL_MAX_RENDERBUFFER_SIZE);
    g_hash_table_insert(webgl_constants, 
        "MAX_TEXTURE_IMAGE_UNITS", 
        (gconstpointer *) GL_MAX_TEXTURE_IMAGE_UNITS);
    g_hash_table_insert(webgl_constants, 
        "MAX_TEXTURE_SIZE", 
        (gconstpointer *) GL_MAX_TEXTURE_SIZE);
    g_hash_table_insert(webgl_constants, 
        "MAX_VARYING_VECTORS", 
        (gconstpointer *) GL_MAX_VARYING_VECTORS);
    g_hash_table_insert(webgl_constants, 
        "MAX_VERTEX_ATTRIBS", 
        (gconstpointer *) GL_MAX_VERTEX_ATTRIBS);
    g_hash_table_insert(webgl_constants, 
        "MAX_VERTEX_TEXTURE_IMAGE_UNITS", 
        (gconstpointer *) GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
    g_hash_table_insert(webgl_constants, 
        "MAX_VERTEX_UNIFORM_VECTORS", 
        (gconstpointer *) GL_MAX_VERTEX_UNIFORM_VECTORS);
    g_hash_table_insert(webgl_constants, 
        "MAX_VIEWPORT_DIMS", 
        (gconstpointer *) GL_MAX_VIEWPORT_DIMS);
    g_hash_table_insert(webgl_constants, 
        "MEDIUM_FLOAT", 
        (gconstpointer *) GL_MEDIUM_FLOAT);
    g_hash_table_insert(webgl_constants, 
        "MEDIUM_INT", 
        (gconstpointer *) GL_MEDIUM_INT);
    g_hash_table_insert(webgl_constants, 
        "MIRRORED_REPEAT", 
        (gconstpointer *) GL_MIRRORED_REPEAT);
    g_hash_table_insert(webgl_constants, 
        "NEAREST", 
        (gconstpointer *) GL_NEAREST);
    g_hash_table_insert(webgl_constants, 
        "NEAREST_MIPMAP_LINEAR", 
        (gconstpointer *) GL_NEAREST_MIPMAP_LINEAR);
    g_hash_table_insert(webgl_constants, 
        "NEAREST_MIPMAP_NEAREST", 
        (gconstpointer *) GL_NEAREST_MIPMAP_NEAREST);
    g_hash_table_insert(webgl_constants, 
        "NEVER", 
        (gconstpointer *) GL_NEVER);
    g_hash_table_insert(webgl_constants, 
        "NICEST", 
        (gconstpointer *) GL_NICEST);
    g_hash_table_insert(webgl_constants, 
        "NONE", 
        (gconstpointer *) GL_NONE);
    g_hash_table_insert(webgl_constants, 
        "NOTEQUAL", 
        (gconstpointer *) GL_NOTEQUAL);
    g_hash_table_insert(webgl_constants, 
        "NO_ERROR", 
        (gconstpointer *) GL_NO_ERROR);
    g_hash_table_insert(webgl_constants, 
        "ONE", 
        (gconstpointer *) GL_ONE);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_CONSTANT_ALPHA", 
        (gconstpointer *) GL_ONE_MINUS_CONSTANT_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_CONSTANT_COLOR", 
        (gconstpointer *) GL_ONE_MINUS_CONSTANT_COLOR);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_DST_ALPHA", 
        (gconstpointer *) GL_ONE_MINUS_DST_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_DST_COLOR", 
        (gconstpointer *) GL_ONE_MINUS_DST_COLOR);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_SRC_ALPHA", 
        (gconstpointer *) GL_ONE_MINUS_SRC_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "ONE_MINUS_SRC_COLOR", 
        (gconstpointer *) GL_ONE_MINUS_SRC_COLOR);
    g_hash_table_insert(webgl_constants, 
        "OUT_OF_MEMORY", 
        (gconstpointer *) GL_OUT_OF_MEMORY);
    g_hash_table_insert(webgl_constants, 
        "PACK_ALIGNMENT", 
        (gconstpointer *) GL_PACK_ALIGNMENT);
    g_hash_table_insert(webgl_constants, 
        "POINTS", 
        (gconstpointer *) GL_POINTS);
    g_hash_table_insert(webgl_constants, 
        "POLYGON_OFFSET_FACTOR", 
        (gconstpointer *) GL_POLYGON_OFFSET_FACTOR);
    g_hash_table_insert(webgl_constants, 
        "POLYGON_OFFSET_FILL", 
        (gconstpointer *) GL_POLYGON_OFFSET_FILL);
    g_hash_table_insert(webgl_constants, 
        "POLYGON_OFFSET_UNITS", 
        (gconstpointer *) GL_POLYGON_OFFSET_UNITS);
    g_hash_table_insert(webgl_constants, 
        "RED_BITS", 
        (gconstpointer *) GL_RED_BITS);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER", 
        (gconstpointer *) GL_RENDERBUFFER);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_ALPHA_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_ALPHA_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_BINDING", 
        (gconstpointer *) GL_RENDERBUFFER_BINDING);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_BLUE_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_BLUE_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_DEPTH_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_DEPTH_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_GREEN_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_GREEN_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_HEIGHT", 
        (gconstpointer *) GL_RENDERBUFFER_HEIGHT);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_INTERNAL_FORMAT", 
        (gconstpointer *) GL_RENDERBUFFER_INTERNAL_FORMAT);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_RED_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_RED_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_STENCIL_SIZE", 
        (gconstpointer *) GL_RENDERBUFFER_STENCIL_SIZE);
    g_hash_table_insert(webgl_constants, 
        "RENDERBUFFER_WIDTH", 
        (gconstpointer *) GL_RENDERBUFFER_WIDTH);
    g_hash_table_insert(webgl_constants, 
        "RENDERER", 
        (gconstpointer *) GL_RENDERER);
    g_hash_table_insert(webgl_constants, 
        "REPEAT", 
        (gconstpointer *) GL_REPEAT);
    g_hash_table_insert(webgl_constants, 
        "REPLACE", 
        (gconstpointer *) GL_REPLACE);
    g_hash_table_insert(webgl_constants, 
        "RGB", 
        (gconstpointer *) GL_RGB);
    g_hash_table_insert(webgl_constants, 
        "RGB565", 
        (gconstpointer *) GL_RGB565);
    g_hash_table_insert(webgl_constants, 
        "RGB5_A1", 
        (gconstpointer *) GL_RGB5_A1);
    g_hash_table_insert(webgl_constants, 
        "RGBA", 
        (gconstpointer *) GL_RGBA);
    g_hash_table_insert(webgl_constants, 
        "RGBA4", 
        (gconstpointer *) GL_RGBA4);
    g_hash_table_insert(webgl_constants, 
        "SAMPLER_2D", 
        (gconstpointer *) GL_SAMPLER_2D);
    g_hash_table_insert(webgl_constants, 
        "SAMPLER_CUBE", 
        (gconstpointer *) GL_SAMPLER_CUBE);
    g_hash_table_insert(webgl_constants, 
        "SAMPLES", 
        (gconstpointer *) GL_SAMPLES);
    g_hash_table_insert(webgl_constants, 
        "SAMPLE_ALPHA_TO_COVERAGE", 
        (gconstpointer *) GL_SAMPLE_ALPHA_TO_COVERAGE);
    g_hash_table_insert(webgl_constants, 
        "SAMPLE_BUFFERS", 
        (gconstpointer *) GL_SAMPLE_BUFFERS);
    g_hash_table_insert(webgl_constants, 
        "SAMPLE_COVERAGE", 
        (gconstpointer *) GL_SAMPLE_COVERAGE);
    g_hash_table_insert(webgl_constants, 
        "SAMPLE_COVERAGE_INVERT", 
        (gconstpointer *) GL_SAMPLE_COVERAGE_INVERT);
    g_hash_table_insert(webgl_constants, 
        "SAMPLE_COVERAGE_VALUE", 
        (gconstpointer *) GL_SAMPLE_COVERAGE_VALUE);
    g_hash_table_insert(webgl_constants, 
        "SCISSOR_BOX", 
        (gconstpointer *) GL_SCISSOR_BOX);
    g_hash_table_insert(webgl_constants, 
        "SCISSOR_TEST", 
        (gconstpointer *) GL_SCISSOR_TEST);
    g_hash_table_insert(webgl_constants, 
        "SHADER_TYPE", 
        (gconstpointer *) GL_SHADER_TYPE);
    g_hash_table_insert(webgl_constants, 
        "SHADING_LANGUAGE_VERSION", 
        (gconstpointer *) GL_SHADING_LANGUAGE_VERSION);
    g_hash_table_insert(webgl_constants, 
        "SHORT", 
        (gconstpointer *) GL_SHORT);
    g_hash_table_insert(webgl_constants, 
        "SRC_ALPHA", 
        (gconstpointer *) GL_SRC_ALPHA);
    g_hash_table_insert(webgl_constants, 
        "SRC_ALPHA_SATURATE", 
        (gconstpointer *) GL_SRC_ALPHA_SATURATE);
    g_hash_table_insert(webgl_constants, 
        "SRC_COLOR", 
        (gconstpointer *) GL_SRC_COLOR);
    g_hash_table_insert(webgl_constants, 
        "STATIC_DRAW", 
        (gconstpointer *) GL_STATIC_DRAW);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_ATTACHMENT", 
        (gconstpointer *) GL_STENCIL_ATTACHMENT);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_FAIL", 
        (gconstpointer *) GL_STENCIL_BACK_FAIL);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_FUNC", 
        (gconstpointer *) GL_STENCIL_BACK_FUNC);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_PASS_DEPTH_FAIL", 
        (gconstpointer *) GL_STENCIL_BACK_PASS_DEPTH_FAIL);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_PASS_DEPTH_PASS", 
        (gconstpointer *) GL_STENCIL_BACK_PASS_DEPTH_PASS);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_REF", 
        (gconstpointer *) GL_STENCIL_BACK_REF);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_VALUE_MASK", 
        (gconstpointer *) GL_STENCIL_BACK_VALUE_MASK);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BACK_WRITEMASK", 
        (gconstpointer *) GL_STENCIL_BACK_WRITEMASK);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BITS", 
        (gconstpointer *) GL_STENCIL_BITS);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_BUFFER_BIT", 
        (gconstpointer *) GL_STENCIL_BUFFER_BIT);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_CLEAR_VALUE", 
        (gconstpointer *) GL_STENCIL_CLEAR_VALUE);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_FAIL", 
        (gconstpointer *) GL_STENCIL_FAIL);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_FUNC", 
        (gconstpointer *) GL_STENCIL_FUNC);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_INDEX8", 
        (gconstpointer *) GL_STENCIL_INDEX8);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_PASS_DEPTH_FAIL", 
        (gconstpointer *) GL_STENCIL_PASS_DEPTH_FAIL);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_PASS_DEPTH_PASS", 
        (gconstpointer *) GL_STENCIL_PASS_DEPTH_PASS);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_REF", 
        (gconstpointer *) GL_STENCIL_REF);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_TEST", 
        (gconstpointer *) GL_STENCIL_TEST);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_VALUE_MASK", 
        (gconstpointer *) GL_STENCIL_VALUE_MASK);
    g_hash_table_insert(webgl_constants, 
        "STENCIL_WRITEMASK", 
        (gconstpointer *) GL_STENCIL_WRITEMASK);
    g_hash_table_insert(webgl_constants, 
        "STREAM_DRAW", 
        (gconstpointer *) GL_STREAM_DRAW);
    g_hash_table_insert(webgl_constants, 
        "SUBPIXEL_BITS", 
        (gconstpointer *) GL_SUBPIXEL_BITS);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE", 
        (gconstpointer *) GL_TEXTURE);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE0", 
        (gconstpointer *) GL_TEXTURE0);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE1", 
        (gconstpointer *) GL_TEXTURE1);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE10", 
        (gconstpointer *) GL_TEXTURE10);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE11", 
        (gconstpointer *) GL_TEXTURE11);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE12", 
        (gconstpointer *) GL_TEXTURE12);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE13", 
        (gconstpointer *) GL_TEXTURE13);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE14", 
        (gconstpointer *) GL_TEXTURE14);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE15", 
        (gconstpointer *) GL_TEXTURE15);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE16", 
        (gconstpointer *) GL_TEXTURE16);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE17", 
        (gconstpointer *) GL_TEXTURE17);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE18", 
        (gconstpointer *) GL_TEXTURE18);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE19", 
        (gconstpointer *) GL_TEXTURE19);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE2", 
        (gconstpointer *) GL_TEXTURE2);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE20", 
        (gconstpointer *) GL_TEXTURE20);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE21", 
        (gconstpointer *) GL_TEXTURE21);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE22", 
        (gconstpointer *) GL_TEXTURE22);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE23", 
        (gconstpointer *) GL_TEXTURE23);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE24", 
        (gconstpointer *) GL_TEXTURE24);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE25", 
        (gconstpointer *) GL_TEXTURE25);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE26", 
        (gconstpointer *) GL_TEXTURE26);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE27", 
        (gconstpointer *) GL_TEXTURE27);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE28", 
        (gconstpointer *) GL_TEXTURE28);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE29", 
        (gconstpointer *) GL_TEXTURE29);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE3", 
        (gconstpointer *) GL_TEXTURE3);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE30", 
        (gconstpointer *) GL_TEXTURE30);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE31", 
        (gconstpointer *) GL_TEXTURE31);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE4", 
        (gconstpointer *) GL_TEXTURE4);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE5", 
        (gconstpointer *) GL_TEXTURE5);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE6", 
        (gconstpointer *) GL_TEXTURE6);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE7", 
        (gconstpointer *) GL_TEXTURE7);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE8", 
        (gconstpointer *) GL_TEXTURE8);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE9", 
        (gconstpointer *) GL_TEXTURE9);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_2D", 
        (gconstpointer *) GL_TEXTURE_2D);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_BINDING_2D", 
        (gconstpointer *) GL_TEXTURE_BINDING_2D);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_BINDING_CUBE_MAP", 
        (gconstpointer *) GL_TEXTURE_BINDING_CUBE_MAP);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_NEGATIVE_X", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_NEGATIVE_X);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_NEGATIVE_Y", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_NEGATIVE_Y);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_NEGATIVE_Z", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_NEGATIVE_Z);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_POSITIVE_X", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_POSITIVE_X);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_POSITIVE_Y", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_POSITIVE_Y);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_CUBE_MAP_POSITIVE_Z", 
        (gconstpointer *) GL_TEXTURE_CUBE_MAP_POSITIVE_Z);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_MAG_FILTER", 
        (gconstpointer *) GL_TEXTURE_MAG_FILTER);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_MIN_FILTER", 
        (gconstpointer *) GL_TEXTURE_MIN_FILTER);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_WRAP_S", 
        (gconstpointer *) GL_TEXTURE_WRAP_S);
    g_hash_table_insert(webgl_constants, 
        "TEXTURE_WRAP_T", 
        (gconstpointer *) GL_TEXTURE_WRAP_T);
    g_hash_table_insert(webgl_constants, 
        "TRIANGLES", 
        (gconstpointer *) GL_TRIANGLES);
    g_hash_table_insert(webgl_constants, 
        "TRIANGLE_FAN", 
        (gconstpointer *) GL_TRIANGLE_FAN);
    g_hash_table_insert(webgl_constants, 
        "TRIANGLE_STRIP", 
        (gconstpointer *) GL_TRIANGLE_STRIP);
    g_hash_table_insert(webgl_constants, 
        "UNPACK_ALIGNMENT", 
        (gconstpointer *) GL_UNPACK_ALIGNMENT);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_BYTE", 
        (gconstpointer *) GL_UNSIGNED_BYTE);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_INT", 
        (gconstpointer *) GL_UNSIGNED_INT);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_SHORT", 
        (gconstpointer *) GL_UNSIGNED_SHORT);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_SHORT_4_4_4_4", 
        (gconstpointer *) GL_UNSIGNED_SHORT_4_4_4_4);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_SHORT_5_5_5_1", 
        (gconstpointer *) GL_UNSIGNED_SHORT_5_5_5_1);
    g_hash_table_insert(webgl_constants, 
        "UNSIGNED_SHORT_5_6_5", 
        (gconstpointer *) GL_UNSIGNED_SHORT_5_6_5);
    g_hash_table_insert(webgl_constants, 
        "VALIDATE_STATUS", 
        (gconstpointer *) GL_VALIDATE_STATUS);
    g_hash_table_insert(webgl_constants, 
        "VENDOR", 
        (gconstpointer *) GL_VENDOR);
    g_hash_table_insert(webgl_constants, 
        "VERSION", 
        (gconstpointer *) GL_VERSION);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_ENABLED", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_ENABLED);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_NORMALIZED", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_NORMALIZED);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_POINTER", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_POINTER);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_SIZE", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_SIZE);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_STRIDE", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_STRIDE);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_ATTRIB_ARRAY_TYPE", 
        (gconstpointer *) GL_VERTEX_ATTRIB_ARRAY_TYPE);
    g_hash_table_insert(webgl_constants, 
        "VERTEX_SHADER", 
        (gconstpointer *) GL_VERTEX_SHADER);
    g_hash_table_insert(webgl_constants, 
        "VIEWPORT", 
        (gconstpointer *) GL_VIEWPORT);
    g_hash_table_insert(webgl_constants, 
        "ZERO", 
        (gconstpointer *) GL_ZERO);
}

/**
 * gwebgl_webgl_rendering_context_base_activeTexture:
 * @self: A WebGLRenderingContextBase
 * @texture:
 */
void 
gwebgl_webgl_rendering_context_base_activeTexture(
    GwebglWebGLRenderingContextBase *self,
    guint texture)
{
    (void) self;
    glActiveTexture(texture);
}

/**
 * gwebgl_webgl_rendering_context_base_attachShader:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @shader:
 */
void 
gwebgl_webgl_rendering_context_base_attachShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLShader shader)
{
    (void) self;
    glAttachShader(program, shader);
}

/**
 * gwebgl_webgl_rendering_context_base_bindAttribLocation:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @index:
 * @name:
 */
void 
gwebgl_webgl_rendering_context_base_bindAttribLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    const gchar *name)
{
    (void) self;
    glBindAttribLocation(program, index, name);
}

/**
 * gwebgl_webgl_rendering_context_base_bindBuffer:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @buffer:
 */
void 
gwebgl_webgl_rendering_context_base_bindBuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLBuffer buffer)
{
    (void) self;
    glBindBuffer(target, buffer);
}

/**
 * gwebgl_webgl_rendering_context_base_bindFramebuffer:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @framebuffer:
 */
void 
gwebgl_webgl_rendering_context_base_bindFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLFramebuffer framebuffer)
{
    (void) self;
    glBindFramebuffer(target, framebuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_bindRenderbuffer:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @renderbuffer:
 */
void 
gwebgl_webgl_rendering_context_base_bindRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLRenderbuffer renderbuffer)
{
    (void) self;
    glBindRenderbuffer(target, renderbuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_bindTexture:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @texture:
 */
void 
gwebgl_webgl_rendering_context_base_bindTexture(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    GwebglWebGLTexture texture)
{
    (void) self;
    glBindTexture(target, texture);
}

/**
 * gwebgl_webgl_rendering_context_base_blendColor:
 * @self: A WebGLRenderingContextBase
 * @red:
 * @green:
 * @blue:
 * @alpha:
 */
void 
gwebgl_webgl_rendering_context_base_blendColor(
    GwebglWebGLRenderingContextBase *self,
    gfloat red,
    gfloat green,
    gfloat blue,
    gfloat alpha)
{
    (void) self;
    glBlendColor(red, green, blue, alpha);
}

/**
 * gwebgl_webgl_rendering_context_base_blendEquation:
 * @self: A WebGLRenderingContextBase
 * @mode:
 */
void 
gwebgl_webgl_rendering_context_base_blendEquation(
    GwebglWebGLRenderingContextBase *self,
    guint mode)
{
    (void) self;
    glBlendEquation(mode);
}

/**
 * gwebgl_webgl_rendering_context_base_blendEquationSeparate:
 * @self: A WebGLRenderingContextBase
 * @modeRGB:
 * @modeAlpha:
 */
void 
gwebgl_webgl_rendering_context_base_blendEquationSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint modeRGB,
    guint modeAlpha)
{
    (void) self;
    glBlendEquationSeparate(modeRGB, modeAlpha);
}

/**
 * gwebgl_webgl_rendering_context_base_blendFunc:
 * @self: A WebGLRenderingContextBase
 * @sfactor:
 * @dfactor:
 */
void 
gwebgl_webgl_rendering_context_base_blendFunc(
    GwebglWebGLRenderingContextBase *self,
    guint sfactor,
    guint dfactor)
{
    (void) self;
    glBlendFunc(sfactor, dfactor);
}

/**
 * gwebgl_webgl_rendering_context_base_blendFuncSeparate:
 * @self: A WebGLRenderingContextBase
 * @srcRGB:
 * @dstRGB:
 * @srcAlpha:
 * @dstAlpha:
 */
void 
gwebgl_webgl_rendering_context_base_blendFuncSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint srcRGB,
    guint dstRGB,
    guint srcAlpha,
    guint dstAlpha)
{
    (void) self;
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

/**
 * gwebgl_webgl_rendering_context_base_checkFramebufferStatus:
 * @self: A WebGLRenderingContextBase
 * @target:
 * Returns:
 */
guint 
gwebgl_webgl_rendering_context_base_checkFramebufferStatus(
    GwebglWebGLRenderingContextBase *self,
    guint target)
{
    (void) self;
    return glCheckFramebufferStatus(target);
}

/**
 * gwebgl_webgl_rendering_context_base_clear:
 * @self: A WebGLRenderingContextBase
 * @mask:
 */
void 
gwebgl_webgl_rendering_context_base_clear(
    GwebglWebGLRenderingContextBase *self,
    guint mask)
{
    (void) self;
    glClear(mask);
}

/**
 * gwebgl_webgl_rendering_context_base_clearColor:
 * @self: A WebGLRenderingContextBase
 * @red:
 * @green:
 * @blue:
 * @alpha:
 */
void 
gwebgl_webgl_rendering_context_base_clearColor(
    GwebglWebGLRenderingContextBase *self,
    gfloat red,
    gfloat green,
    gfloat blue,
    gfloat alpha)
{
    (void) self;
    glClearColor(red, green, blue, alpha);
}

/**
 * gwebgl_webgl_rendering_context_base_clearDepth:
 * @self: A WebGLRenderingContextBase
 * @depth:
 */
void 
gwebgl_webgl_rendering_context_base_clearDepth(
    GwebglWebGLRenderingContextBase *self,
    gfloat depth)
{
    (void) self;
    glClearDepthf(depth);
}

/**
 * gwebgl_webgl_rendering_context_base_clearStencil:
 * @self: A WebGLRenderingContextBase
 * @s:
 */
void 
gwebgl_webgl_rendering_context_base_clearStencil(
    GwebglWebGLRenderingContextBase *self,
    gint s)
{
    (void) self;
    glClearStencil(s);
}

/**
 * gwebgl_webgl_rendering_context_base_colorMask:
 * @self: A WebGLRenderingContextBase
 * @red:
 * @green:
 * @blue:
 * @alpha:
 */
void 
gwebgl_webgl_rendering_context_base_colorMask(
    GwebglWebGLRenderingContextBase *self,
    gboolean red,
    gboolean green,
    gboolean blue,
    gboolean alpha)
{
    (void) self;
    glColorMask(red, green, blue, alpha);
}

/**
 * gwebgl_webgl_rendering_context_base_compileShader:
 * @self: A WebGLRenderingContextBase
 * @shader:
 */
void 
gwebgl_webgl_rendering_context_base_compileShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader)
{
    (void) self;
    glCompileShader(shader);
}

/**
 * gwebgl_webgl_rendering_context_base_copyTexImage2D:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @level:
 * @internalformat:
 * @x:
 * @y:
 * @width:
 * @height:
 * @border:
 */
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
    gint border)
{
    (void) self;
    glCopyTexImage2D(target, level, internalformat, x, y, width, height, 
        border);
}

/**
 * gwebgl_webgl_rendering_context_base_copyTexSubImage2D:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @level:
 * @xoffset:
 * @yoffset:
 * @x:
 * @y:
 * @width:
 * @height:
 */
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
    gint height)
{
    (void) self;
    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

/**
 * gwebgl_webgl_rendering_context_base_createBuffer:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
GwebglWebGLBuffer 
gwebgl_webgl_rendering_context_base_createBuffer(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    GLuint a;
    glGenBuffers(1, &a);
    return a;
}

/**
 * gwebgl_webgl_rendering_context_base_createFramebuffer:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
GwebglWebGLFramebuffer 
gwebgl_webgl_rendering_context_base_createFramebuffer(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    GLuint a;
    glGenFramebuffers(1, &a);
    return a;
}

/**
 * gwebgl_webgl_rendering_context_base_createProgram:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
GwebglWebGLProgram 
gwebgl_webgl_rendering_context_base_createProgram(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    return glCreateProgram();
}

/**
 * gwebgl_webgl_rendering_context_base_createRenderbuffer:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
GwebglWebGLRenderbuffer 
gwebgl_webgl_rendering_context_base_createRenderbuffer(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    GLuint a;
    glGenRenderbuffers(1, &a);
    return a;
}

/**
 * gwebgl_webgl_rendering_context_base_createShader:
 * @self: A WebGLRenderingContextBase
 * @type:
 * Returns:
 */
GwebglWebGLShader 
gwebgl_webgl_rendering_context_base_createShader(
    GwebglWebGLRenderingContextBase *self,
    guint type)
{
    (void) self;
    return glCreateShader(type);
}

/**
 * gwebgl_webgl_rendering_context_base_createTexture:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
GwebglWebGLTexture 
gwebgl_webgl_rendering_context_base_createTexture(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    GLuint a;
    glGenTextures(1, &a);
    return a;
}

/**
 * gwebgl_webgl_rendering_context_base_cullFace:
 * @self: A WebGLRenderingContextBase
 * @mode:
 */
void 
gwebgl_webgl_rendering_context_base_cullFace(
    GwebglWebGLRenderingContextBase *self,
    guint mode)
{
    (void) self;
    glCullFace(mode);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteBuffer:
 * @self: A WebGLRenderingContextBase
 * @buffer:
 */
void 
gwebgl_webgl_rendering_context_base_deleteBuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLBuffer buffer)
{
    (void) self;
    glDeleteBuffers(1, &buffer);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteFramebuffer:
 * @self: A WebGLRenderingContextBase
 * @framebuffer:
 */
void 
gwebgl_webgl_rendering_context_base_deleteFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLFramebuffer framebuffer)
{
    (void) self;
    glDeleteFramebuffers(1, &framebuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteProgram:
 * @self: A WebGLRenderingContextBase
 * @program:
 */
void 
gwebgl_webgl_rendering_context_base_deleteProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    glDeleteProgram(program);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteRenderbuffer:
 * @self: A WebGLRenderingContextBase
 * @renderbuffer:
 */
void 
gwebgl_webgl_rendering_context_base_deleteRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLRenderbuffer renderbuffer)
{
    (void) self;
    glDeleteRenderbuffers(1, &renderbuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteShader:
 * @self: A WebGLRenderingContextBase
 * @shader:
 */
void 
gwebgl_webgl_rendering_context_base_deleteShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader)
{
    (void) self;
    glDeleteShader(shader);
}

/**
 * gwebgl_webgl_rendering_context_base_deleteTexture:
 * @self: A WebGLRenderingContextBase
 * @texture:
 */
void 
gwebgl_webgl_rendering_context_base_deleteTexture(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLTexture texture)
{
    (void) self;
    glDeleteTextures(1, &texture);
}

/**
 * gwebgl_webgl_rendering_context_base_depthFunc:
 * @self: A WebGLRenderingContextBase
 * @func:
 */
void 
gwebgl_webgl_rendering_context_base_depthFunc(
    GwebglWebGLRenderingContextBase *self,
    guint func)
{
    (void) self;
    glDepthFunc(func);
}

/**
 * gwebgl_webgl_rendering_context_base_depthMask:
 * @self: A WebGLRenderingContextBase
 * @flag:
 */
void 
gwebgl_webgl_rendering_context_base_depthMask(
    GwebglWebGLRenderingContextBase *self,
    gboolean flag)
{
    (void) self;
    glDepthMask(flag);
}

/**
 * gwebgl_webgl_rendering_context_base_depthRange:
 * @self: A WebGLRenderingContextBase
 * @zNear:
 * @zFar:
 */
void 
gwebgl_webgl_rendering_context_base_depthRange(
    GwebglWebGLRenderingContextBase *self,
    gfloat zNear,
    gfloat zFar)
{
    (void) self;
    glDepthRangef(zNear, zFar);
}

/**
 * gwebgl_webgl_rendering_context_base_detachShader:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @shader:
 */
void 
gwebgl_webgl_rendering_context_base_detachShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLShader shader)
{
    (void) self;
    glDetachShader(program, shader);
}

/**
 * gwebgl_webgl_rendering_context_base_disable:
 * @self: A WebGLRenderingContextBase
 * @cap:
 */
void 
gwebgl_webgl_rendering_context_base_disable(
    GwebglWebGLRenderingContextBase *self,
    guint cap)
{
    (void) self;
    glDisable(cap);
}

/**
 * gwebgl_webgl_rendering_context_base_disableVertexAttribArray:
 * @self: A WebGLRenderingContextBase
 * @index:
 */
void 
gwebgl_webgl_rendering_context_base_disableVertexAttribArray(
    GwebglWebGLRenderingContextBase *self,
    guint index)
{
    (void) self;
    glDisableVertexAttribArray(index);
}

/**
 * gwebgl_webgl_rendering_context_base_drawArrays:
 * @self: A WebGLRenderingContextBase
 * @mode:
 * @first:
 * @count:
 */
void 
gwebgl_webgl_rendering_context_base_drawArrays(
    GwebglWebGLRenderingContextBase *self,
    guint mode,
    gint first,
    gint count)
{
    (void) self;
    glDrawArrays(mode, first, count);
}

/**
 * gwebgl_webgl_rendering_context_base_drawElements:
 * @self: A WebGLRenderingContextBase
 * @mode:
 * @count:
 * @type:
 * @offset:
 */
void 
gwebgl_webgl_rendering_context_base_drawElements(
    GwebglWebGLRenderingContextBase *self,
    guint mode,
    gint count,
    guint type,
    glong offset)
{
    (void) self;
    glDrawElements(mode, count, type, (gconstpointer) offset);
}

/**
 * gwebgl_webgl_rendering_context_base_enable:
 * @self: A WebGLRenderingContextBase
 * @cap:
 */
void 
gwebgl_webgl_rendering_context_base_enable(
    GwebglWebGLRenderingContextBase *self,
    guint cap)
{
    (void) self;
    glEnable(cap);
}

/**
 * gwebgl_webgl_rendering_context_base_enableVertexAttribArray:
 * @self: A WebGLRenderingContextBase
 * @index:
 */
void 
gwebgl_webgl_rendering_context_base_enableVertexAttribArray(
    GwebglWebGLRenderingContextBase *self,
    guint index)
{
    (void) self;
    glEnableVertexAttribArray(index);
}

/**
 * gwebgl_webgl_rendering_context_base_finish:
 * @self: A WebGLRenderingContextBase
 */
void 
gwebgl_webgl_rendering_context_base_finish(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    glFinish();
}

/**
 * gwebgl_webgl_rendering_context_base_flush:
 * @self: A WebGLRenderingContextBase
 */
void 
gwebgl_webgl_rendering_context_base_flush(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    glFlush();
}

/**
 * gwebgl_webgl_rendering_context_base_framebufferRenderbuffer:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @attachment:
 * @renderbuffertarget:
 * @renderbuffer:
 */
void 
gwebgl_webgl_rendering_context_base_framebufferRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint renderbuffertarget,
    GwebglWebGLRenderbuffer renderbuffer)
{
    (void) self;
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, 
        renderbuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_framebufferTexture2D:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @attachment:
 * @textarget:
 * @texture:
 * @level:
 */
void 
gwebgl_webgl_rendering_context_base_framebufferTexture2D(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint textarget,
    GwebglWebGLTexture texture,
    gint level)
{
    (void) self;
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

/**
 * gwebgl_webgl_rendering_context_base_frontFace:
 * @self: A WebGLRenderingContextBase
 * @mode:
 */
void 
gwebgl_webgl_rendering_context_base_frontFace(
    GwebglWebGLRenderingContextBase *self,
    guint mode)
{
    (void) self;
    glFrontFace(mode);
}

/**
 * gwebgl_webgl_rendering_context_base_generateMipmap:
 * @self: A WebGLRenderingContextBase
 * @target:
 */
void 
gwebgl_webgl_rendering_context_base_generateMipmap(
    GwebglWebGLRenderingContextBase *self,
    guint target)
{
    (void) self;
    glGenerateMipmap(target);
}

/**
 * gwebgl_webgl_rendering_context_base_getActiveAttrib:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @index:
 * @size: (out) (optional):
 * @type: (out) (optional):
 * @name: (out) (optional) (nullable) (transfer full):
 */
void 
gwebgl_webgl_rendering_context_base_getActiveAttrib(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    gint *size,
    guint *type,
    gchar **name)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetProgramiv(program, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, &bufSize);
    GLchar *buf = g_malloc((bufSize + 1) * sizeof(GLchar));
    glGetActiveAttrib(program, index, bufSize, &bufLength, size, type, buf);
    if (name)
    {
        if (bufLength < bufSize)
        {
            buf = g_realloc(buf, (bufLength + 1) * sizeof(GLchar));
        }
        buf[bufLength] = 0;
        *name = buf;
    }
    else
    {
        g_free(buf);
    }
}

/**
 * gwebgl_webgl_rendering_context_base_getActiveUniform:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @index:
 * @size: (out) (optional):
 * @type: (out) (optional):
 * @name: (out) (optional) (nullable) (transfer full):
 */
void 
gwebgl_webgl_rendering_context_base_getActiveUniform(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint index,
    gint *size,
    guint *type,
    gchar **name)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetProgramiv(program, GL_ACTIVE_UNIFORM_MAX_LENGTH, &bufSize);
    GLchar *buf = g_malloc((bufSize + 1) * sizeof(GLchar));
    glGetActiveUniform(program, index, bufSize, &bufLength, size, type, buf);
    if (name)
    {
        if (bufLength < bufSize)
        {
            buf = g_realloc(buf, (bufLength + 1) * sizeof(GLchar));
        }
        buf[bufLength] = 0;
        *name = buf;
    }
    else
    {
        g_free(buf);
    }
}

/**
 * gwebgl_webgl_rendering_context_base_getAttachedShaders:
 * @self: A WebGLRenderingContextBase
 * @program:
 * Returns: (nullable) (transfer container) (array zero-terminated=1) (element-type guint):
 */
const GwebglWebGLShader *
gwebgl_webgl_rendering_context_base_getAttachedShaders(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetProgramiv(program, GL_ATTACHED_SHADERS, &bufSize);
    GLuint *buf = g_malloc((bufSize + 1) * sizeof(GLuint));
    glGetAttachedShaders(program, bufSize, &bufLength, buf);
    if (bufLength < bufSize)
    {
        buf = g_realloc(buf, (bufLength + 1) * sizeof(GLuint));
    }
    buf[bufLength] = 0;
    return buf;
}

/**
 * gwebgl_webgl_rendering_context_base_getAttribLocation:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @name:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getAttribLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    const gchar *name)
{
    (void) self;
    return glGetAttribLocation(program, name);
}

/**
 * gwebgl_webgl_rendering_context_base_getBufferParameteriv:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getBufferParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname)
{
    (void) self;
    GLint result;
    glGetBufferParameteriv(target, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getError:
 * @self: A WebGLRenderingContextBase
 * Returns:
 */
guint 
gwebgl_webgl_rendering_context_base_getError(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    return glGetError();
}

/**
 * gwebgl_webgl_rendering_context_base_getFramebufferAttachmentParameter:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @attachment:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getFramebufferAttachmentParameter(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint attachment,
    guint pname)
{
    (void) self;
    GLint result;
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, 
        (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getParameterb:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * Returns:
 */
guint8 
gwebgl_webgl_rendering_context_base_getParameterb(
    GwebglWebGLRenderingContextBase *self,
    guint pname)
{
    (void) self;
    guint8 result;
    glGetBooleanv(pname, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getParameterbv:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getParameterbv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetBooleanv(pname, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getParameterf:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * Returns:
 */
gfloat 
gwebgl_webgl_rendering_context_base_getParameterf(
    GwebglWebGLRenderingContextBase *self,
    guint pname)
{
    (void) self;
    gfloat result;
    glGetFloatv(pname, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getParameterfv:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getParameterfv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetFloatv(pname, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getParameteri:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getParameteri(
    GwebglWebGLRenderingContextBase *self,
    guint pname)
{
    (void) self;
    gint result;
    glGetIntegerv(pname, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getParameteriv:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetIntegerv(pname, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getProgramInfoLog:
 * @self: A WebGLRenderingContextBase
 * @program:
 * Returns: (nullable) (transfer full):
 */
gchar *
gwebgl_webgl_rendering_context_base_getProgramInfoLog(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetProgramiv(program, GL_INFO_LOG_LENGTH, &bufSize);
    char *buf = g_malloc((bufSize + 1) * sizeof(char));
    glGetProgramInfoLog(program, bufSize, &bufLength, buf);
    if (bufLength < bufSize)
    {
        buf = g_realloc(buf, (bufLength + 1) * sizeof(char));
    }
    buf[bufLength] = 0;
    return buf;
}

/**
 * gwebgl_webgl_rendering_context_base_getProgramParameter:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getProgramParameter(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    guint pname)
{
    (void) self;
    GLint result;
    glGetProgramiv(program, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getRenderbufferParameter:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getRenderbufferParameter(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname)
{
    (void) self;
    GLint result;
    glGetRenderbufferParameteriv(target, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getShaderInfoLog:
 * @self: A WebGLRenderingContextBase
 * @shader:
 * Returns: (nullable) (transfer full):
 */
gchar *
gwebgl_webgl_rendering_context_base_getShaderInfoLog(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &bufSize);
    char *buf = g_malloc((bufSize + 1) * sizeof(char));
    glGetShaderInfoLog(shader, bufSize, &bufLength, buf);
    if (bufLength < bufSize)
    {
        buf = g_realloc(buf, (bufLength + 1) * sizeof(char));
    }
    buf[bufLength] = 0;
    return buf;
}

/**
 * gwebgl_webgl_rendering_context_base_getShaderParameter:
 * @self: A WebGLRenderingContextBase
 * @shader:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getShaderParameter(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader,
    guint pname)
{
    (void) self;
    GLint result;
    glGetShaderiv(shader, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getShaderPrecisionFormat:
 * @self: A WebGLRenderingContextBase
 * @shadertype:
 * @precisiontype:
 * @range_min: (out) (optional):
 * @range_max: (out) (optional):
 * @precision: (out) (optional):
 */
void 
gwebgl_webgl_rendering_context_base_getShaderPrecisionFormat(
    GwebglWebGLRenderingContextBase *self,
    guint shadertype,
    guint precisiontype,
    gint *range_min,
    gint *range_max,
    gint *precision)
{
    (void) self;
    GLint range[2];
    glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    if (range_min) { *range_min = range[0]; }
    if (range_max) { *range_max = range[1]; }
}

/**
 * gwebgl_webgl_rendering_context_base_getShaderSource:
 * @self: A WebGLRenderingContextBase
 * @shader:
 * Returns: (nullable) (transfer full):
 */
gchar *
gwebgl_webgl_rendering_context_base_getShaderSource(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader)
{
    (void) self;
    GLint bufSize;
    GLsizei bufLength;
    glGetShaderiv(shader, GL_SHADER_SOURCE_LENGTH, &bufSize);
    char *buf = g_malloc((bufSize + 1) * sizeof(char));
    glGetShaderSource(shader, bufSize, &bufLength, buf);
    if (bufLength < bufSize)
    {
        buf = g_realloc(buf, (bufLength + 1) * sizeof(char));
    }
    buf[bufLength] = 0;
    return buf;
}

/**
 * gwebgl_webgl_rendering_context_base_getString:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * Returns:
 */
const gchar *
gwebgl_webgl_rendering_context_base_getString(
    GwebglWebGLRenderingContextBase *self,
    guint pname)
{
    (void) self;
    return (const char *) glGetString(pname);
}

/**
 * gwebgl_webgl_rendering_context_base_getSupportedExtensions:
 * @self: A WebGLRenderingContextBase
 * Returns: (nullable) (transfer full) (array zero-terminated=1) (element-type utf8):
 */
gchar **
gwebgl_webgl_rendering_context_base_getSupportedExtensions(
    GwebglWebGLRenderingContextBase *self)
{
    (void) self;
    const GLubyte *result =
    glGetString(GL_EXTENSIONS);
    char **sp = g_strsplit((const char *) result, " ", 0);
    return sp;
}

/**
 * gwebgl_webgl_rendering_context_base_getTexParameterfv:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * Returns:
 */
gfloat 
gwebgl_webgl_rendering_context_base_getTexParameterfv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname)
{
    (void) self;
    GLfloat result;
    glGetTexParameterfv(target, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getTexParameteriv:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getTexParameteriv(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname)
{
    (void) self;
    GLint result;
    glGetTexParameteriv(target, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getUniformLocation:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @name:
 * Returns:
 */
GwebglWebGLUniformLocation 
gwebgl_webgl_rendering_context_base_getUniformLocation(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    const gchar *name)
{
    (void) self;
    return glGetUniformLocation(program, name);
}

/**
 * gwebgl_webgl_rendering_context_base_getUniformf:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @location:
 * Returns:
 */
gfloat 
gwebgl_webgl_rendering_context_base_getUniformf(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location)
{
    (void) self;
    gfloat result;
    glGetUniformfv(program, location, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getUniformfv:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @location:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getUniformfv(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetUniformfv(program, location, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getUniformi:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @location:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getUniformi(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location)
{
    (void) self;
    gint result;
    glGetUniformiv(program, location, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getUniformiv:
 * @self: A WebGLRenderingContextBase
 * @program:
 * @location:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getUniformiv(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program,
    GwebglWebGLUniformLocation location,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetUniformiv(program, location, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getVertexAttribOffset:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @pname:
 * Returns:
 */
glong 
gwebgl_webgl_rendering_context_base_getVertexAttribOffset(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname)
{
    (void) self;
    glong result;
    glGetVertexAttribPointerv(index, pname, (gpointer) &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getVertexAttribf:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @pname:
 * Returns:
 */
gfloat 
gwebgl_webgl_rendering_context_base_getVertexAttribf(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname)
{
    (void) self;
    gfloat result;
    glGetVertexAttribfv(index, pname, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_getVertexAttribfv:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @pname:
 * @resultSize:
 * Returns: (transfer full):
 */
GByteArray *
gwebgl_webgl_rendering_context_base_getVertexAttribfv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname,
    gint resultSize)
{
    (void) self;
    gpointer data = g_malloc(resultSize);
    glGetVertexAttribfv(index, pname, data);
    return g_byte_array_new_take(data, resultSize);
}

/**
 * gwebgl_webgl_rendering_context_base_getVertexAttribi:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @pname:
 * Returns:
 */
gint 
gwebgl_webgl_rendering_context_base_getVertexAttribi(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    guint pname)
{
    (void) self;
    gint result;
    glGetVertexAttribiv(index, pname, &result);
    return result;
}

/**
 * gwebgl_webgl_rendering_context_base_hint:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @mode:
 */
void 
gwebgl_webgl_rendering_context_base_hint(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint mode)
{
    (void) self;
    glHint(target, mode);
}

/**
 * gwebgl_webgl_rendering_context_base_isBuffer:
 * @self: A WebGLRenderingContextBase
 * @buffer:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isBuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLBuffer buffer)
{
    (void) self;
    return glIsBuffer(buffer);
}

/**
 * gwebgl_webgl_rendering_context_base_isEnabled:
 * @self: A WebGLRenderingContextBase
 * @cap:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isEnabled(
    GwebglWebGLRenderingContextBase *self,
    guint cap)
{
    (void) self;
    return glIsEnabled(cap);
}

/**
 * gwebgl_webgl_rendering_context_base_isFramebuffer:
 * @self: A WebGLRenderingContextBase
 * @framebuffer:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isFramebuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLFramebuffer framebuffer)
{
    (void) self;
    return glIsFramebuffer(framebuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_isProgram:
 * @self: A WebGLRenderingContextBase
 * @program:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    return glIsProgram(program);
}

/**
 * gwebgl_webgl_rendering_context_base_isRenderbuffer:
 * @self: A WebGLRenderingContextBase
 * @renderbuffer:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isRenderbuffer(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLRenderbuffer renderbuffer)
{
    (void) self;
    return glIsRenderbuffer(renderbuffer);
}

/**
 * gwebgl_webgl_rendering_context_base_isShader:
 * @self: A WebGLRenderingContextBase
 * @shader:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isShader(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader)
{
    (void) self;
    return glIsShader(shader);
}

/**
 * gwebgl_webgl_rendering_context_base_isTexture:
 * @self: A WebGLRenderingContextBase
 * @texture:
 * Returns:
 */
gboolean 
gwebgl_webgl_rendering_context_base_isTexture(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLTexture texture)
{
    (void) self;
    return glIsTexture(texture);
}

/**
 * gwebgl_webgl_rendering_context_base_lineWidth:
 * @self: A WebGLRenderingContextBase
 * @width:
 */
void 
gwebgl_webgl_rendering_context_base_lineWidth(
    GwebglWebGLRenderingContextBase *self,
    gfloat width)
{
    (void) self;
    glLineWidth(width);
}

/**
 * gwebgl_webgl_rendering_context_base_linkProgram:
 * @self: A WebGLRenderingContextBase
 * @program:
 */
void 
gwebgl_webgl_rendering_context_base_linkProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    glLinkProgram(program);
}

/**
 * gwebgl_webgl_rendering_context_base_pixelStorei:
 * @self: A WebGLRenderingContextBase
 * @pname:
 * @param:
 */
void 
gwebgl_webgl_rendering_context_base_pixelStorei(
    GwebglWebGLRenderingContextBase *self,
    guint pname,
    gint param)
{
    (void) self;
    glPixelStorei(pname, param);
}

/**
 * gwebgl_webgl_rendering_context_base_polygonOffset:
 * @self: A WebGLRenderingContextBase
 * @factor:
 * @units:
 */
void 
gwebgl_webgl_rendering_context_base_polygonOffset(
    GwebglWebGLRenderingContextBase *self,
    gfloat factor,
    gfloat units)
{
    (void) self;
    glPolygonOffset(factor, units);
}

/**
 * gwebgl_webgl_rendering_context_base_renderbufferStorage:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @internalformat:
 * @width:
 * @height:
 */
void 
gwebgl_webgl_rendering_context_base_renderbufferStorage(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint internalformat,
    gint width,
    gint height)
{
    (void) self;
    glRenderbufferStorage(target, internalformat, width, height);
}

/**
 * gwebgl_webgl_rendering_context_base_sampleCoverage:
 * @self: A WebGLRenderingContextBase
 * @value:
 * @invert:
 */
void 
gwebgl_webgl_rendering_context_base_sampleCoverage(
    GwebglWebGLRenderingContextBase *self,
    gfloat value,
    gboolean invert)
{
    (void) self;
    glSampleCoverage(value, invert);
}

/**
 * gwebgl_webgl_rendering_context_base_scissor:
 * @self: A WebGLRenderingContextBase
 * @x:
 * @y:
 * @width:
 * @height:
 */
void 
gwebgl_webgl_rendering_context_base_scissor(
    GwebglWebGLRenderingContextBase *self,
    gint x,
    gint y,
    gint width,
    gint height)
{
    (void) self;
    glScissor(x, y, width, height);
}

/**
 * gwebgl_webgl_rendering_context_base_shaderSource:
 * @self: A WebGLRenderingContextBase
 * @shader:
 * @source:
 */
void 
gwebgl_webgl_rendering_context_base_shaderSource(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLShader shader,
    const gchar *source)
{
    (void) self;
    glShaderSource(shader, 1, &source, NULL);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilFunc:
 * @self: A WebGLRenderingContextBase
 * @func:
 * @ref:
 * @mask:
 */
void 
gwebgl_webgl_rendering_context_base_stencilFunc(
    GwebglWebGLRenderingContextBase *self,
    guint func,
    gint ref,
    guint mask)
{
    (void) self;
    glStencilFunc(func, ref, mask);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilFuncSeparate:
 * @self: A WebGLRenderingContextBase
 * @face:
 * @func:
 * @ref:
 * @mask:
 */
void 
gwebgl_webgl_rendering_context_base_stencilFuncSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint func,
    gint ref,
    guint mask)
{
    (void) self;
    glStencilFuncSeparate(face, func, ref, mask);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilMask:
 * @self: A WebGLRenderingContextBase
 * @mask:
 */
void 
gwebgl_webgl_rendering_context_base_stencilMask(
    GwebglWebGLRenderingContextBase *self,
    guint mask)
{
    (void) self;
    glStencilMask(mask);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilMaskSeparate:
 * @self: A WebGLRenderingContextBase
 * @face:
 * @mask:
 */
void 
gwebgl_webgl_rendering_context_base_stencilMaskSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint mask)
{
    (void) self;
    glStencilMaskSeparate(face, mask);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilOp:
 * @self: A WebGLRenderingContextBase
 * @fail:
 * @zfail:
 * @zpass:
 */
void 
gwebgl_webgl_rendering_context_base_stencilOp(
    GwebglWebGLRenderingContextBase *self,
    guint fail,
    guint zfail,
    guint zpass)
{
    (void) self;
    glStencilOp(fail, zfail, zpass);
}

/**
 * gwebgl_webgl_rendering_context_base_stencilOpSeparate:
 * @self: A WebGLRenderingContextBase
 * @face:
 * @fail:
 * @zfail:
 * @zpass:
 */
void 
gwebgl_webgl_rendering_context_base_stencilOpSeparate(
    GwebglWebGLRenderingContextBase *self,
    guint face,
    guint fail,
    guint zfail,
    guint zpass)
{
    (void) self;
    glStencilOpSeparate(face, fail, zfail, zpass);
}

/**
 * gwebgl_webgl_rendering_context_base_texParameterf:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * @param:
 */
void 
gwebgl_webgl_rendering_context_base_texParameterf(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname,
    gfloat param)
{
    (void) self;
    glTexParameterf(target, pname, param);
}

/**
 * gwebgl_webgl_rendering_context_base_texParameteri:
 * @self: A WebGLRenderingContextBase
 * @target:
 * @pname:
 * @param:
 */
void 
gwebgl_webgl_rendering_context_base_texParameteri(
    GwebglWebGLRenderingContextBase *self,
    guint target,
    guint pname,
    gint param)
{
    (void) self;
    glTexParameteri(target, pname, param);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform1f:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 */
void 
gwebgl_webgl_rendering_context_base_uniform1f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x)
{
    (void) self;
    glUniform1f(location, x);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform1i:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 */
void 
gwebgl_webgl_rendering_context_base_uniform1i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x)
{
    (void) self;
    glUniform1i(location, x);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform2f:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 */
void 
gwebgl_webgl_rendering_context_base_uniform2f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y)
{
    (void) self;
    glUniform2f(location, x, y);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform2i:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 */
void 
gwebgl_webgl_rendering_context_base_uniform2i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y)
{
    (void) self;
    glUniform2i(location, x, y);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform3f:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 * @z:
 */
void 
gwebgl_webgl_rendering_context_base_uniform3f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y,
    gfloat z)
{
    (void) self;
    glUniform3f(location, x, y, z);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform3i:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 * @z:
 */
void 
gwebgl_webgl_rendering_context_base_uniform3i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y,
    gint z)
{
    (void) self;
    glUniform3i(location, x, y, z);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform4f:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 * @z:
 * @w:
 */
void 
gwebgl_webgl_rendering_context_base_uniform4f(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gfloat x,
    gfloat y,
    gfloat z,
    gfloat w)
{
    (void) self;
    glUniform4f(location, x, y, z, w);
}

/**
 * gwebgl_webgl_rendering_context_base_uniform4i:
 * @self: A WebGLRenderingContextBase
 * @location:
 * @x:
 * @y:
 * @z:
 * @w:
 */
void 
gwebgl_webgl_rendering_context_base_uniform4i(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLUniformLocation location,
    gint x,
    gint y,
    gint z,
    gint w)
{
    (void) self;
    glUniform4i(location, x, y, z, w);
}

/**
 * gwebgl_webgl_rendering_context_base_useProgram:
 * @self: A WebGLRenderingContextBase
 * @program:
 */
void 
gwebgl_webgl_rendering_context_base_useProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    glUseProgram(program);
}

/**
 * gwebgl_webgl_rendering_context_base_validateProgram:
 * @self: A WebGLRenderingContextBase
 * @program:
 */
void 
gwebgl_webgl_rendering_context_base_validateProgram(
    GwebglWebGLRenderingContextBase *self,
    GwebglWebGLProgram program)
{
    (void) self;
    glValidateProgram(program);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib1f:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @x:
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib1f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x)
{
    (void) self;
    glVertexAttrib1f(index, x);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib1fv:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @values: (array) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib1fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values)
{
    (void) self;
    glVertexAttrib1fv(index, values);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib2f:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @x:
 * @y:
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib2f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y)
{
    (void) self;
    glVertexAttrib2f(index, x, y);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib2fv:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @values: (array) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib2fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values)
{
    (void) self;
    glVertexAttrib2fv(index, values);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib3f:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @x:
 * @y:
 * @z:
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib3f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y,
    gfloat z)
{
    (void) self;
    glVertexAttrib3f(index, x, y, z);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib3fv:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @values: (array) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib3fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values)
{
    (void) self;
    glVertexAttrib3fv(index, values);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib4f:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @x:
 * @y:
 * @z:
 * @w:
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib4f(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gfloat x,
    gfloat y,
    gfloat z,
    gfloat w)
{
    (void) self;
    glVertexAttrib4f(index, x, y, z, w);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttrib4fv:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @values: (array) (element-type gfloat):
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttrib4fv(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    const gfloat *values)
{
    (void) self;
    glVertexAttrib4fv(index, values);
}

/**
 * gwebgl_webgl_rendering_context_base_vertexAttribPointer:
 * @self: A WebGLRenderingContextBase
 * @index:
 * @size:
 * @type:
 * @normalized:
 * @stride:
 * @offset:
 */
void 
gwebgl_webgl_rendering_context_base_vertexAttribPointer(
    GwebglWebGLRenderingContextBase *self,
    guint index,
    gint size,
    guint type,
    gboolean normalized,
    gint stride,
    glong offset)
{
    (void) self;
    glVertexAttribPointer(index, size, type, normalized, stride, 
        (gconstpointer) offset);
}

/**
 * gwebgl_webgl_rendering_context_base_viewport:
 * @self: A WebGLRenderingContextBase
 * @x:
 * @y:
 * @width:
 * @height:
 */
void 
gwebgl_webgl_rendering_context_base_viewport(
    GwebglWebGLRenderingContextBase *self,
    gint x,
    gint y,
    gint width,
    gint height)
{
    (void) self;
    glViewport(x, y, width, height);
}

