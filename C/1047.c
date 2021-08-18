#include <stdio.h>
#include <math.h>

int main() 
{
  int HI, HF, HT, MI, MF, MT;
  scanf("%d %d %d %d", &HI, &MI, &HF, &MF);
  if (HF == HI && MF == HI)
  {
  printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
    else
      if ((HF == HI && MF < MI) || (HF < HI && MF < MI))
      {
      HT = (HF - HI) + 23;
      MT = (MF - MI) + 60;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
      }

    else
      if ((HF == HI && MF > MI) || (HF > HI && MF > MI) || (HF > HI && MF == MI))
      {
      HT = HF - HI;
      MT = MF - MI;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
      }

    else
      if (HF > HI && MF < MI)
      {
        HT = (HF - HI) - 1;
        MT = (MF - MI) + 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
      }
    else
    {
      if (HF < HI && MF > MI)
      HT = (HF - HI) + 24;
      MT = MF - MI;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
    }
  return 0;
}