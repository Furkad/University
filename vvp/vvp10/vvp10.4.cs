using System;

namespace vvp10._4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите трёхзначное число: ");
            int x = Convert.ToInt16(Console.ReadLine());
            if (((x % 10 < ((x - (x% 10))/10)%10)) & (((x - x % 10) / 10 % 10) < (x - (x% 100))/100))
            {
                Console.WriteLine("True");
            }
            else if (((x % 10 > ((x - (x % 10)) / 10) % 10)) & (((x - x % 10) / 10 % 10) > (x - (x % 100)) / 100))
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
