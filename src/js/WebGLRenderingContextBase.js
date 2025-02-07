import Gwebgl from 'gi://Gwebgl';
import { addGLConstants } from './internal.js';

// The wrapper methods for WebGLRenderingContextBase are added as a mixin
// because they may have to be added to more than one base class. For WebGL 1
// only we can get away with only adding them to WebGLRenderingContext,
// ignoring WebGLRenderingContextBase, but to support WebGL 2 in addition, they
// would also have to be added to WebGL2RenderingContext, because its GObject
// version derives directly from the GObject version of WebGLRenderingContext,
// not this wrapper.
// The new class name is 'Gjs_' + parentClass.name
export function mixinWebGLRenderingContextBase(parentClass) {
    const name = 'Gjs_' + parentClass.name;
    const namer = {};
    namer[name] = class extends parentClass {
        constructor(params) {
            super(params);
        }      
    };
    addGLConstants(Gwebgl.WebGLRenderingContextBase, namer[name].prototype);

    return namer[name];
}


