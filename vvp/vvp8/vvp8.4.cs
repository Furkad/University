using System;

namespace vvp8._4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите число: ");
            int num = Convert.ToInt32(Console.ReadLine());
            int res = (num % 10 * 10) +num/10;
            Console.WriteLine(res);
        }
    }
}
