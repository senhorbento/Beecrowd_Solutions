#include <stdio.h>

int main(){
    int n, saldo, menor, movimento;
    scanf("%d %d", &n, &saldo);
    menor = saldo;
    for(int i=0; i<n; i++){
        scanf("%d", &movimento);
        saldo = saldo + movimento;
        if(saldo < menor) menor = saldo;
    }
    printf("%d\n", menor);
    return 0;
}
