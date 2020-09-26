#include <iostream>
#include <cmath>
#include <locale.h>

int main() {
	float x;
	double y;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите x для формулы y = 4*(x-3)^6 - 7*(x-3)^3 + 2 ";
	std::cin >> x;
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
	std::cout << "y = " << y;
}

