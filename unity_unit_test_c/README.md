# Unity Cheat Sheet (Table Format)

| Category | Commands / Macros |
|---------|--------------------|
| **Equality Assertions** | `TEST_ASSERT_EQUAL_INT(exp, act)`</br> `TEST_ASSERT_EQUAL_CHAR(exp, act)` </br> `TEST_ASSERT_EQUAL_STRING(exp, act)` </br> `TEST_ASSERT_FLOAT_WITHIN(delta, exp, act)` </br> `TEST_ASSERT_EQUAL_MEMORY(exp, act, len)` |
| **Pointer Assertions** | `TEST_ASSERT_NULL(ptr)` </br> `TEST_ASSERT_NOT_NULL(ptr)` </br> `TEST_ASSERT_EQUAL_PTR(exp, act)` |
| **Boolean Assertions** | `TEST_ASSERT_TRUE(cond)` </br> `TEST_ASSERT_FALSE(cond)` |
| **Range Assertions** | `TEST_ASSERT_INT_WITHIN(delta, exp, act)` </br> `TEST_ASSERT_FLOAT_WITHIN(delta, exp, act)` |
| **Utility Macros** | `TEST_FAIL()` </br> `TEST_FAIL_MESSAGE("msg")` </br> `TEST_IGNORE()` </br> `TEST_IGNORE_MESSAGE("msg")` |
| **Test Runner Macros** | `UNITY_BEGIN()` </br> `RUN_TEST(func)` </br> `UNITY_END()` |
| **Build Commands** | **Compile:** `cc test.c -I. -L. -lunity -o test` <br> **Run:** `./test` <br> **Verbose:** `UNITY_VERBOSE=1 ./test` <br> **Clean:** `rm test` |


```c

link to GitHub: https://github.com/ThrowTheSwitch/Unity/tree/master
```