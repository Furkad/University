#include <iostream>
#include <string>
#include <locale>
using namespace std;

void main()
{
	int day, month;
	string answer;
	setlocale(LC_ALL, "Russian");
	cout << "Введите день и месяц (номера): ";
	cin >> day >> month;

	switch (day)
	{
	case 1: answer = "первое"; break;
	case 2: answer = "второе"; break;
	case 3: answer = "третье"; break;
	case 4: answer = "четвёртое"; break;
	case 5: answer = "пятое"; break;
	case 6: answer = "шестое"; break;
	case 7: answer = "седьмое"; break;
	case 8: answer = "восьмое"; break;
	case 9: answer = "девятое"; break;
	case 10: answer = "десятое"; break;
	case 11: answer = "одиннадцатое"; break;
	case 12: answer = "двенадцатое"; break;
	case 13: answer = "тринадцатое"; break;
	case 14: answer = "четырнадцатое"; break;
	case 15: answer = "пятнадцатое"; break;
	case 16: answer = "шестнадцатое"; break;
	case 17: answer = "семнадцатое"; break;
	case 18: answer = "восемнадцатое"; break;
	case 19: answer = "девятнадцатоеое"; break;
	case 20: answer = "двадцатое"; break;
	case 21: answer = "двадцать первое"; break;
	case 22: answer = "двадцать второе"; break;
	case 23: answer = "двадцать третье"; break;
	case 24: answer = "двадцать четвёртое"; break;
	case 25: answer = "двадцать пятое"; break;
	case 26: answer = "двадцать шестое"; break;
	case 27: answer = "двадцать седьмое"; break;
	case 28: answer = "двадцать восьмое"; break;
	case 29: answer = "двадцать девятое"; break;
	case 30: answer = "тридцатое"; break;
	case 31: answer = "тридцать первое"; break;
	}

	switch (month)
	{
	case 1:answer += " января"; break;
	case 2:answer += " февраля"; break;
	case 3:answer += " марта"; break;
	case 4:answer += " апреля"; break;
	case 5:answer += " мая"; break;
	case 6:answer += " июня"; break;
	case 7:answer += " июля"; break;
	case 8:answer += " августа"; break;
	case 9:answer += " сентября"; break;
	case 10:answer += " октября"; break;
	case 11:answer += " ноября"; break;
	case 12:answer += " декабря"; break;
	}

	cout << answer;
}