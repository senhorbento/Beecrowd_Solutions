#include <stdio.h>
#include <math.h>

int main() 
{
  int HI, HF, HT;
  scanf("%d %d", &HI, &HF);
  if (HF == HI)
  {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
  else
    if (HF > HI)
    {
      HT = HF - HI;
      printf("O JOGO DUROU %d HORA(S)\n", HT);
    }
  else
    if (HF < HI)
    {
      HT = (HF - HI) + 24;
      printf("O JOGO DUROU %d HORA(S)\n", HT);
    }

  return 0;
}