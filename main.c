#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    char f[10];

    while (1) {
        fgets(s, 100, stdin);
        sscanf(s, "%[^(]", f);

        for (int i = 0; f[i]; i++)
            f[i] = tolower(f[i]);

        if (strcmp(f, "circle") == 0) {
            float x, r, y;
            if (sscanf(s, "%*[^(](%f %f, %f)", &x, &y, &r) != 3) {
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

