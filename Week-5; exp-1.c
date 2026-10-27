#include <stdio.h>

int main()
{
    int a, b, c, d, max, min;

    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = a;
    min = a;

    if (b > max)
        max = b;
    else
        max = max;

    if (c > max)
        max = c;
    else
        max = max;

    if (d > max)
        max = d;
    else
        max = max;

    if (b < min)
        min = b;
    else
        min = min;

    if (c < min)
        min = c;
    else
        min = min;

    if (d < min)
        min = d;
    else
        min = min;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}