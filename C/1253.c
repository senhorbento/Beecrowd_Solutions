//cifra de cesar 1253
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void caesar(char frase[], int d){
	int i,tm;
	tm=strlen(frase);
	for(i=0;i<tm;i++){
		frase[i]-=d;
		if(frase[i]<65)
			frase[i]+=26;
	}
}

int main()
{
	char frase[1000];
	int deslocamento;

	scanf("%[^\n]%*c",frase);
	scanf("%d\n",&deslocamento);
	caesar(frase, deslocamento);
	printf("%s\n",frase);

    return 0;
}