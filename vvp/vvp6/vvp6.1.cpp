#include <iostream>
#include <locale.h>

int main(){
    int a, b, mem;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите переменную A и B\n";
    std::cin >> a >> b;
    mem = a;
    a = b;
    b = mem;
    std::cout << "А = " << a << " B = " << b;
    return 0;
}