import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        int a;
        double b;
        Scanner entrada = new Scanner (System.in);
        a = entrada.nextInt();
        b = entrada.nextDouble();
        System.out.printf ("%.3f km/l\n", a/b);
    }
 
}
