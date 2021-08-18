//problemas 2456 
#include <stdio.h>

void ler5Cartas(int a[]){
     int i;
     for(i=0;i<5;i++)
          scanf("%d", &a[i]);
}
char cresc_descr_nulo(int a[]){
     int i,cont=0;
     for(i=0;i<5;i++)
          if(a[i]>a[i+1]){
               cont++;
               printf("%d\n", cont);
          }
     if (cont==0)
          return 'C';
     else if(cont==4)
          return 'D';
     else
          return 'N';
     
}
int main(void) { 
     int vet[5]; 
     char letra; 
     ler5Cartas(vet); 
     letra = cresc_descr_nulo(vet); 
     printf("%c\n",letra); 
     return 0; 
}