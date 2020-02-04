#include <iostream>

void Task1() {
		printf("Task 1\n");
		printf("This program shows the size of an object in byte.");
		printf("To start program, select the type\n\n1.INT\n2.FLOAT\n3.DOUBLE\n4.CHAR\n\n");
	
		int input;
	
		std::cin >> input;
	
		switch (input) {
		case 1:
			std::cout << sizeof(int) << " byte";
			std::cout << std::endl;
			break;
		case 2:
			std::cout << sizeof(float) << " byte";
			std::cout << std::endl;
			break;
		case 3:
			std::cout << sizeof(double) << " byte";
			std::cout << std::endl;
			break;
		case 4:
			std::cout << sizeof(char) << " byte";
			std::cout << std::endl;
			break;
		default:
			break;
		}
	
	}