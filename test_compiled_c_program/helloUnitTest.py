import unittest
import subprocess
import sys

# Extract arguments AFTER the "--"
if "--" in sys.argv:
    idx = sys.argv.index("--")
    EXTRA_ARGS = sys.argv[idx+1:]
    sys.argv = sys.argv[:idx]  # restore unittest's argv
else:
    EXTRA_ARGS = []

class TestHello(unittest.TestCase):

    def test_output(self):
        cmd = ["./hello"] + EXTRA_ARGS

        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True
        )

        self.assertEqual(result.stdout, "Hello World!")
        self.assertNotRegex(result.stderr.lower(), r"error|fail|critical|fatal")
        self.assertEqual(result.returncode, 0)

if __name__ == "__main__":
    unittest.main()
