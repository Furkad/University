#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{
	float a1, a2, b1, b2, c1, c2, x, y, d;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите коэффиценты a1, b1, c1: ";
	std::cin >> a1 >> b1 >> c1;
	std::cout << "Введите коэффиценты a2, b2, c2: ";
	std::cin >> a2 >> b2 >> c2;
	d = a1 * b2 - a2 * b1;
	if (d != 0)
	{
		x = (c1 * b2 - c2 * b1) / d;
		y = (a1 * c2 - a2 * c1) / d;
		std::cout << "x= " << x << " y=" << y;
	}
	else 
	{
		std::cout << " a1*b2 - a2*b1 = 0";
	}
}