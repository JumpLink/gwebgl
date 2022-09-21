project('gwebgl', ['c', 'vala'], version: '0.1')

vapi_dir = meson.current_source_dir() / 'vapi'

add_project_arguments(
    [
        '--vapidir', vapi_dir,
        '-X', '-shared'
    ],
    language: 'vala'
)

dependencies = [ dependency('glib-2.0'), dependency('gobject-2.0'), dependency('gdk-pixbuf-2.0'), dependency('epoxy')]

sources = files('rendering-context-base.vala')

libGwebgl = shared_library('gwebgl', sources,
    dependencies: dependencies,
    vala_gir: 'gwebgl-0.1.gir',
    install: true,
    install_dir: [true, true, true, true]
)

g_ir_compiler = find_program('g-ir-compiler')

custom_target('gwebgl-0.1.typelib', command: [g_ir_compiler, '--shared-library', 'libgwebgl.so', '--output', '@OUTPUT@', '@INPUT@'],
              input: meson.current_build_dir() / 'gwebgl-0.1.gir',
              output: 'gwebgl-0.1.typelib',
              depends: libGwebgl,
              install: true,
              install_dir: get_option('libdir') / 'girepository-1.0')