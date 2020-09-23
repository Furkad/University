#include <iostream>
#include <math.h>
#include <locale.h>

int main() {
	float a, b, c;
	double ac, bc, res;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите координаты A, B, C\n";
	std::cin >> a >> b >> c;
	ac = abs(c - a);
	bc = abs(b - a);
	res = ac * bc;
	std::cout << "Произведение равно " << res;
	return 0;
}