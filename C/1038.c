#include <stdio.h>
#include <stdlib.h>

int main() 
{
  double Item, quanti;
  scanf ("%lf %lf", &Item, &quanti);
if (Item == 1)
{
  printf("Total: R$ %.2lf\n", 4 * quanti);
}
else 
  if (Item == 2)
{
  printf("Total: R$ %.2lf\n", 4.5 * quanti);
}
else
  if (Item == 3)
{
  printf("Total: R$ %.2lf\n",5 * quanti);
}
else 
  if (Item == 4)
{
  printf("Total: R$ %.2lf\n",2 * quanti);
}
else
  if (Item == 5)
{
  printf("Total: R$ %.2lf\n",1.5 * quanti);
}
  return 0;
}