#include<iostream>
#include<locale>
using namespace std;
void main() {
    setlocale(LC_ALL, "Rus");
    int   n;
    char s;

    cout << "Введите символ направления («n» — север, «w» — запад, «s» — юг, «e» — восток): ";
    cin >> s;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> n;
    cout << "направление - ";
    switch (n) {
    case 1: switch (s) {
    case 'n':
        cout << "З";
        break;
    case 's':
        cout << "В";
        break;
    case 'w':
        cout << "Ю";
        break;
    case 'e':
        cout << "С";
        break;
    } break;
    case -1: switch (s) {
    case 'n':
        cout << "В";
        break;
    case 's':
        cout << "З";
        break;
    case 'w':
        cout << "С";
        break;
    case 'e':
        cout << "Ю";
        break;
    } break;
    case 0: switch (s) {
    case 'n':
        cout << "С";
        break;
    case 's':
        cout << "Ю";
        break;
    case 'w':
        cout << "З";
        break;
    case 'e':
        cout << "В";
        break;
    } break;

    }
}