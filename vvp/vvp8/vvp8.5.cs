using System;

namespace vvp8._5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите число: ");
            int num = Convert.ToInt32(Console.ReadLine());
            int x = num / 100;
            int res = (num-x*100)*10+x;
            Console.WriteLine(res);
        }
    }
}
