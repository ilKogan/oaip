#include <iostream>
#include <iomanip>
#include "module/DrawTriangle.h"


void Task2() {
	printf("\nTask 2\n");
	printf("\nThis program draws a triangle\n");

	char ch;
	int sizes;

	std::cout << "Enter char\n";
	std::cin >> ch;
	std::cout << "Enter size\n";
	std::cin >> sizes;
	std::cout << std::endl;

	DrawTriangle(sizes, ch, false);
}