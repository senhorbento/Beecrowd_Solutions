import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        int a,b,c,maior;
        Scanner entrada = new Scanner (System.in);
        a = entrada.nextInt();
        b = entrada.nextInt();
        c = entrada.nextInt();
        maior = (a + b + Math.abs(a - b)) / 2;
        if (maior > c) System.out.printf ("%d eh o maior\n", maior);
        else System.out.printf ("%d eh o maior\n", c);
    }
 
}
