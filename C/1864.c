#include <stdio.h>
 
int main() {
    int i,n;
    char frase[]={"LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED"};
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
        printf("%c", frase[i]);
    printf("\n");
    return 0;
}
