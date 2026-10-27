#include <stdio.h>

int main()
{
    int a, b, c, d, e, total;
    float average;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    average = total / 5.0;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f", average);

    return 0;
}