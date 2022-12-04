#include <stdio.h>
#include <string.h>

int main(){
	char vet[110],c;
	int n, i, j;
	scanf("%d", &n);
	scanf("%c", &c);
	for(j=0;j<n;j++){
		fgets(vet,110,stdin);
        for(i=(strlen(vet)/2)-1;i>-1;i--)
            printf("%c", vet[i]);
        for(i=strlen(vet)-2;i>=strlen(vet)/2;i--)
            printf("%c", vet[i]);
		printf("\n");
	}
}