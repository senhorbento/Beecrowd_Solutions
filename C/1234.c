#include <stdio.h>

int main (){
    char vet[100];
    int i, a;
    while (fgets(vet,100,stdin) != NULL){
        a=0;
        for(i=0; vet[i] != '\0'; i++)
            if(vet[i] >= 'a' && vet[i] <= 'z')
                vet[i]-=32;
        
        for(i=0; vet[i] != '\0'; i++)
            if(vet[i] >= 'A' && vet[i] <= 'Z'){
                if(a%2!=0){
                    vet[i]+=32;
                    a++;
                }
                else a++;
            }
        vet[strlen(vet)-1]='\0';
        printf("%s\n", vet);
    }
}