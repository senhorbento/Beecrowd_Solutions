#include <stdio.h>
#include <math.h>

int main() 
{
  double A, B, C, cont;
  scanf("%lf %lf %lf", &A, &B, &C);

    if (A < B)
      {
        cont = A;
        A = B;
        B = cont;
      }
    if (A < C)
      {
        cont = A;
        A = C;
        C = cont; 
      }
    if (B < C)
      {
        cont = B;
        B = C;
        C = cont;
      }
      
  if (A >= B + C)
  {
  printf("NAO FORMA TRIANGULO\n");
  }
    else
    {
    if (pow(A, 2) == pow(B, 2) + pow(C, 2))
    {
      printf("TRIANGULO RETANGULO\n");
    }
    else
      if (pow(A, 2) > pow(B, 2) + pow(C, 2))
      {
      printf("TRIANGULO OBTUSANGULO\n");
      }
    else
      if (pow(A, 2) < pow(B, 2) + pow(C, 2))
      {
      printf("TRIANGULO ACUTANGULO\n");
      }
      if (A == B && B == C && A == C)
      {
        printf("TRIANGULO EQUILATERO\n");
      }
      else 
      if (A == B || B == C || A == C)
      {
        printf("TRIANGULO ISOSCELES\n");
      }
    }
  return 0;
}