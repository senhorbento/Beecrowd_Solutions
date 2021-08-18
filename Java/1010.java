import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		int a,b,i;
		double c, soma;
		i=0;soma=0;
		Scanner entrada = new Scanner (System.in);
		while(i<2){
    		a = entrada.nextInt();
    		b = entrada.nextInt();
    		c = entrada.nextDouble();
    		soma += b * c;
    		i++;
		}
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", soma);
	}
}