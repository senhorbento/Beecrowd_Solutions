#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double X, Y;
    
    scanf("%lf %lf", &X, &Y);

    if (X == 0 && Y == 0)
    {
      printf("Origem\n");
    }
    else 
      if (X == 0 && Y != 0)
      {
      printf("Eixo Y\n");
      }
    else
      if (X != 0 && Y == 0)
      {
      printf("Eixo X\n");
      }
    else 
      if (X > 0 && Y > 0)
      {
      printf("Q1\n");
      }
    else 
      if (X < 0 && Y < 0)
    {
      printf("Q3\n");
    }
    else
      if (X > 0 && Y < 0)
    {
      printf("Q4\n");
    }
    else
      if (X < 0 && Y > 0)
    {
      printf("Q2\n");
    }
  
    return 0;
}
