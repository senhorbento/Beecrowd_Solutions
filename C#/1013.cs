using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double pri, seg, ter, resultado;
            string[] vet = Console.ReadLine().Split(' ');
            pri = Int32.Parse(vet[0]);
            seg = Int32.Parse(vet[1]);
            ter = Int32.Parse(vet[2]);
            if (pri > seg) resultado = pri;
            else resultado = seg;
            if (ter > resultado) resultado = ter;
            Console.Write(resultado);
            Console.WriteLine(" eh o maior");
        }
    }
}