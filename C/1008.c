#include <stdio.h>

int main ()
{
  int A, B;
  double C, salary;
  scanf ("%d %d %lf", &A, &B, &C);
  salary = B * C;
  printf("NUMBER = %d\n", A);
  printf ("SALARY = U$ %.2lf\n", salary);
  return 0;
}
