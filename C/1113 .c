//problemas 1113
#include <stdio.h>

void cresc_descr(int x, int y){
    if (x<y)
        printf ("Crescente\n");
    else
        printf("Decrescente\n");
    
}

int main(void) { 
    int x,y; 
    while (scanf("%d %d",&x, &y)==2 && x!=y) 
        cresc_descr(x,y); 
    return 0; 
} 