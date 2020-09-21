#include <iostream>
#include <math.h>

int main() {
	double x1 = 1.5, y1 = -0.75, x2 = 12, y2 = 3.85, res;
	res = sqrt(pow((y2 - y1),2) + pow((x2 - x1),2));
	std::cout << res;
	return 0;
}