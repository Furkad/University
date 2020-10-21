using System;

namespace vvp9._1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите кол-во прошедших секунд: ");
            int N = Convert.ToInt32(Console.ReadLine());
            int res = N % 60;
            Console.WriteLine($"Результат: {res}");
        }
    }
}
