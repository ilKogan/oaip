#include <iostream>

#define EPSILON 0.0001

double func(double x) {
	return pow(x, 3) + x - 3;
}

double rootEquation(double a, double b) {
	double c;
	while (b - a > EPSILON) {
		c = (a + b) / 2;
		if (func(b) * func(c) < 0)
			return a = c;
		else
			return b = c;
	}
}

void Task6() {
	double a, b;
 
	std::cin >> a >> b;

	rootEquation(a, b);
	
	std::cout << (a + b) / 2 << std::endl;
}