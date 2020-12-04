#include <iostream>
#include <locale.h>

void main()
{

	int num;
	bool div = false, pos = false;

	setlocale(LC_ALL, "Russian");

	std::cin >> num;

	if (num == 0)
	{
		std::cout << "Нулевое число";
	}
	else
	{
		if (num % 2 == 0)
		{
			div = true;
		}
		if (num > 0)
		{
			pos = true;
		}

		if (div && pos)
		{
			std::cout << "Положительное чётное число";
		}
		else if (div == true && pos == false)
		{
			std::cout << "Отрицательное чётное число";
		}
		else if (div == false && pos == true)
		{
			std::cout << "Положительное нечётное число";
		}
		else
		{
			std::cout << "Отрицательное нечётное число";
		}
	}

}