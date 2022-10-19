export function addGLConstants(giBaseClass, proto) {
    const hash = giBaseClass.get_webgl_constants();
    for (const [k, v] of Object.entries(hash)) {
        Object.defineProperty(proto, k, {value: v});
    }
}