#include <stdio.h>
#include <math.h>

int main()
{
    float n, root;

    printf("Enter a number: ");
    scanf("%f", &n);

    if (n >= 0)
    {
        root = sqrt(n);
        printf("Square root = %.2f", root);
    }
    else
    {
        printf("Square root of a negative number is not real");
    }

    return 0;
}