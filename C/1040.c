#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double MN, NE, N1, N2, N3, N4, media;
    
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    media = ((N1 * 2.0) + (N2 * 3.0) + (N3 * 4.0) + (N4 * 1.0)) / 10.0;
    
    printf("Media: %.1lf\n", media);
        if (media >= 7)
        {
        printf("Aluno aprovado.\n");
        }
        else 
            if (media < 5)
            {
            printf("Aluno reprovado.\n");
            }
        else
        {
            {
            printf("Aluno em exame.\n");
            }
            scanf("%lf", &NE);
            printf("Nota do exame: %.1lf\n", NE);
            MN = (media + NE) / 2;
              if (MN >= 5)
                {
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n", MN);
                }
              else
              {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n", MN);
              }
        }
    return 0;
}
