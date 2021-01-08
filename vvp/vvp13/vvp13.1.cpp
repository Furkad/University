#include <iostream>
#include <iomanip>
#include <locale>

void main()
{
	setlocale(LC_ALL, "Russian");
	double cost;
	std::cout << "Введите цену за 1 кг конфет: ";
	std::cin >> cost;
	std::fixed;
	double i = 0.1;
	while (i <= 1)
	{
		std::cout << "Цена за " << std::setprecision(4) << i << "кг конфет равна " << i * cost << std::endl;
		i += 0.1;
	}
}