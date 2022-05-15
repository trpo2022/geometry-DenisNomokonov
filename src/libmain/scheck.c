#include "output.h"
#include "scheck.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkstr(char s[50], char re[10], int c)
{
    c = 1;
    while (c) {
        float x, y, r;
        char t;
        if (strcmp(re, "circle") == 0) {
            if (3 != sscanf(s, "%*[^(](%f %f, %f)%1[^\n]", &x, &y, &r, &t)) {
                printf("Error 1\n");
                exit(0);
            }

            if (c == 1)
                output(1, x, y, r);
            if (c == 0)
                output(0, x, y, r);

        } else {
            printf("Error 0\n");
            exit(0);
        }
        c--;
    }
}
