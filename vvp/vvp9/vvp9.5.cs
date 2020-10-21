using System;

namespace vvp9._1
{
    class Program
    {
        static void Main(string[] args)
        {
            int res;
            Console.Write("Введите год: ");
            int age = Convert.ToInt32(Console.ReadLine());
            if (age % 100 > 0)
            {
                res = age / 100 + 1;
            }
            else
            {
                res = age / 100;
            }
            Console.WriteLine($"Результат: {res}");
        }
    }
}
