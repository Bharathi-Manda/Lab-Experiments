#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2, real, imag;

    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f", r2);
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);
            printf("Equal roots = %.2f", r1);
        }
        else
        {
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);

            printf("Root 1 = %.2f + %.2fi\n", real, imag);
            printf("Root 2 = %.2f - %.2fi", real, imag);
        }
    }

    return 0;
}