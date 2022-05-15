#include "cross.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void intersect(int j, int n, float xk[], float yk[], float rad[])
{
    float d;
    int g = 0;
    for (int k = 0; k <= n; k++) {
        if (k == j)
            continue;
        d = fabs(sqrt(pow((xk[k] - xk[j]), 2) + pow((yk[k] - yk[j]), 2)));
        if (d <= (rad[j] + rad[k]))
            g++;
    }
    if (g > 0) {
        printf("\nintersect: ");
    } else
        printf("\nNOT intersect: ");
}
