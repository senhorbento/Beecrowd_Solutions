//problema 1164 
#include <stdio.h>

int ehPerfeito(int n){
   int i, soma=0;
   for (i=1;i<n;i++)
        if (n%i==0)
            soma+=i;
   if (soma == n) return 1;
   else return 0;
}

int main(void) { 
   int i,n,num; 
   scanf("%d", &n); 
   for(i=0; i<n; i++) { 
     scanf("%d",&num); 
     if (ehPerfeito(num)) 
        printf("%d eh perfeito\n",num); 
     else 
        printf("%d nao eh perfeito\n",num); 
     } 
     return 0; 
} 