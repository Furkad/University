#include <iostream>
#include <string>
#include <locale>
using namespace std;

void main()
{
	int day, month;
	string answer;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���� � ����� (������): ";
	cin >> day >> month;

	switch (day)
	{
	case 1: answer = "������"; break;
	case 2: answer = "������"; break;
	case 3: answer = "������"; break;
	case 4: answer = "��������"; break;
	case 5: answer = "�����"; break;
	case 6: answer = "������"; break;
	case 7: answer = "�������"; break;
	case 8: answer = "�������"; break;
	case 9: answer = "�������"; break;
	case 10: answer = "�������"; break;
	case 11: answer = "������������"; break;
	case 12: answer = "�����������"; break;
	case 13: answer = "�����������"; break;
	case 14: answer = "�������������"; break;
	case 15: answer = "�����������"; break;
	case 16: answer = "������������"; break;
	case 17: answer = "�����������"; break;
	case 18: answer = "�������������"; break;
	case 19: answer = "���������������"; break;
	case 20: answer = "���������"; break;
	case 21: answer = "�������� ������"; break;
	case 22: answer = "�������� ������"; break;
	case 23: answer = "�������� ������"; break;
	case 24: answer = "�������� ��������"; break;
	case 25: answer = "�������� �����"; break;
	case 26: answer = "�������� ������"; break;
	case 27: answer = "�������� �������"; break;
	case 28: answer = "�������� �������"; break;
	case 29: answer = "�������� �������"; break;
	case 30: answer = "���������"; break;
	case 31: answer = "�������� ������"; break;
	}

	switch (month)
	{
	case 1:answer += " ������"; break;
	case 2:answer += " �������"; break;
	case 3:answer += " �����"; break;
	case 4:answer += " ������"; break;
	case 5:answer += " ���"; break;
	case 6:answer += " ����"; break;
	case 7:answer += " ����"; break;
	case 8:answer += " �������"; break;
	case 9:answer += " ��������"; break;
	case 10:answer += " �������"; break;
	case 11:answer += " ������"; break;
	case 12:answer += " �������"; break;
	}

	cout << answer;
}