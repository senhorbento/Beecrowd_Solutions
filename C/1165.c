#include <stdio.h>
 
int main() {
    int a,b,i,j;
    scanf("%d", &a);
    for(i=0;i<a;i++){
        scanf("%d", &b);
        for(j=2;j<=b;j++)
            if(b%j==0){
                if(j!=b){ printf("%d nao eh primo\n", b);break;}
                else printf("%d eh primo\n", b);
            }
    }
    return 0;
}
