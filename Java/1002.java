import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		double a;
		Scanner entrada = new Scanner (System.in);
		a = entrada.nextDouble();
		System.out.printf("A=%.4f\n", 3.14159*(a*a));
	}
}