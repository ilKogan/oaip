#include <iostream>

using namespace std;

bool arrEvenSum(int* arr, int sizeDim2, int sizeDim1) {
	int size = sizeDim1 * sizeDim2;
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	if (sum % 2 == 0) {
		return true;
	}
}

int checkOrderedCertainRows(int certainRows, int* arr, int sizeDim2, int sizeDim1) {

	int i = 0;
	for (int k = 0; k < sizeDim2; i += sizeDim1, k++) {
		for (int j = 0; j < sizeDim1; j++) {
			if (k == certainRows) {
				if (arr[i + j + 1] != arr[i + sizeDim1] && arr[i + j] > arr[i + j + 1]) {
					return 0;
				} else {
					return 1;
				}
			}
		}
	}
}

void Task3() {
	int A[2][3] = { 3,2,6,2,1,2 };
	bool evenSum;

	int B[3][3] = { 1,2,3,3,2,1,1,3,2 };
	int k;
	int orderedRows;

	evenSum = arrEvenSum(*A, 2, 3);

	cout << endl;
	cin >> k;
	cout << endl;

	orderedRows = checkOrderedCertainRows(k,*B, 3, 3);

}



