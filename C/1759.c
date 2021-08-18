#include <stdio.h>
 
int main() {
 
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Ho");
        if (i<n-1)
            printf(" ");
        else printf("!\n");
    }
        
    return 0;
}
