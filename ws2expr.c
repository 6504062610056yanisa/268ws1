#include <stdio.h>
#include <math.h>

int main()
{
    
    double a = 0, b = 0, c = 0, d = 0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    printf("A = %.2f\n", 3.0 * a / 5 + 1.0 / b);

    
    printf("B = %.2f\n", (3 * a + 5 * b) / (2 + c));

    
    printf("C = %.2f\n", (2.0 / 7) * (pow(4, 3 + c) - 5 * d));

   
    if (a != 0)
        printf("D = %.2f\n", sqrt((2 + 8 * b) / a));
    else
        printf("D = cannot calculate\n");

    printf("E = %.2f\n", cbrt(b * b - 4 * d));

    return 0;
}
