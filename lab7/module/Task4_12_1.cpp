#include <iostream>
#include <vector>
#include <algorithm>

bool comp(float a, float b) {
	return (a < b);
}

float powThree(float x) {
	return x += pow(x, 3);
}

float maxNum(std::vector <float> t, bool condition) {
	
	return  *std::max_element(t.begin(), t.end(), comp);
}

void Task4_12_1() {
	float z,y, x;
	std::vector <float> t(5);

	


		for (int i = 0; i < 5; i++) {
			std::cout << "Write x\n";
			std::cin >> x;
			std::cout << "Write t [" << i << "]\n";
			std::cin >> t[i];
			x = powThree(x);
			y = t[i] * x;
		}
		z = maxNum(t, comp);
		std::cout << "\ny = " << y;
		std::cout << "\nx = " << x;
		std::cout << "\nz = " << z<<std::endl;
}