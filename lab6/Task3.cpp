#include <iostream>


float calculateExpressionOne(float x) {
	float powA = pow(x, 2);
	return 2 * powA;
}
float calculateExpressionTwo(float z, float x) {
	float sd = 1.0F / 3.0F;
	float powB = pow(x, sd);

	return z + powB;
}
void Task3() {
	float z, y, x = 3;

	do {
		z = calculateExpressionOne(x);
		y = calculateExpressionTwo(z, x);
		std::cout << "x=" << x << "\t\n";
		std::cout << "y=" << y << "\t\n";
		x += 0.1F;
	} while (x < 4.1F);
}

#undef EQUATION_1
#undef EQUATION_2
