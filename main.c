#include <math.h>
#include <stdio.h>
#include <stdlib.h>

const float Pi = 3.1415926;
int main()
{
    int f;
    float a, b, c, r, p, p2, s;
    printf("Your figure: \n 1: Circle \n 2: Triangle \n ");
    scanf("%d", &f);
    switch (f) {
    case 1:
        printf("Circle radius: \n");
        scanf("%f", &r);
        s = Pi * r * r;
        p = 2 * Pi * r;
        printf("Area circle = %.2f \n", s);
        printf("Perimeter circle = %.2f \n", p);
        break;
    case 2:
        printf("Triangle sides: \n");
        scanf("%f %f %f", &a, &b, &c);
        if (c <= a + b) {
            p = a + b + c;
            p2 = p / 2;
            s = (sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c)));
            printf("Area triangle = %.2f \n", s);
            printf("Perimeter triangle = %.2f \n", p);
            break;
        } else
            printf("Error");
    }
    return 0;
}

