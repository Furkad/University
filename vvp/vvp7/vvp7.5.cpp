#include <iostream>
#include <locale.h>

int main()
{
	float a, b, x;
	setlocale(LC_ALL, "Russian");
	std::cout << "Уравнение вида a*x+b=0, введите a и b: ";
	std::cin >> a >> b;
	x = -b / a;
	std::cout << "x = " << x;
}