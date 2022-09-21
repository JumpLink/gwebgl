// LD_LIBRARY_PATH=build GI_TYPELIB_PATH=build gjs -m test.js

import Gwebgl from 'gi://gwebgl';

print("Gwebgl", Object.keys(Gwebgl))

const test = new Gwebgl.RenderingContextBase();

print("test", test.get_webgl_constants())

print(Gwebgl.sum(1, 2))