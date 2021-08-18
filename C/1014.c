#include <stdio.h>

int main ()
{
    double X, Y, C;
    scanf ("%lf %lf", &X, &Y);
    C = X / Y;
    printf ("%.3lf km/l\n", C);
    return 0;
}
