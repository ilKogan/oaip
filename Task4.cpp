#include <iostream>

void Task4() {
	printf("Task 4\n");
	char name[60];
	puts("What is your name?\n");
	std::cin >> name;
	printf("\nHello, %s ", &name);
	std::cout << std::endl;
}