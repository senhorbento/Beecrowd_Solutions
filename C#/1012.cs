using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double pri, seg, ter, resultado;
            string[] vet = Console.ReadLine().Split(' ');
            pri = Double.Parse(vet[0]);
            seg = Double.Parse(vet[1]);
            ter = Double.Parse(vet[2]);
            resultado = pri * ter /2;
            Console.WriteLine("TRIANGULO: "+ string.Format("{0:0.000}", resultado));
            resultado = 3.14159 * ter * ter; 
            Console.WriteLine("CIRCULO: "+ string.Format("{0:0.000}", resultado));
            resultado = (pri+seg) * ter/2;
            Console.WriteLine("TRAPEZIO: "+ string.Format("{0:0.000}", resultado));
            resultado = seg * seg; 
            Console.WriteLine("QUADRADO: "+ string.Format("{0:0.000}", resultado));
            resultado = pri * seg; 
            Console.WriteLine("RETANGULO: "+ string.Format("{0:0.000}", resultado));
        }
    }
}