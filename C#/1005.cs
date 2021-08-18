using System;
					
public class Program
{
	public static void Main()
	{
		double A, B, c;
		A = double.Parse(Console.ReadLine());
		B = double.Parse(Console.ReadLine());
		c = ((3.5 * A) + (7.5 * B)) / 11;
		Console.WriteLine("MEDIA = " + c.ToString("F5"));
	}
}