#include <iostream>

using namespace std;

int sumTwoArrAndNum(int* arr1,int sizeArr1,int* arr2,int sizeArr2,int num) {
	int tmpSum = 0;
	int size1 = sizeArr1 - 1;
	int size2 = sizeArr2 - 1;
	int i;
	for (i = 0; i < size1+size2; i++) {

		if (i <= size1 && i <= size2) {
			tmpSum += arr1[i];
			tmpSum += arr2[i];
		} else if (i > size1 && i <= size2) {
			tmpSum += arr2[i];
		} else if (i <= size1 && i > size2) {
			tmpSum += arr1[i];
		}

	}

	return tmpSum + num;

}
void Task2() {

	int S[10] = { 0,4,5,23,12,7,8,68,7,2 };
	int D[5] = { 0,1,2,3,4};
	int f = 143;

	int summ = sumTwoArrAndNum(S, 10, D, 5, f);

}

