using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double total=0, preco;
            int qtd;
            for (int i=0;i<2;i++)
            {
                string[] vet = Console.ReadLine().Split(' ');
                qtd = Int32.Parse(vet[1]);
                preco = Double.Parse(vet[2]);
                total += qtd * preco;   
            }
            Console.WriteLine("VALOR A PAGAR: R$ "+ string.Format("{0:0.00}", total));
        }
    }
}