using System;
					
public class Program
{
	public static void Main()
	{
		int A, B, C, D, E;
		A = int.Parse(Console.ReadLine());
		B = int.Parse(Console.ReadLine());
		C = int.Parse(Console.ReadLine());
		D = int.Parse(Console.ReadLine());
		E = (A * B - C * D);
		Console.WriteLine("DIFERENCA = " + E);
	}
}