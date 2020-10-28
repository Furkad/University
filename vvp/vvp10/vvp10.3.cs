using System;

namespace vvp10._3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Проверка числа, является ли оно двухзначным.");
            Console.Write("Введите целое положительное число: ");
            int x = Convert.ToInt16(Console.ReadLine());
            if ((x % 2 == 0) & (x < 100) & (x > 9))
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
