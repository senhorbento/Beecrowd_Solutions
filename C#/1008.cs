using System;
					
public class Program
{
	public static void Main()
	{
		int A, B;
		double C, salary;
		A = int.Parse(Console.ReadLine());
		B = int.Parse(Console.ReadLine());
		C = double.Parse(Console.ReadLine());
		salary = B * C;
		Console.WriteLine("NUMBER = " + A);
		Console.WriteLine("SALARY = U$ " + salary.ToString("F2"));
	}
}