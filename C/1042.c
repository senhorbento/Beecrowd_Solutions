//problema 1042
#include<stdlib.h>
#include<stdio.h>

void ler(int *a, int *b, int *c){
	scanf("%d %d %d", &*a, &*b, &*c);
}
void ordenar(int *a, int *b, int *c){
	int cont;
	if (*a > *b){
        cont = *a;
        *a = *b;
        *b = cont;
    }
    if (*a > *c){
		cont = *a;
		*a = *c;
		*c = cont; 
    }
    if (*b > *c){
    	cont = *b;
    	*b = *c;
    	*c = cont;
    }
}
int main()
{
	int a,b,c,i,x,y,z;
	
	ler(&a,&b,&c);
	x = a;
	y = b;
	z = c;
	ordenar(&x,&y,&z);
	printf("%i\n%i\n%i\n\n%i\n%i\n%i\n",x,y,z,a,b,c);
	return 0;
}