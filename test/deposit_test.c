#include <iostream>

#include "../thirdparty/ctest.h"
#include "../src/deposit.c"

CTEST(dohod, dohod_test)
{
	double a=10000;
	double expected = -1;
	double result = dohod(a,30);
	ASSERT_EQUAL (expected, result);
}


CTEST(dohod1, dohod1_test)
{
    double a=10000;
    float p=50/365;
    double expected =10109;
    double result = dohod(a,50);
    ASSERT_EQUAL (expected, result);
}


CTEST(dohod2, dohod2_test)
{
    double a=10000;
    float p=150/365;
    double expected =10246;
    double result = dohod(a,150);
    ASSERT_EQUAL (expected, result);
}


CTEST(dohod3, dohod3_test)
{
    double a=10000;
    float p=350/365;
    double expected =11150;
    double result = dohod(a,350);
    ASSERT_EQUAL (expected, result);
}


CTEST(dohod4, dohod4_test)
{
    double a=150000;
    float p=50/365;
    double expected =152267;
    double result = dohod(a,50);
    ASSERT_EQUAL (expected, result);
}


CTEST(dohod5, dohod5_test)
{
    double a=150000;
    float p=150/365;
    double expected =154931;
    double result = dohod(a,150);
    ASSERT_EQUAL (expected, result);
}


CTEST(dohod6, dohod6_test)
{
    double a=150000;
    float p=350/365;
    double expected =171575;
    double result = dohod(a,350);
    ASSERT_EQUAL (expected, result);
}