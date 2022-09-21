import Gwebgl from 'gi://gwebgl';

print("Gwebgl", Object.keys(Gwebgl))

const test = new Gwebgl.RenderingContextBase();

print("test", test.get_webgl_constants())

print(Gwebgl.sum(1, 2))