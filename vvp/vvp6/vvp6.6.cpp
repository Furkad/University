#include <cmath>
#include <locale.h>
#include <iostream>

int main() {
	int a, help, res;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число А";
	std::cin >> a;
	help = pow(a, 5);
	res = help * a * a * a;
	std::cout << "Результат: " << res;
}