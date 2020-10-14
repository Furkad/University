using System;

namespace vvp8._2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите A: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите B: ");
            int B = Convert.ToInt32(Console.ReadLine());
            double res = (double)A / B;
            if (res % 1 == 0)
            { Console.WriteLine(res); }
            else { Console.WriteLine(res - res % 1); }
        }
    }
}