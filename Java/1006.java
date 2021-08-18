import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		double a,b,c;
		Scanner entrada = new Scanner (System.in);
		a = entrada.nextDouble();
		b = entrada.nextDouble();
		c = entrada.nextDouble();
		System.out.printf("MEDIA = %.1f\n", ((a*2)+(b*3)+(c*5))/10.0);
	}
}