#include <stdio.h>

void mostrarDiferenca(int n){
    int joao, ze, diferenca = 0;
    for(int i=0; i<n; i++){
        scanf("%d %d", &joao, &ze);
        diferenca += joao - ze;
        printf("%d\n", diferenca);
    }
}

int main(){
    int n, qtd = 1;
    do{
        scanf("%d", &n);
        if(n != 0){
            printf("Teste %d\n", qtd);
            mostrarDiferenca(n);
            printf("\n");
            qtd++;
        }
    }while(n != 0);
    return 0;
}
