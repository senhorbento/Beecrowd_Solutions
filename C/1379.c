//problemas 1379 
#include <stdio.h>

void medianaMinima(int a, int b){
    printf("%d\n", (2*a)-b);
}

int main(void) { 
    int a,b,c; 
    scanf("%d %d",&a, &b); 
    while (a>0 && b>0) { 
        medianaMinima(a,b); 
        scanf("%d %d",&a, &b); 
    } 
    return 0; 
} 