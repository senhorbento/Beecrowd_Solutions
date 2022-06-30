using System;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            int total = Int32.Parse(Console.ReadLine());
            int nota = 100;
            int resto = total;
            Console.WriteLine(total);
            for(int i = 0; i < 7 ; i++){
                Console.WriteLine(resto/nota + " nota(s) de R$ " + nota + ",00");
                resto = resto%nota;
                switch (i){
                    case 0: nota = 50; break;
                    case 1: nota = 20; break;
                    case 2: nota = 10; break;
                    case 3: nota =  5; break;
                    case 4: nota =  2; break;
                    case 5: nota =  1; break;
                    default: break;
                }
            }
        }
    }
}