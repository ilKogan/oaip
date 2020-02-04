#include <iostream>
#include <iomanip>

#define SPACE ' '

void Task2() {
	printf("\nTask 2\n");
	printf("\nThis program draws a triangle\n");

	char ch;
	int size;
	int pattern;
	std::cout << "Enter char\n";
	std::cin >> ch;
	std::cout << "Enter size\n";
	std::cin >> size;
	std::cout << std::endl;

	for (int s = size - 1, pattern = -1; s > 0; s--, pattern += 2) {

		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE;
		std::cout << std::setw(pattern) << std::setfill(ch) << ch;
		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE << std::endl;

		size -= 1;
	}
}