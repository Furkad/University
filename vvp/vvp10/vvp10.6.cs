using System;

namespace vvp10._6
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите стороны a, b и c прямоугольного треугольника:");
            int a = Convert.ToInt16(Console.ReadLine());
            int b = Convert.ToInt16(Console.ReadLine());
            int c = Convert.ToInt16(Console.ReadLine());
            if (a * a + b * b == c * c)
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
