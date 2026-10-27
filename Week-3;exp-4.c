#include <stdio.h>

int main()
{
    float speed, time, distance;

    printf("Enter speed: ");
    scanf("%f", &speed);

    printf("Enter time: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance travelled = %.2f", distance);

    return 0;
}