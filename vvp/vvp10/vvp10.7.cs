using System;

namespace vvp10._7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите a, b и c (стороны треугольника): ");
            int a = Convert.ToInt16(Console.ReadLine());
            int b = Convert.ToInt16(Console.ReadLine());
            int c = Convert.ToInt16(Console.ReadLine());
            if ((a+b>c) & (a+c>b) & (b+c>a))
            {
                Console.WriteLine("True");
            }
            else
            {
                Console.WriteLine("False");
            }
        }
    }
}
