#include <iostream>


using namespace std;

#define SPACE ' '
#define DOT '.'

void formatingString(char* arr, int size) {

	for (int i = 0; i < size; i++) {
		if (arr[i] == DOT && arr[i + 1] == SPACE) {
			arr[i + 2] = toupper(arr[i + 2]);
		}
	}
}


void fillInput2DArr(int** input, int size1, int size2) {

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cin >> input[i][j];
		}
	}
}

int** create2DArr(int size, int size2) {
	int** ptrArr = new int* [size];
	for (int i = 0; i < size; i++) {
		ptrArr[i] = new int[size2];
	}
	return ptrArr;
}

void delete2DArr(int** arr, int size2) {
	for (int i = 0; i < size2; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void replacePositive2DArr(int** arr, int size1, int size2) {
	for (int i = 0; i < size1; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < size2; j++) {
				if (arr[i][j] < 0) {
					arr[i][j] = ~arr[i][j]++;
				}
			}
		}
	}
}

void Task1() {
	//Task 1.1
	int n = 4;
	int m = 5;
	int** ptrArr = create2DArr(n, m);
	fillInput2DArr(ptrArr, n, m);
	replacePositive2DArr(ptrArr, n, m);

	//Task 1.2
	char string[40] = "write. a program. that converts";
	cout << string << endl;

	formatingString(string, 40);

	cout << string << endl;

}



