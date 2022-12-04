#include <stdio.h>
 
int main() {
     int i, n, valor, vet[1000];
     scanf("%d", &n);
     valor=0;
     for(i=0;i<1000;i++){
        printf("N[%d] = %d\n", i, valor);
        valor++;
        if(valor == n)
            valor = 0;
     }
    return 0;
}