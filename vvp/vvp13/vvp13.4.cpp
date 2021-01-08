#include <iostream>
#include <locale>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float A, res = 1;
    int N;
    std::cout << "Введите число A и число N: ";
    std::cin >> A >> N;
    int i = 1;
    while(i <= N)
    {
        res += pow(A, i);
        i++;
    }
    std::cout << res;
}

