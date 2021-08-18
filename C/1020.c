#include <stdio.h>
#include <math.h>

int main() 
{
  int t, a, m, d, r;
  scanf ("%d", &t);
  a = t / 365;
  r = t % 365;
  m = r / 30;
  d = r % 30;
  printf("%d ano(s)\n", a);
  printf("%d mes(es)\n", m);
  printf("%d dia(s)\n", d);
  return 0;
}