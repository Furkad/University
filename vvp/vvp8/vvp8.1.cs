using System;

namespace vvp8._1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите размер файла в байтах: ");
            double file = Convert.ToDouble(Console.ReadLine());
            double kil = file / (double)1024;
            if (kil % 1 == 0)
            { Console.WriteLine(kil); }
            else { Console.WriteLine(kil - kil % 1 + 1); }
        }
    }
}
