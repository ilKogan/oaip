#include <iostream>
#include <iomanip>
#include "headers/ConsoleScreenInfo.h"

#define SPACE ' '

void Task5_1() {
	printf("\nTask 5.1\n");
	printf("\nThis program draws a triangle in center of console window\n");

	char ch;
	int pattern;
	int size;
	int indent;

	std::cout << "Enter char\n";
	std::cin >> ch;
	std::cout << std::endl;

	indent = floor(30 * ConsoleScreenInfo().x / 100);
	size = floor(75 * ConsoleScreenInfo().y / 100);


	for (int s = size - 1, pattern = -1; s > 0; s--, pattern += 2) {

		std::cout << std::setw(indent) << std::setfill(SPACE) << SPACE;
		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE;
		std::cout << std::setw(pattern) << std::setfill(ch) << ch;
		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE << std::endl;

		size -= 1;
	}

	std::cout << "Console Window\n Weight:" << ConsoleScreenInfo().x << std::endl;
	std::cout << "Height:" << ConsoleScreenInfo().y << std::endl;
}