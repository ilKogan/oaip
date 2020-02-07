#include <iomanip>
#include <iostream>
#include "ConsoleScreenInfo.h"

#define SPACE ' '


void DrawTriangle(int size, char symbol, bool useIndent) {


	int pattern;
	int indent;

	if (useIndent) {
		indent = floor(30 * ConsoleScreenInfo().x / 100);
		size = floor(75 * ConsoleScreenInfo().y / 100);
	} else {
		indent = 0;
	}

	for (int s = size - 1, pattern = -1; s > 0; s--, pattern += 2) {

		std::cout << std::setw(indent) << std::setfill(SPACE) << SPACE;
		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE;
		std::cout << std::setw(pattern) << std::setfill(symbol) << symbol;
		std::cout << std::setw(size) << std::setfill(SPACE) << SPACE << std::endl;

		size -= 1;
	}
}


