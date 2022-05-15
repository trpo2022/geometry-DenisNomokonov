#include "libmain/cross.h"
#include "libmain/func.h"
#include "libmain/scheck.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float xk[2] = {0};
float yk[2] = {0};
float rad[2] = {0};

void output(int c, float x, float y, float r)
{
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

int main(void)
{
    char s[50];
    char re[10];
    int c = 2;
    while (c) {
        fgets(s, 50, stdin);
        sscanf(s, "%[^(]%*[\n]", re);

        for (int i = 0; re[i]; i++)
            re[i] = tolower(re[i]);

        checkstr(s, re, c);

        printf("\n");
        c--;
    }
    int n = 1;
    for (int j = 0; j < n; j++) {
        if (n > 0)
            intersect(j, n, xk, yk, rad);
    }
    return 0;
}

