#include <stdio.h>

int main() 
{
  int a, b, c, d, e, f, cont;
  scanf("%d %d %d", &a, &b, &c);
  d = a;
  e = b;
  f = c;
    if (a > b)
      {
        cont = a;
        a = b;
        b = cont;
      }
    if (a > c)
      {
        cont = a;
        a = c;
        c = cont; 
      }
    if (b > c)
      {
        cont = b;
        b = c;
        c = cont;
      }
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("\n");
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  return 0;
}