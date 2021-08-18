using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] vet = Console.ReadLine().Split(' ');
            double pri = Double.Parse(vet[0]);
            double seg = Double.Parse(vet[1]);
            vet = Console.ReadLine().Split(' ');
            double ter = Double.Parse(vet[0]);
            double qua = Double.Parse(vet[1]);
            double resultado = Math.Sqrt((Math.Pow(ter - pri, 2)) + (Math.Pow(qua - seg, 2)));
            Console.WriteLine(string.Format("{0:0.0000}", resultado));
        }
    }
}