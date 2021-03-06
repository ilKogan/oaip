#include <iostream>



float calculateExpressionOne(float i, float b, float a) {
	float valueA = i * b;
	float valueB = pow(b, 2) * a;

	return sqrt(valueA - valueB);
}
float calculateExpressionTwo(float y, float n, float b) {
	float valueA = y * tan(n / 4);
	float valueB = exp(1 + b);

	return sqrt(valueA - valueB);
}

void Task5() {
	float y, z, a, b, n, i;
	int choice;
	a = 2 * pow(10, -3);
	b = 8, 5;

	std::cout << "-----Menu-----\n";
	std::cout << "choice calculation variant\n";
	std::cout << "1. for()\n2. while\n 3.for(){for()}\n";
	std::cin >> choice;

	switch (choice) {
	case 1:
		for (n = 0; n < 2; n++) {

			std::cout << "\nWrite i \n";

			scanf_s("%f", &i);

			y = calculateExpressionOne(i, b, a);
			z = calculateExpressionTwo(y, n, b);

			std::cout << "\ny = " << y << std::endl;
			std::cout << "\nz = " << z << std::endl;

		}
		break;
	case 2:
		do {
			std::cout << "\nWrite i \n";
			scanf_s("%f", &i);
			std::cout << "\nWrite n \n";
			scanf_s("%f", &n);


			y = calculateExpressionOne(i, b, a);
			z = calculateExpressionTwo(y, n, b);

			std::cout << "\ny = " << y << std::endl;
			std::cout << "\nz = " << z << std::endl;
			i += 0.5;
		} while (i < 3.0);
		break;
	case 3:
		for (i = 1; i < 3; i += 0, 5) {
			for (int n = 2; n < 3; n += 0.5) {
				y = calculateExpressionOne(i, b, a);
				z = calculateExpressionTwo(y, n, b);

				std::cout << "\ny = " << y;
				std::cout << " z = " << z << std::endl;
			}

		}
		break;
	default:
		break;
	}

#undef EQUATION_1
#undef EQUATION_2

}