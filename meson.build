project('gwebgl', 'c')

gnome = import('gnome')

libgwebgl = library('gwebgl', ['src/c/gwebgl/rendering-context-base.c', 'src/c/gwebgl/rendering-context.c'], dependencies: [dependency('gdk-pixbuf-2.0'), dependency('epoxy')],
    install: true)

webgl_gir = gnome.generate_gir(
    libgwebgl,
    sources: ['src/c/gwebgl/rendering-context-base.c', 'src/c/gwebgl/rendering-context-base.h', 'src/c/gwebgl/rendering-context.c', 'src/c/gwebgl/rendering-context.h', 'src/c/gwebgl/handle-types.h', 'src/c/gwebgl/gwebgl.h'],
    namespace: 'Gwebgl',
    nsversion: '1.0',
    identifier_prefix: 'Gwebgl',
    symbol_prefix: 'gwebgl',
    includes: ['GObject-2.0', 'GdkPixbuf-2.0'],
    header: 'gwebgl/gwebgl.h',
    install: true,
)

install_data('src/js/WebGLRenderingContextBase.js',
  'src/js/WebGLRenderingContext.js')
install_data('README.md',
  install_dir: get_option('datadir')/'doc/gwebgl')

libgwebglgtk3 = library('gwebglgtk3', ['src/c/gwebglgtk/gwebglgtk.c'],
    dependencies: [dependency('gtk+-3.0')], install: true)

install_headers('src/c/gwebglgtk/gwebglgtk.h', subdir: 'gwebglgtk3')

libgwebglgtk3_gir = gnome.generate_gir(
    libgwebglgtk3,
    sources: ['src/c/gwebglgtk/gwebglgtk.c', 'src/c/gwebglgtk/gwebglgtk.h'],
    namespace: 'GwebglGtk',
    nsversion: '3.0',
    identifier_prefix: 'GwebglGtk',
    symbol_prefix: 'gwebglgtk',
    includes: ['Gtk-3.0'],
    header: 'src/c/gwebglgtk/gwebglgtk.h',
    install: true,
)

libgwebglgtk4 = library('gwebglgtk4', ['src/c/gwebglgtk/gwebglgtk.c'],
    dependencies: [dependency('gtk4')], install: true)

install_headers('src/c/gwebglgtk/gwebglgtk.h', subdir: 'gwebglgtk4')

libgwebglgtk4_gir = gnome.generate_gir(
    libgwebglgtk4,
    sources: ['src/c/gwebglgtk/gwebglgtk.c', 'src/c/gwebglgtk/gwebglgtk.h'],
    namespace: 'GwebglGtk',
    nsversion: '4.0',
    identifier_prefix: 'GwebglGtk',
    symbol_prefix: 'gwebglgtk',
    includes: ['Gtk-4.0'],
    header: 'src/c/gwebglgtk/gwebglgtk.h',
    install: true,
)
