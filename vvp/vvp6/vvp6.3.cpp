#include <iostream>
#include <locale.h>

int main() {
    int a = 1, b = 20, c = 300, mem1, mem2;
    setlocale(LC_ALL, "Russian");
    mem1 = c;
    mem2 = b;
    c = a;
    b = mem1;
    a = mem2;
    std::cout << "A = " << a << " B = " << b << " C = " << c;
}