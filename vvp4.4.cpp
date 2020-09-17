#include <iostream>
using namespace std;

int main() {
	float a = 14, b = -1.8;
	double sum, min, del, umn;
	sum = a * a + b * b;
	min = a * a - b * b;
	del = (a * a) / (b * b);
	umn = (a * a) * (b * b);
	cout << sum << endl;
	cout << min << endl;
	cout << del << endl;
	cout << umn << endl;
	return 0;
}