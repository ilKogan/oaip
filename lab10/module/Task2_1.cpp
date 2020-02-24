#include <iostream> 
#include <new>


//bool checkEvenAndOdd(int i) {
//		return i % 2 == 0 ? true : false;	
//}
//
//int getSizeArray(int* array[]) {
//	return sizeof(*array) / sizeof(*array[0]);
//}

//int getNumberToNumbers(int* numbers[]) {
//	int size = getSizeArray(*numbers[]);
//	int count;
//	if (size != 0) {
//		for (int i = 0; i <= size - 1; i++) {
//			if (*numbers[i] != 0) {
//				count++;
//			}
//			else {
//				return count;
//			}
//
//		}
//	}
//}

int fillNumbers(int *(&array)) {
	int size = 0;
	std::cin >> size;
	array = new int[size];
	 
		for (int i = 0; i <= size - 1; i++) {
			array[i] = i;
		}

		return size;
}

//void cleanArray(int* numbers[]) {
//	int size = getSizeArray(numbers);
//
//	if (size != 0) {
//		for (int i = 0; i <= size - 1; i++) {
//			*numbers[i] = 0;
//		}
//	}
//}
//
//void copyEvenAndOddElements(int *numbers[], int *evenNumbers[], int* oddNumbers[]) {
//	int size = getSizeArray(evenNumbers);
//
//	if (size != 0) {
//		for (int i = 0; i <= size - 1; i++) {
//			if (checkEvenAndOdd(i)) 
//			{
//			 *evenNumbers[i] = *numbers[i];
//			}
//			else {
//				*oddNumbers[i] = *numbers[i];
//			}
//		}
//	}
//}






void Task2_1() {

	int *numbers = NULL;
	int num = 0;
	//numbers = &num;
	int size = fillNumbers(numbers);

	for (int i = 0; i <= size - 1; i++) {
		std::cout << numbers[i] << std::endl;
	}



}