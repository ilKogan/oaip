#include <iostream>
#include <iomanip>
#include "module/ConsoleScreenInfo.h"
#include "module/DrawFromFile.h"


#define SPACE ' '
void Task6_1() {
	printf("\nTask 6.1\n");
	printf("\nDraw Star\n");

	char pattern;
	std::cout << "Enter char\n";
	std::cin >> pattern;

	DrawFromFile("C:\\oaip\\lab04\\module\\matrix.txt", pattern, SPACE);

}