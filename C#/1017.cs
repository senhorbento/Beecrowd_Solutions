using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            int tempo = Int32.Parse(Console.ReadLine());
            int velocidade = Int32.Parse(Console.ReadLine());
            double gasto = (tempo * velocidade) / 12.0;
            Console.WriteLine(string.Format("{0:0.000}",gasto));
        }
    }
}