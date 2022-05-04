#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float perimetr(float r)
{
    float per = 2 * M_PI * r;
    return per;
}

float square(float r)
{
    float sq = M_PI * (r * r);
    return sq;
}
