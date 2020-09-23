#include <iostream>
#include <locale.h>
#include <math.h>

int main() {
	float a, b, c;
	double ac, bc, sum;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите координаты точек A, B, C\n";
	std::cin >> a >> b >> c;
	ac = abs(c - a);
	bc = abs(b - a);
	sum = ac + bc;
	std::cout << ac << " " << bc << " "  << sum;
	return 0;
}
