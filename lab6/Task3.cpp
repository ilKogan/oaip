#include <iostream>


#define EQUATION_1(a) 2 * pow(a, 2)
#define EQUATION_2(a,b) a + pow(b, (float)1 / 3)

void Task3() {
	float z, y, x = 3;

	do {
		z = EQUATION_1(x);
		y = EQUATION_2(z, x);
		std::cout << "x=" << x << "\t\n";
		std::cout << "y=" << y << "\t\n";
		x = x + 0.1F;
	} while (x < 4.1F);
}

#undef EQUATION_1
#undef EQUATION_2
