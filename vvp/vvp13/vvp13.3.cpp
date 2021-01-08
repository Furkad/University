#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, res = 0, count = 1;
    std::cout << "Введите число N: ";
    std::cin >> N;
    while (count <= (2*N - 1))
    {
        res += count;
        count += 2;
        std::cout << res << std::endl;
    }
}
