#include <stdio.h>
#include <string.h>

int main() {
    int n,i;
    char nome[20];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        setbuf(stdin,NULL);
        scanf("%s %*d", nome);
        if(strcmp(nome,"Thor")==0)
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
