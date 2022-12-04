#include <stdio.h>

int main() {
    int i, n, vet[10];
    scanf("%d", &n);
    vet[0]=n;
    printf("N[0] = %d\n", n);
    for(i = 1; i <= 9; i++){
       vet[i]=vet[i-1]*2; 
      printf("N[%d] = %d\n", i,vet[i]);
    }
    return 0;
}