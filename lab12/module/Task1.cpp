#include <iostream>

using namespace std;


void sortArray(int* array, int sizeArray) {
	int size = sizeArray - 1;
	int tmp;

	for (int k = size; k >= 0; k--) {
		for (int i = 0; i <= size; i++) {
			if (array[i] < array[i + 1] && array[i + 1] != array[size + 1]) {
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
			} else {
				continue;
			}
		}
	}
	return;
}


void Task1() {

	int C[10] = { 0,-1,-2,3,4,5,-6,7,-8,9 };


	sortArray(C, 10);

}



