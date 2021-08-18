using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            int pri = Int32.Parse(Console.ReadLine());
            double seg = Double.Parse(Console.ReadLine());
            double resultado = pri/seg;
            Console.Write(string.Format("{0:0.000}", resultado));
            Console.WriteLine(" km/l");
        }
    }
}