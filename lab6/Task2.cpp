#include <iostream>



#define EQUATION_1(a) 2 * pow(a, 2)
#define EQUATION_2(a,b) a + pow(b, (float)1 / 3)

float calculateExpressionOne(float x) {
	float powA = pow(x, 2);
	return 2 * powA;
}
float calculateExpressionTwo(float z ,float x) {
	float sd = 1.0F / 3.0F;
	float powB = pow(x, sd);

	return z + powB;
}
void Task2() {
	float z, y,x = 3;
	while (x < 4.1) {
		z = calculateExpressionTwo(x);
		y = calculateExpressionOne(z,x);
		std::cout << "x=" << x << "\t\n";
		std::cout << "y=" << y << "\t\n";
		x += 0.1;
	}
}
