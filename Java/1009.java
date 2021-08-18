import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		String a;
		double b,c;
		Scanner entrada = new Scanner (System.in);
		a = entrada.next();
		b = entrada.nextDouble();
		c = entrada.nextDouble();
		System.out.printf("TOTAL = R$ %.2f\n", b+(c*0.15));
	}
}