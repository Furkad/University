#include <iostream>
#include <locale.h>

int main(){
    const double pi = 3.14;
    float x;
    double res;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите угол в градусах: ";
    std::cin >> x;
    res = (x / 180) * pi;
    std::cout << "Результат: " << res;
}