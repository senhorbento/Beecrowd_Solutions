//problema 1158 
#include <stdio.h>

int somaImpares(int x, int y){
    int soma=0,i;
    if(x % 2==0)
        x++;
    for(i=0;i<y;i++){
        soma += x;
        x+=2;
    }
    return soma;
}

int main(void) { 
    int i,n,x,y;
    scanf("%d", &n);
    for(i=0; i<n; i++) { 
       scanf("%d %d",&x,&y); 
       printf("%d\n", somaImpares(x,y));
    } 
    return 0; 
} 