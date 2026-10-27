#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
        bill = units * 1.50;
    else if (units <= 200)
        bill = units * 2.50;
    else if (units <= 500)
        bill = units * 4.00;
    else
        bill = units * 6.00;

    if (units >= 0)
        printf("Electricity bill = Rs. %.2f", bill);

    return 0;
}