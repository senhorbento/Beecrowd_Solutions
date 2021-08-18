#include <stdio.h>

int main ()
{
	int A, B, C, maior;
	scanf ("%d %d %d", &A, &B, &C);
	maior = (A + B + abs(A - B)) / 2;
	if (maior > C)
		printf ("%d eh o maior\n", maior);
	else
		printf ("%d eh o maior\n", C);
	return 0;
}
