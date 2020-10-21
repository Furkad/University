using System;

namespace vvp9._1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите номер дня: ");
            int K = Convert.ToInt32(Console.ReadLine());
            int res = K % 7;
            Console.WriteLine($"Результат: {res}");
        }
    }
}
