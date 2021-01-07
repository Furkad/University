#include <iostream>
#include <locale>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
    int year;
    cin >> year;
    cout << "Год ";
    switch (year % 10) {
    case 0:
    case 1:
        cout << "белого(ой) ";
        break;
    case 2:
    case 3:
        cout << "чёрного(ой) ";
        break;
    case 4:
    case 5:
        cout << "зелёного(ой) ";
        break;
    case 6:
    case 7:
        cout << "красного(ой) ";
        break;
    case 8:
    case 9:
        cout << "жёлтого(ой) ";
        break;
    }
    switch ((year + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }
}