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

void Task1() {
	float z, y, x;

	for (int n = 0; n < 4; n++) {

		z = calculateExpressionOne(x);
		y = calculateExpressionTwo(z, x);

		printf("\nx = %5.2f\t", x);
		printf("\ny = %5.2f\t", y);

	}

}
