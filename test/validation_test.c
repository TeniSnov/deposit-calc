#include <iostream>

#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST (proverka, proverka_test)
{
    double a=100000;
    float c=55;
    int expected=0;
    int result = proverka(a,c);
    ASSERT_EQUAL (expected, result);
}

CTEST(proverka2, proverka2_test)
{
    double a=100;
    float c=55;
    int expected=1;
    int result = proverka(a,c);
    ASSERT_EQUAL (expected, result);
}

CTEST(proverka1, proverka1_test)
{
    double a=150000;
    float c=555;
    int expected=1;
    int result = proverka(a,c);
    ASSERT_EQUAL (expected, result);
}

CTEST(proverka3, proverka3_test)
{
    double a=150000;
    float c=-5;
    int expected=1;
    int result = proverka(a,c);
    ASSERT_EQUAL (expected, result);
}