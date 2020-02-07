#include"lab4.h"
#include "module/DrawFromFile.h"

#define NUM_LAB "4"
#define NUM_TASK_1 "1"
#define NUM_TASK_2 "2"
#define NUM_TASK_3 "3"
#define NUM_TASK_4 "4"
#define NUM_TASK_5 "5.1"
#define NUM_TASK_6 "5.2"
#define NUM_TASK_7 "6.1"
#define NUM_TASK_8 "6.2"
#define TIRE "........"
 
int main() 
{
	

	int choice;
	std::cout << "	------CHANGE TASK LAB "<< NUM_LAB <<"------"<< std::endl;
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

	switch (choice) 
	{
	case 1: Task1();
		break;
	case 2: Task2();
		break;
	case 3: Task3();
		break;
	case 4: Task4();
		break;
	case 5:	Task5_1();
		break;
	case 6: Task5_2();
		break;
	case 7: Task6_1();
		break;
	case 8: Task6_2();
		break;
	default: system("exit");
		break;
	}

	main();

}