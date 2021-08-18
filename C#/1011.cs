using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            int ler;
            double qtd;
            ler = Int32.Parse(Console.ReadLine());
            qtd = (4.0/3) * ler * ler * ler * 3.14159;
            Console.WriteLine("VOLUME = "+ string.Format("{0:0.000}", qtd));
        }
    }
}