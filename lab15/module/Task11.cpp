#include <iostream>

using namespace std;
//Task 11.1
void arrFillBool(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 2;
	}
}

int findLessIndexEqualNull(int* arr, int size) {
	int tmpIndex = size;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0 && i < tmpIndex) {
			tmpIndex = i;
		}
	}
	return tmpIndex;
}



void Task11() {
	//Task 11.1
	int* ptrArrC;
	int sizeC = 6;
	int lessNumber;

	ptrArrC = new int [sizeC];

	arrFillBool(ptrArrC, sizeC);
	
	lessNumber = findLessIndexEqualNull(ptrArrC, sizeC);

	delete[] ptrArrC;
}

