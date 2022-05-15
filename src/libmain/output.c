#include "func.h"
#include "output.h"
#include <stdio.h>
#include <stdlib.h>

void output(int c, float x, float y, float r)
{
    float xk[1] = {0};
    float yk[1] = {0};
    float rad[1] = {0};

    if (c == 2) {
        xk[0] = x;
        yk[0] = y;
        rad[0] = r;

        printf(" Figure: circle\n");
        printf(" x = %.1f\t", xk[0]);
        printf(" y = %.1f\n", yk[0]);
        printf(" Radius = %.1f\n", rad[0]);
        printf(" Perimetr = %.2f", perimetr(rad));
        printf(" Square = %.2f", square(rad));
    }
    printf("\n");

    if (c == 1) {
        xk[1] = x;
        yk[1] = y;
        rad[1] = r;
        printf(" Figure: circle\n");
        printf(" x = %.1f\t", xk[1]);
        printf(" y = %.1f\n", yk[1]);
        printf(" Radius = %.1f\n", rad[1]);
        printf(" Perimetr = %.2f", perimetr(rad));
        printf(" Square = %.2f", square(rad));
    }
}
