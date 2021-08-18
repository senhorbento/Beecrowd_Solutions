import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		double a,b;
		Scanner entrada = new Scanner (System.in);
		a = entrada.nextDouble();
		b = entrada.nextDouble();
		System.out.printf("MEDIA = %.5f\n", ((a*3.5)+(b*7.5))/11.0);
	}
}