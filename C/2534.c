//problema 2534
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void lerVetor(int notas[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&notas[i]);
}

int compint (const void * a, const void * b)
{
    return *(int*)b-*(int*)a;
}

int main()
{
	int n,q,pos,i;	
	int notas[200];
	while ( scanf("%d %d",&n, &q)==2 ){
		lerVetor(notas,n);
                //a funcao qsort ja existe no c
                //vc so precisa criar a compint (se vira malandro)
		qsort(notas,n, sizeof(int), compint); 
		for ( i=0; i<=q - 1; i=i+1 ){
			scanf("%d",&pos);
			printf("%d\n",notas[pos-1]);
		}
	}
    return 0;
}