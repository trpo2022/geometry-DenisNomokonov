#include "libmain/func.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[50];
    char re[10];

    while (1) {
        fgets(s, 50, stdin);
        sscanf(s, "%[^(]%*[\n]", re);

        for (int i = 0; re[i]; i++)
            re[i] = tolower(re[i]);

        if (strcmp(re, "circle") == 0) {
            float x, r, y;
            char t;

            if (3 != sscanf(s, "%*[^(](%f %f, %f)%1[^\n]", &x, &y, &r, &t)) {
                printf("Error\n");
                continue;
            }
            printf(" Figure: circle\n");
            printf(" x = %.1f\t", x);
            printf(" y = %.1f\n", y);
            printf(" Radius = %.1f\n", r);
            printf(" Perimetr = %.2f", perimetr(r));
            printf(" Square = %.2f", square(r));
        }

        else
            printf("Error\n");
    }

    return 0;
}
