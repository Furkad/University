#include <math.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float A;
    int N;
    std::cout << "Введите число A и число N: ";
    std::cin >> A >> N;
    int i = 1, res = 1, mult = -1;
    while (i <= N)
    {
        res += mult * pow(A, i);
        mult *= -1;
        i++;
    }
    std::cout << res;
}