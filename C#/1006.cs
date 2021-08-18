using System;
					
public class Program
{
	public static void Main()
	{
		double A, B, C, D;
		A = double.Parse(Console.ReadLine());
		B = double.Parse(Console.ReadLine());
		C = double.Parse(Console.ReadLine());
		D = ((2 * A) + (3 * B) + (5 * C)) / 10;
		Console.WriteLine("MEDIA = " + D.ToString("F1"));
	}
}