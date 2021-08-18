#include <stdio.h>
#include <math.h>

int main() 
{
  double A, B, C, x1, x2, delta;
  scanf ("%lf %lf %lf", &A, &B, &C);
  delta = pow(B, 2) - 4 * (A * C);
  if (A == 0 | delta <= 0)
    {
    printf("Impossivel calcular\n");
    }
    else
      {
      x1 = (B * -1 + sqrt(delta)) / (2 * A);
      x2 = (B * -1 - sqrt(delta)) / (2 * A);
      printf("R1 = %.5lf\n", x1);
      printf("R2 = %.5lf\n", x2);
      }
  return 0;
}