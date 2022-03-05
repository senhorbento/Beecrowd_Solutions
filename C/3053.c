#include <stdio.h>
 
int main() {
    int i, qtdMovimentos, movimento;
    char copos[]={'A','B','C'}, posInicial, posFinal, aux;
   
    scanf("%d %c", &qtdMovimentos, &posInicial);

    if(posInicial=='A')
        copos[0]='M';
    else if(posInicial=='B')
        copos[1]='M';
    else if(posInicial=='C')
        copos[2]='M';
  
    for(i=0; i<qtdMovimentos; i++){   
        scanf("%d", &movimento);
        switch(movimento){
        case 1:
            aux = copos[0];
            copos[0]=copos[1];
            copos[1]=aux;
            break;
        case 2:
            aux = copos[1];
            copos[1]=copos[2];
            copos[2]=aux;
            break;
    
        case 3: 
            aux = copos[0];
            copos[0]=copos[2];
            copos[2]=aux;
            break;
    
        default: 
            break;
        }
    }
    
    for(i=0;i<3;i++)
        if(copos[i]=='M')
            if(i==0)
                posFinal='A';
            else if(i==1)
                posFinal='B';
            else if(i==2)
                posFinal='C';

    printf("%c\n", posFinal);
    return 0;
}
