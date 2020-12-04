#include <iostream>
#include <locale.h>

void main()
{

	float x, y;

	std::cin >> x >> y;

	setlocale(LC_ALL, "Russian");

	if (x > 0 && y > 0)
	{
		std::cout << "Точка находится в 1-ой четверти";
	}
	else if (x < 0 && y > 0)
	{
		std::cout << "Точка находится во 2-ой четверти";
	}
	else if (x < 0 && y < 0)
	{
		std::cout << "Точка находится в 3-ей четверти";
	}
	else
	{
		std::cout << "Точка находится в 4-ой четверти";
	}

}