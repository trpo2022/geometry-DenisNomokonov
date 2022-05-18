#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float perimetr(float rad[])
{
    if (rad[0] < 0)
        return 0;
    float r = rad[0];
    float per = 2 * M_PI * r;
    return per;
}

float square(float rad[])
{
    if (rad[0] < 0)
        return 0;
    float r = rad[0];
    float sq = M_PI * (r * r);
    return sq;
}

float perimetr1(float rad[])
{
    if (rad[1] < 0)
        return 0;
    float r = rad[1];
    float per = 2 * M_PI * r;
    return per;
}

float square1(float rad[])
{
    if (rad[1] < 0)
        return 0;
    float r = rad[1];
    float sq = M_PI * (r * r);
    return sq;
}
