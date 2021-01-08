#include <iostream>
#include <locale>

void main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	double mult = 1.1;
	float res = 1;
	std::cout << "Введите значение N: ";
	std::cin >> N;
	while (N > 0)
	{
		res *= mult;
		mult += 0.1;
		N--;
	}
	std::cout << res;
}