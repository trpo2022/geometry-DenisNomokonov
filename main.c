#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    char f[10];

    while (true) {
        gets(s);
        sscanf(s, "%[^(]", f);

        for (int i = 0; f[i]; i++)
            f[i] = tolower(f[i]);

        if (strcmp(f, "circle") == false) {
            float x, r, y;
            if (sscanf(s, "%*[^(](%f %f, %f)%1[^\n]", &x, &y, &r) != 3) {
                printf("Error\n");
                continue;
            }
            printf(" Figure: circle\n");
            printf(" x = %.1f\t", x);
            printf(" y = %.1f\n", y);
            printf(" Radius = %.1f\n", r);
        } else
            printf("Error\n");
    }

    return 0;
}

