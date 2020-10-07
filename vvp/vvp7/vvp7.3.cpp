#include <iostream>
#include <locale.h>

int main()
{
	float x, a, y, kg1, res;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите кол-во кг и цену конфет за введённое кол-во кг: ";
	std::cin >> x >> a;
	std::cout << "Введите кол-во кг для конечного подсчёта :";
	std::cin >> y;
	kg1 = a / x;
	res = kg1 * y;
	std::cout << "1 кг стоит: " << kg1 << "; " << y << " килограмм конфет стоит: " << res;
}