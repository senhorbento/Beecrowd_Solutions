#include <stdio.h>
#include <math.h>

int main() 
{
  double sa, aum, ns;
  char p='%';
  scanf("%lf", &sa);
  if (sa >= 0 && sa <= 400)
    {
      aum = (sa * 15) / 100;
      ns= aum + sa;
      printf("Novo salario: %.2lf\n", ns);
      printf("Reajuste ganho: %.2lf\n", aum);
      printf("Em percentual: 15 %c\n", p);
    }
  else 
    if (sa >= 400.01 && sa <= 800)
        {
          aum = (sa * 12) / 100;
          ns= aum + sa;
          printf("Novo salario: %.2lf\n", ns);
          printf("Reajuste ganho: %.2lf\n", aum);
          printf("Em percentual: 12 %c\n", p);
        }
  else
    if (sa >= 800.01 && sa <= 1200)
        {
          aum = (sa * 10) / 100;
          ns= aum + sa;
          printf("Novo salario: %.2lf\n", ns);
          printf("Reajuste ganho: %.2lf\n", aum);
          printf("Em percentual: 10 %c\n", p);
        }
  else
    if (sa >= 1200.01 && sa <= 2000)
        {
          aum = (sa * 7) / 100;
          ns= aum + sa;
          printf("Novo salario: %.2lf\n", ns);
          printf("Reajuste ganho: %.2lf\n", aum);
          printf("Em percentual: 7 %c\n", p);
        }
  else
    if (sa >= 2000.01)
        {
          aum = (sa * 4) / 100;
          ns= aum + sa;
          printf("Novo salario: %.2lf\n", ns);
          printf("Reajuste ganho: %.2lf\n", aum);
          printf("Em percentual: 4 %c\n", p);
        }

  return 0;
}