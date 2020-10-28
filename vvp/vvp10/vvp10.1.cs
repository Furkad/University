using System;

namespace vvp10._1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите числа A и B: ");
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            if (A>2 & B<=3)
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
