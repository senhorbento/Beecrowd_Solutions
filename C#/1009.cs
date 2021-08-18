using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double A, B;
            Console.ReadLine();
            A = double.Parse(Console.ReadLine());
            B = double.Parse(Console.ReadLine());
            A = B * 15 / 100 + A;
            Console.WriteLine("TOTAL = R$ " + A.ToString("F2"));
        }
    }
}
