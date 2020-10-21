using System;

namespace vvp9._1
{
    class Program
    {
        static void Main(string[] args)
        {
            int res;
            Console.Write("Введите номер дня: ");
            int K = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите N: ");
            int N = Convert.ToInt32(Console.ReadLine());
            if (K < 7)
            {
                res = (K % 7) + 1;
            }
            else
            {
                res = ((K - N) % 7) + 1;
            }
            Console.WriteLine($"Результат: {res}");
        }
    }
}
