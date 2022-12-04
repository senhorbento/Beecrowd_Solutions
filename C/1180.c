#include <stdio.h>
 
int main() {
     int i, n, menor, pos,vet[1000];
     scanf("%d", &n);
     for(i=0;i<n;i++){
        scanf("%d", &vet[i]);;
     }
     menor = vet[0];
     pos = 0;
     for(i=1;i<n;i++)
        if(vet[i]<menor){
            menor = vet[i];
            pos = i;
        }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}