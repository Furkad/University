using System;

namespace vvp10._4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите четырёхзначное число: ");
            int x = Convert.ToInt16(Console.ReadLine());
            if (((x - (x % 100)) / 1000) == x%10  & (((x - (x % 100)) / 100) % 10) == (((x - (x % 10)) / 10) % 10))
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
