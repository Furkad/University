#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	int a, help1, help2, res;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число А";
	std::cin >> a;
	help1 = pow(a, 7);
	help2 = pow(a, 3);
	res = help1 * help2 * a * a * a * a * a;
	std::cout << "Результат: " << res;
}