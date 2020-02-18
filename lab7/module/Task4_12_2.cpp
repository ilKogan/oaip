#include <iostream>

#define T 0.45F

float calculatExpression(float x) {
	return (x + 1) / x;
}

void Task4_12_2() {
	float x,q;
	float sum = 0;
	


	for (int i = 0; i < 5; i++) {
		std::cout << "Write x [" << i << "]\n";
		std::cin >> x;
		sum += calculatExpression(x);
	}
	q = T + sum;
	
	std::cout << "q = " << q << "\n";
}