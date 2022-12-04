#include <stdio.h>
#include <string.h>

int main (){
    char vet[20];
    int i,j,n,qtd;;
    scanf("%d", &n);
    for(i=0;i<n;i++){
      qtd=0;
      scanf("%s", vet);
        if(vet[0]=='R' && vet[1]=='A'){
          for(j=2;j<strlen(vet);j++)
            if(vet[j]!='0'){
              printf("%c",vet[j]);
              for(j++;j<strlen(vet);j++)
                printf("%c",vet[j]);
              qtd++;
            }
          if(qtd>0)
            printf("\n");
        }
        else
          printf("INVALID DATA\n");
    }
}