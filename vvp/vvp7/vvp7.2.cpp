#include <iostream>
#include <locale.h>

int main() {
	const double pi = 3.14;
	double x, res;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите угол в радианах: ";
	std::cin >> x;
	res = (180 / pi) * x;
	std::cout << "Результат: " << res;
}