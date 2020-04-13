#include <iostream>
#include <iomanip>



using namespace std;

enum mode {
	EVEN,
	ODD
};
void arrFill(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		if (arr[i] % 3 == 0) {
			arr[i] = -arr[i];
		}
	}
}//filling an array with random numbers(including negative ones)
void arr2DFill(int** arr, int size) {
	int i = 0;
	for (i; i < size; i++) {
		arr[i] = new int[size];
		for (int j = 0; j < size; ++j) {
			arr[i][j] = rand() % 100;
		}
	}
}
void arr2DClean(int** arr, int size) {
	int i = 0;
	for (i; i < size; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

int greatherElementInArr(int* arr, int size) {
	int greatherElement = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > greatherElement) {
			greatherElement = arr[i];
		}
	}
	return greatherElement;
}//finding the largest element in a rows
int lessElementInArr(int* arr, int size) {
	int lessElement = greatherElementInArr(arr, size);
	for (int i = 0; i < size; i++) {
		if (arr[i] < lessElement) {
			lessElement = arr[i];
		}
	}
	return lessElement;
}//finding the smallest element in a rows



int arrElementsPositiveSum(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
		}
	}
	return sum;
}//returns the sum of positive elements
int arrElementsNegativMult(int* arr, int size) {
	int mult = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			mult *= arr[i];
		} else {
			mult = 0;
		}
	}
	return mult;
}//returns the product of negative elements


int arr2DSumElementsInRows(int** arr, int size, mode mod) {
	int sum = 0;
	bool modtemp;
	for (int** ptr = arr, index = 0; ptr != arr + size; ++ptr, index++) {
		modtemp = index % 2 == 0;

		switch (mod) {
		case EVEN:
			if (modtemp) {
				sum += greatherElementInArr(*ptr, size);
			}
			break;
		case ODD:
			if (!modtemp) {
				sum += lessElementInArr(*ptr, size);
			}
			break;
		default: cout << "argument error";
			break;
		}
	}
	return sum;
}


void arr2DCoincidesRowsAndColumns(int** arr,int* arr2,int size) {
	int tmp = 0;
	int index = 0;
	for (int i = 0; i < size;i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				arr2[index] = arr[i][j];
				index++;
			}
		}
	}
}

void Task3() {
	//3.1 Task
	int* ptrArrA;
	int sizeA;

	int positiveSum;
	int negativeMult;
	//3.2 Task
	int** ptrArrB;
	int sizeB = 4;

	int sumlessElementsInOddRows;
	int sumElementsInEvenRows;




	//3.1 Task

	cin >> sizeA;
	ptrArrA = new int[sizeA];
	arrFill(ptrArrA, sizeA);
	positiveSum = arrElementsPositiveSum(ptrArrA, sizeA);
	negativeMult = arrElementsNegativMult(ptrArrA, sizeA);
	delete[] ptrArrA;

	//3.2 Task
	ptrArrB = new int* [sizeB];
	arr2DFill(ptrArrB, sizeB);

	sumlessElementsInOddRows = arr2DSumElementsInRows(ptrArrB, sizeB, ODD);
	sumElementsInEvenRows = arr2DSumElementsInRows(ptrArrB, sizeB, EVEN);

	arr2DClean(ptrArrB, sizeB);

	//11.2
	int** ptrArrE;
	int* ptrArrEAnswer;
	int sizeE = 4;

	ptrArrE = new int* [sizeE];
	ptrArrEAnswer = new int [sizeE];

	arr2DFill(ptrArrE,sizeE);
	arr2DCoincidesRowsAndColumns(ptrArrE, ptrArrEAnswer, sizeE);

	
	
	

}



