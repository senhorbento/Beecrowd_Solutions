#include <stdio.h>
 
int main() {
 
    int numero;
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("%d\n",numero += 2);
    else
        printf("%d\n",numero += 1);
 
    return 0;
}
