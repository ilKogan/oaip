#include <iostream>

#define sd 1.0F/3.0F 
#define EQUATION_1(a) 2 * pow(a, 2)
#define EQUATION_2(a,b) a + pow(b, sd)

void Task1() {
	float z, y, x;

	for (int n = 0; n < 4; n++) {

		printf("\nWrite x \n");

		scanf_s("%f", &x);
		z = EQUATION_1(x);
		y = EQUATION_2(z,x);

		printf("\nx = %5.2f\t", x);
		printf("\ny = %5.2f\t", y);

	}

}
#undef sd
#undef EQUATION_1
#undef EQUATION_2