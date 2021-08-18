import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        double a,b,c,pi;
        pi = 3.14159;
        Scanner entrada = new Scanner (System.in);
        a = entrada.nextDouble();
        b = entrada.nextDouble();
        c = entrada.nextDouble();
        System.out.printf("TRIANGULO: %.3f\n", a  * c  / 2.0);
        System.out.printf("CIRCULO: %.3f\n", pi * (c * c));
        System.out.printf("TRAPEZIO: %.3f\n", (a + b) * c / 2.0);
        System.out.printf("QUADRADO: %.3f\n", b * b);
        System.out.printf("RETANGULO: %.3f\n", a * b);
    }
 
}
