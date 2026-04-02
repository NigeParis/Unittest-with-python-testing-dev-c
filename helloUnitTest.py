import unittest
import subprocess

class TestHello(unittest.TestCase):

    def test_output(self):
        result = subprocess.run(
            ["./hello"],
            capture_output=True,
            text=True
        )
        self.assertEqual(result.stdout, "Hello world!")
        self.assertEqual(result.returncode, 0)


if __name__ == "__main__":
    unittest.main()