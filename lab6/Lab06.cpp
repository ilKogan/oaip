﻿#include "Lab6.h"

#define NUM_LAB "6"
#define NUM_TASK_1 "1"
#define NUM_TASK_2 "2"
#define NUM_TASK_3 "3"
#define NUM_TASK_4 "4"
#define NUM_TASK_5 "5"
#define NUM_TASK_6 "6.4"
#define NUM_TASK_7 "6.5"
#define NUM_TASK_8 "---"
#define TIRE "........"

int main() {



	int choice = 0;
	std::cout << "	------CHANGE TASK LAB " << NUM_LAB << "------" << std::endl;
	std::cout << "	1  | " << TIRE << " TASK " << NUM_TASK_1 << "\n";
	std::cout << "	2  | " << TIRE << " TASK " << NUM_TASK_2 << "\n";
	std::cout << "	3  | " << TIRE << " TASK " << NUM_TASK_3 << "\n";
	std::cout << "	4  | " << TIRE << " TASK " << NUM_TASK_4 << "\n";
	std::cout << "	5  | " << TIRE << " TASK " << NUM_TASK_5 << "\n";
	std::cout << "	6  | " << TIRE << " TASK " << NUM_TASK_6 << "\n";
	std::cout << "	7  | " << TIRE << " TASK " << NUM_TASK_7 << "\n";
	std::cout << "	8  | " << TIRE << " TASK " << NUM_TASK_8 << "\n";
	std::cout << "	-----------------------------" << std::endl;

	std::cin >> choice;

	switch (choice) {
	case 0: std::cin >> choice;
		break;
	case 1: Task1();
		break;
	case 2: Task2();
		break;
	case 3: Task3();
		break;
	case 4: Task4();
		break;
	case 5:	Task5();
		break;
	case 6: Task6();
		break;
	case 7: Task7();
		break;
	default:
		break;
	}

	
}


