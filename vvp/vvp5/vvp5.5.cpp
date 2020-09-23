#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() {
	float x1, y1, x2, y2, x3, y3;
	double a, b, c, p, s;
	setlocale(LC_ALL, "Russian");
	cout <<"Введите координаты первой вершины: ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй вершины: ";
	cin >> x2 >> y2;
	cout << "Введите координаты третьей вершины: ";
	cin >> x3 >> y3;
	a = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	b = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
	c = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Периметр равен: " << p * 2 << " Площадь равна: " << s;
	return 0;
}