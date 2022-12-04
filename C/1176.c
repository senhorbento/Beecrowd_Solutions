#include <stdio.h>
 
int main() {
    int i, n, pos;
    unsigned long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(i=3;i<61;i++)
        fib[i]=fib[i-1]+fib[i-2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &pos);
        printf("Fib(%d) = %llu\n", pos, fib[pos]);
    }
    return 0;
}