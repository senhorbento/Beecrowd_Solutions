//problema 1036
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define RAIZ_1	1
#define RAIZ_2	2

typedef struct{
	double a,b,c;
}TEq2G;

void ler(TEq2G *n){
	scanf("%lf",&(*n).a);
	scanf("%lf",&(*n).b);
	scanf("%lf",&(*n).c);
}

double delta(TEq2G n){
	return pow(n.b, 2) - 4 * (n.a * n.c);
}

double raiz(TEq2G n, int d){
	if (d==1)
		return (n.b * -1 + sqrt(delta(n))) / (2 * n.a);
	else if(d==2)
		return (n.b * -1 - sqrt(delta(n))) / (2 * n.a);
	
}
int main()
{
	int n,i;
	TEq2G eq;
	ler(&eq);
	
	if (delta(eq)<0 || eq.a==0)
	    printf("Impossivel calcular\n");
	else 
	   printf("R1 = %.5lf\nR2 = %.5lf\n",raiz(eq,RAIZ_1), raiz(eq,RAIZ_2));

	return 0;
}