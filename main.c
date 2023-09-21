#include <stdio.h>
#include "acutest.h"

int sum(int a, int b){
    return a + b;
}

void test_simple() {
    TEST_ASSERT(sum(1, 4) == 5);
    TEST_ASSERT(sum(6, 7) == 13);
    TEST_ASSERT(sum(100, 101) == 201);
    TEST_ASSERT(sum(-5, 5) == 0);
    TEST_ASSERT(sum(1000000, 1554321) == 2554321);
    TEST_ASSERT(sum(34, 0) == 34);
    TEST_ASSERT(sum(-100, -300) == -400);
}

TEST_LIST= {
    {"simple", test_simple},
    {NULL, NULL}
};
