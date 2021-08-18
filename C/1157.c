//problema 1157 
#include <stdio.h>

void listarDivisores(int n){
   int i;
   for (i = 1; i <= n; i++)
      if (n % i == 0)
      printf("%d\n", i);
}
int main(void) { 
   int n; 
   scanf("%d", &n); 
   listarDivisores(n); 
   return 0; 
} 