#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "десять учебных заданий";
            break;
        case 11:
            cout << "одинадцать учебных заданий";
            break;
        case 12:
            cout << "двенадцать учебных заданий";
            break;
        case 13:
            cout << "тринадцать учебных заданий";
            break;
        case 14:
            cout << "четырнадцать учебных заданий";
            break;
        case 15:
            cout << "пятнадцать учебных заданий";
            break;
        case 16:
            cout << "шестнадцать учебных заданий";
            break;
        case 17:
            cout << "семнадцать учебных заданий";
            break;
        case 18:
            cout << "восемнадцать учебных заданий";
            break;
        case 19:
            cout << "девятнадцать учебных заданий";
            break;

        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;

        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }
        switch (n % 10) {
        case 0:
            cout << "учебных заданий";
            break;
        case 5:
            cout << "учебных заданий";
            break;
        case 6:
            cout << "учебных заданий";
            break;
        case 7:
            cout << "учебных заданий";
            break;
        case 8:
            cout << "учебных заданий";
            break;
        case 9:
            cout << "учебных заданий";
            break;
        case 1:
            cout << "учебное задание";
            break;
        case 2:
            cout << "учебных задания";
            break;
        case  3:
            cout << "учебных задания";
            break;
        case 4:
            cout << "учебных задания";
            break;
        }
    }
}