/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_add_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:19:24 by nrobinso          #+#    #+#             */
/*   Updated: 2026/04/03 17:53:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"
void setUp(void) {}      // runs before each test (optional)
void tearDown(void) {}   // runs after each test (optional)

// function add to test
int add(int a, int b) {
    return (a + b);    
}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3)); // OK
}

void test_add_again(void) {
    TEST_ASSERT_EQUAL_INT(-5, add(2, 3)); // Fail
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_add_again);
    return UNITY_END();
}

// cc test_something.c -L. -l unity -o test

// output
// ./test_add_function                                     
// test_add_function.c:33:test_add:PASS
// test_add_function.c:28:test_add_again:FAIL: Expected 6 Was 5
//
// -----------------------
// 2 Tests 1 Failures 0 Ignored 
// FAIL

// Call main folder "unitTest_testers"