import unittest
import ctypes

lib = ctypes.CDLL("./function_to_test.so")

class TestFunction(unittest.TestCase):

    def test_Add(self):
        tests = [
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 6),   # wrong on purpose
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 5),
            (2, 3, 3), # wrong
            (-1, 1, 0),
        ]

        for a, b, expected in tests:
            with self.subTest(a=a, b=b, expected=expected):
                self.assertEqual(lib.add(a, b), expected)

    def test_Sub(self):
        with self.subTest():
            self.assertEqual(lib.sub(-1, 1), -2)

if __name__ == "__main__":
    unittest.main()