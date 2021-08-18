import java.util.*;
import java.lang.*;
import java.io.*;

class Main{
	public static void main (String[] args){
		int a;
		Scanner entrada = new Scanner (System.in);
    	a = entrada.nextInt();
		System.out.printf("VOLUME = %.3f\n", (4/3.0) * 3.14159 * Math.pow(a,3));
	}
}