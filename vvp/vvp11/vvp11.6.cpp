#include <iostream>
#include <locale.h>

void main()
{

	int num, kol = 0;
	bool div = false;

	setlocale(LC_ALL, "Russian");
	std:: cin >> num;

	if (num % 2 == 0)
	{
		div = true;
	}

	while (kol < 4)
	{
		if (num != 0)
		{
			kol++;
			num = (num - num % 10) / 10;
		}
		else
		{
			break;
		}
	}


	switch (kol)
	{

	case 1:
		if (div)
		{
			std::cout << "Однозначное чётное число";
		}
		else
		{
			std::cout << "Однозначное нечётное число";
		}
		break;


	case 2:
		if (div)
		{
			std::cout << "Двузначное чётное число";
		}
		else
		{
			std::cout << "Двузначное нечётное число";
		}
		break;


	case 3:
		if (div)
		{
			std::cout << "Трёхзначное чётное число";
		}
		else
		{
			std::cout << "Трёхзначное нечётное число";
		}
		break;

	}
}