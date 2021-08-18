#include <stdio.h>

int main() 
{
  double A, B, C, AR, PT;
  scanf("%lf %lf %lf", &A, &B, &C);
    if (A >= B + C || B >= A + C || C >= A + B)
      {
        AR = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", AR);
      }
 
    else
      {
      PT = A + (B + C);
      printf("Perimetro = %.1lf\n", PT);
      }
  
  
  return 0;
}