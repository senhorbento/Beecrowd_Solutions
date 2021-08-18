#include <stdio.h>
 
int main() {
     int competidores,folhas,qtd;
     scanf("%d %d %d", &competidores, &folhas, &qtd);
     if(qtd*competidores<=folhas)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
