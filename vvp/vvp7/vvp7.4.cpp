#include <iostream>
#include <locale.h>

int main()
{
	float v1, v2, s, res, t;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите скорость первого и второго автомобиля, а так же расстояние между ними: ";
	std::cin >> v1 >> v2 >> s;
	std::cout << "Введите время поездки: ";
	std::cin >> t;
	res = (v1 + v2) * t + s;
	std::cout << "Конечное расстояние: " << res;

}