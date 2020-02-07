#include <iostream>


#define EQUATION_1(a) 2 * pow(a, 2)
#define EQUATION_2(a,b) a + pow(b, (float)1 / 3)
void Task2() {
	float z, y,x = 3;
	while (x < 4.1) {
		z = EQUATION_1(x);
		y = EQUATION_2(z,x);
		std::cout << "x=" << x << "\t\n";
		std::cout << "y=" << y << "\t\n";
		x = x + 0.1;
	}
}
#undef EQUATION_1
#undef EQUATION_2