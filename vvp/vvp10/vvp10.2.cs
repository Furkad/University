using System;

namespace vvp10._2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите числа A, B и C: ");
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            int C = Convert.ToInt32(Console.ReadLine());
            if (A < B & B < C)
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
