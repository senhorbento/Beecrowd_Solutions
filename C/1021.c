#include <stdio.h>

int main ()
{
	double valor1;
    int valor, R, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    scanf ("%lf", &valor1);
    valor = valor1 * 100;
    n100 = valor / 10000;
    R = valor % 10000;
    n50 = R / 5000;
    R = R % 5000;
    n20 = R / 2000;
    R = R % 2000;
    n10 = R / 1000;
    R = R % 1000;
    n5 = R / 500;
    R = R % 500;
    n2 = R / 200;
    R = R % 200;
    m1 = R / 100;
    R = R % 100;
    m50 = R / 50;
    R = R % 50;
    m25 = R / 25;
    R = R % 25;
    m10 = R / 10;
    R = R % 10;
    m05 = R / 5;
    m01 = R % 5;

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", n100);
    printf ("%d nota(s) de R$ 50.00\n", n50);
    printf ("%d nota(s) de R$ 20.00\n", n20);
    printf ("%d nota(s) de R$ 10.00\n", n10);
    printf ("%d nota(s) de R$ 5.00\n", n5);
    printf ("%d nota(s) de R$ 2.00\n", n2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", m1);
    printf ("%d moeda(s) de R$ 0.50\n", m50);
    printf ("%d moeda(s) de R$ 0.25\n", m25);
    printf ("%d moeda(s) de R$ 0.10\n", m10);
    printf ("%d moeda(s) de R$ 0.05\n", m05);
    printf ("%d moeda(s) de R$ 0.01\n", m01);
	return 0;
}