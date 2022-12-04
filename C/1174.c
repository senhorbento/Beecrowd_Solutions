#include <stdio.h>

int main() {
    int i;
    double n, vet[100];
    for(i = 0; i < 100; i++){
        scanf("%lf", &n);
        vet[i]=n;
    }
    for(i = 0; i < 100; i++){
        if(vet[i] <= 10)
            printf("A[%d] = %.1lf\n", i, vet[i]);
    }
    return 0;
}