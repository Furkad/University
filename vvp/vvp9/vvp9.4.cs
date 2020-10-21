using System;

namespace vvp9._1
{
    class Program
    {
        static void Main(string[] args)
        {
            double kol, left;
            Console.Write("Введите A: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите B: ");
            int B = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите C: ");
            int C = Convert.ToInt32(Console.ReadLine());
            kol = (int)((A * B) / Math.Pow(C,2));
            left = (A * B) - Math.Pow(C, 2) * kol;
            Console.WriteLine($"Квадратов со стороной C: {kol}, остаток: {left}");
        }
    }
}
