#include <iostream>
#include <cmath>
#include <locale.h>
 
int main() {
	float x;
	double y;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите x для формулы y = 3x^6 - 6x^2 - 7 ";
	std::cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	std::cout << "y = " << y;
}