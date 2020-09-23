#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	float x1, x2, y1, y2, a, b;
	double p, s;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите координаты первой точки: ";
	std::cin >> x1 >> y1;
	std::cout << "Введите координаты второй точки: ";
	std::cin >> x2 >> y2;
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	p = 2 * (a + b);
	s = a * b;
	std::cout << "P = " << p << " S = " << s;
	return 0;
}