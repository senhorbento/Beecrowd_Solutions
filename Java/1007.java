import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		int a,b,c,d;
		Scanner entrada = new Scanner (System.in);
		a = entrada.nextInt();
		b = entrada.nextInt();
		c = entrada.nextInt();
		d = entrada.nextInt();
		System.out.printf("DIFERENCA = %d\n", ((a * b) - (c * d)));
	}
}