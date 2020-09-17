#include <iostream>
using namespace std;

int main()
{
	double a = 12.7, b = -9.99, sum,min,del,umn;
	sum = abs(a) + abs(b);
	min = abs(a) - abs(b);
	del = abs(a) / abs(b);
	umn = abs(a) * abs(b);
	cout << sum << endl << min << endl << del << endl << umn;
	return 0;
}

