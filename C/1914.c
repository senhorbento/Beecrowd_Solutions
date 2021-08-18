#include <stdio.h>
#include <string.h>

int main() {
     int n,a,b,i;
     char jogador1[20], escolha1[20], jogador2[20], escolha2[20];
     scanf("%d",&n);
     for(i=0;i<n;i++){
        setbuf(stdin,NULL);
        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
        scanf("%d %d", &a,&b);
        if((a+b)%2==0)
            if(strcmp(escolha1,"PAR")==0) printf("%s\n", jogador1);
            else printf("%s\n", jogador2);
        else
            if(strcmp(escolha1,"IMPAR")==0) printf("%s\n", jogador1);
            else printf("%s\n", jogador2);
     }
    return 0;
}
