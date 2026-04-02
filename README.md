# Testing a C Program Using Python `unittest` and `ctypes`

This project demonstrates how to test C functions using Python.  
The C code is compiled into a **shared library** (`.so`), which Python loads using `ctypes.CDLL`.  
Python’s built‑in `unittest` framework is then used to validate the behavior of the C functions.

---

## 1. Writing the C Code

Example C file:

```c
// functions.c
float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}
```

---

## 2. Compiling the C Code into a Shared Library

Compile the C file into a `.so` library:

```bash
gcc -shared -fPIC -o libfunctions.so functions.c
```

This produces:

```
libfunctions.so
```

Python can load this file directly.

---

## 3. Loading the Library in Python

Python uses the `ctypes` module to load and call C functions:

```python
import ctypes

lib = ctypes.CDLL("./libfunctions.so")
```

### Setting argument and return types

This ensures Python passes the correct data types to C:

```python
lib.add.argtypes = [ctypes.c_float, ctypes.c_float]
lib.add.restype = ctypes.c_float

lib.sub.argtypes = [ctypes.c_float, ctypes.c_float]
lib.sub.restype = ctypes.c_float
```

---

## 4. Writing Unit Tests in Python

Example test file:

```python
import unittest
import ctypes

lib = ctypes.CDLL("./libfunctions.so")

lib.add.argtypes = [ctypes.c_float, ctypes.c_float]
lib.add.restype = ctypes.c_float

lib.sub.argtypes = [ctypes.c_float, ctypes.c_float]
lib.sub.restype = ctypes.c_float

class TestFunctions(unittest.TestCase):

    def test_add(self):
        self.assertAlmostEqual(lib.add(2.0, 3.0), 5.0)
        self.assertAlmostEqual(lib.add(-1.0, 1.0), 0.0)

    def test_sub(self):
        self.assertAlmostEqual(lib.sub(5.0, 3.0), 2.0)
        self.assertAlmostEqual(lib.sub(0.0, 1.0), -1.0)

if __name__ == "__main__":
    unittest.main()
```

---

## 5. Running the Tests

Run the Python test file:

```bash
python3 test_functions.py
```

Expected output:

```
----------------------------------------------------------------------
Ran 2 tests in 0.001s

OK
```

---

## Summary

| Step | Description |
|------|-------------|
| Write C code | Implement your functions |
| Compile to `.so` | `gcc -shared -fPIC` |
| Load in Python | `ctypes.CDLL()` |
| Set types | `argtypes` and `restype` |
| Test with unittest | Automated testing of C functions |

This setup allows you to test C code easily and cleanly using Python’s testing tools.
