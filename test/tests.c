#include <ctest.h>
#include <libmain/cross.h>
#include <libmain/func.h>
#include <libmain/output.h>
#include <libmain/scheck.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float xk[2] = {0};
float yk[2] = {0};
float rad[2] = {0};

CTEST(suite, circle_cross)
{
    xk[0] = 0;
    yk[0] = 0;
    rad[0] = 1.5;
    xk[1] = 0;
    yk[1] = 0;
    rad[1] = 1.5;
    int j = 0, c = 1, res = 0;
    int exp = 1;
    res = intersect(j, c, xk, yk, rad);
    ASSERT_EQUAL(exp, res);
}

CTEST(suite, square_circle)
{
    const double exp = 7.068583;
    xk[0] = 0, yk[0] = 0, rad[0] = 1.5;
    double res = square(rad);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite, perimetr_circle)
{
    const double exp = 9.424778;
    xk[0] = 0, yk[0] = 0, rad[0] = 1.5;
    double res = perimetr(rad);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite, square_circle1)
{
    const double exp = 7.068583;
    xk[1] = 0, yk[1] = 0, rad[1] = 1.5;
    double res = square(rad);
    ASSERT_DBL_NEAR(exp, res);
}

CTEST(suite, perimetr_circle1)
{
    const double exp = 9.424778;
    xk[1] = 0, yk[1] = 0, rad[1] = 1.5;
    double res = perimetr(rad);
    ASSERT_DBL_NEAR(exp, res);
}
