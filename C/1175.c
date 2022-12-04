#include <stdio.h>

int main() {
    int i,j, n, vet[20], inv[20], aux[20];
    for(i=0,j=19;i<20;i++,j--){
        scanf("%d", &n);
        vet[i]=n;
        inv[j]=n;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n", i,inv[i]);
    }
    return 0;
}