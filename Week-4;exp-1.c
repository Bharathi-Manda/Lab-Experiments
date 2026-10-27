#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G, i, J;
    int a1, a2;

    printf("Enter A, B, C, D, E, F, G: ");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);

    printf("Enter i: ");
    scanf("%d", &i);

    printf("a. A+B*C+(D*E)+F*G = %d\n",
           A + B*C + (D*E) + F*G);

    if (B != 0)
        printf("b. A/B*C-B+A*D/3 = %d\n",
               A/B*C - B + A*D/3);
    else
        printf("b. Division by zero is not possible\n");

    a1 = A++ + B-- - A;
    printf("c. A+++B---A = %d\n", a1);

    J = (i++) + (++i);
    printf("d. J = (i++) + (++i) = %d\n", J);

    return 0;
}