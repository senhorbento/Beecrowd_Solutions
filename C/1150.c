#include <stdio.h>
 
int main() {
 
    int z,x,i,qtd;

    qtd = 1;

    scanf("%d",&x);

    do{
        scanf("%d",&z);
    }while(z<=x);

    for(i=x;x<z;i++){
        x+=i;
        qtd++;
    }

    printf("%d\n", qtd);
    return 0;
}
