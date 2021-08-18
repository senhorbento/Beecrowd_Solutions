#include <stdio.h>
#include <string.h>

int main() 
{
 double valor, kk, kkk, kkkk;
 scanf("%lf", &valor);
 if (valor >= 0 && valor <= 2000)
  {
    printf("Isento\n");
  }
  else
    if (valor > 2000 && valor <= 3000)
    {
      kk = (8 * (valor - 2000)) / 100;
      printf("R$ %.2lf\n", kk);
    }
  else
    if (valor > 3000 && valor <= 4500)
    {
      kkk = (18 * (valor - 3000)) / 100 + 80;
      printf("R$ %.2lf\n", kkk);
    }
  else
    if (valor > 4500)
    {
      kkkk = ((28 * (valor - 4500)) / 100 + 80) + 270;
      printf("R$ %.2lf\n", kkkk);
    }
  return 0;
}