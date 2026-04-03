# Building Shared Libraries on macOS

macOS supports both `.so` and `.dylib` shared libraries.  
Here are the recommended commands for each format.

---

## Build a `.so` file (Linux‑style shared object)

macOS requires an additional linker flag to allow unresolved symbols at build time:

```bash
gcc -shared -fPIC -o libname.so file.c -Wl,-undefined,dynamic_lookup
```

---

## Build a `.dylib` file (recommended for macOS)

This is the native macOS shared library format:

```bash
gcc -dynamiclib -o libname.dylib file.c
```

---

## ✔ Notes

- Both `.so` and `.dylib` can be loaded in Python using `ctypes.CDLL`.
- `.dylib` is the standard macOS format, but `.so` works fine when built with the correct flags.
