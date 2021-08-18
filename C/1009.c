#include <stdio.h>

int main ()
{
  double A, B, total;
  char nome;
  scanf ("%s %lf %lf", &nome, &A, &B);
  total = B * 15 / 100 + A;
  printf ("TOTAL = R$ %.2lf\n", total);
  return 0;
}
