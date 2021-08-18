import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		int a,b;
		double d;
		Scanner entrada = new Scanner (System.in);
		a = entrada.nextInt();
		b = entrada.nextInt();
		d = entrada.nextDouble();
		System.out.printf("NUMBER = %d\n", a);
		System.out.printf("SALARY = U$ %.2f\n", b*d);
	}
}