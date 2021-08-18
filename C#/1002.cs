using System;
					
public class Program
{
	public static void Main()
	{
		double a, r, pi;
		pi = 3.14159;
		r = double.Parse(Console.ReadLine());
		a = pi * r * r;
		Console.WriteLine("A=" + a.ToString("F4"));
	}
}