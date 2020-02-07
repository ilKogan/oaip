#include <iostream>
#include <iomanip>
#include "module/ConsoleScreenInfo.h"
#include "module/DrawTriangle.h"

#define SPACE ' '

void Task5_1() {
	printf("\nTask 5.1\n");
	printf("\nThis program draws a triangle in center of console window\n");

	char ch;
	int sizes;

	std::cout << "Enter char\n";
	std::cin >> ch;
	std::cout << "Enter size\n";
	std::cin >> sizes;
	std::cout << std::endl;

	DrawTriangle(sizes, ch, true);

	std::cout << "Console Window\n Weight:" << ConsoleScreenInfo().x << std::endl;
	std::cout << "Height:" << ConsoleScreenInfo().y << std::endl;
}