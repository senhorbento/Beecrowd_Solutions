#include <stdio.h>

int main ()
{
    double A, B, C, D, E, F, TOTAL;
    scanf ("%lf %lf %lf", &A, &B, &C);
    scanf ("%lf %lf %lf", &D, &E, &F);
    TOTAL = B * C + E * F;
    printf ("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
    return 0;
}
