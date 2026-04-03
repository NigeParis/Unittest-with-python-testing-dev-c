# Unity Cheat Sheet (Table Format)

| Category | Commands / Macros |
|---------|--------------------|
| **Equality Assertions** | `TEST_ASSERT_EQUAL_INT(exp, act)` • `TEST_ASSERT_EQUAL_CHAR(exp, act)` • `TEST_ASSERT_EQUAL_STRING(exp, act)` • `TEST_ASSERT_FLOAT_WITHIN(delta, exp, act)` • `TEST_ASSERT_EQUAL_MEMORY(exp, act, len)` |
| **Pointer Assertions** | `TEST_ASSERT_NULL(ptr)` • `TEST_ASSERT_NOT_NULL(ptr)` • `TEST_ASSERT_EQUAL_PTR(exp, act)` |
| **Boolean Assertions** | `TEST_ASSERT_TRUE(cond)` • `TEST_ASSERT_FALSE(cond)` |
| **Range Assertions** | `TEST_ASSERT_INT_WITHIN(delta, exp, act)` • `TEST_ASSERT_FLOAT_WITHIN(delta, exp, act)` |
| **Utility Macros** | `TEST_FAIL()` • `TEST_FAIL_MESSAGE("msg")` • `TEST_IGNORE()` • `TEST_IGNORE_MESSAGE("msg")` |
| **Test Runner Macros** | `UNITY_BEGIN()` • `RUN_TEST(func)` • `UNITY_END()` |
| **Build Commands** | **Compile:** `cc test.c -I. -L. -lunity -o test` <br> **Run:** `./test` <br> **Verbose:** `UNITY_VERBOSE=1 ./test` <br> **Clean:** `rm test` |
