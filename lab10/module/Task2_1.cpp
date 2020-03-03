#include <iostream> 
#include <new>
#include <stdlib.h>
#include <time.h>
//2.1. Все четные элементы целочисленного массива K(n) поместить в массив L(n), а нечетные – в массив М(n).Подсчитать количество тех и других.
//2.2. Задан массив из k чисел.Сдвинуть элементы массива циклически на n позиций вправо.
//2.5.В массиве А, размером 2n + 1, не содержащем одинаковых элементов,
//найти средний по величине элемент, т.е.такой, при котором в массиве
//А ровно n элементов меньше его и столько же элементов больше его.Массив
//А сохранить(не сортировать), дополнительных массивов не использовать

int fillNumbers(int* (&array)) {
	int size = 0;
	std::cin >> size;

	array = new int[size];

	for (int i = 0; i <= size - 1; i++) {
		array[i] = i;
	}

	return size;
}

int fillRandomNumbers(int* (&array), int range) {
	int size;
	std::cin >> size;

	//размером 2n + 1
	if (size % 2 != 0) {
		size + 2;
	}
	else {
		size + 1;
	}

	array = new int[size];

	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % range;
	}

	return size;
}

void copyEvenAndOddElements(int originSize, int* origin, int* (&even), int* (&odd)) {

	even = new int[originSize];
	odd = new int[originSize];

	for (int i = 0; i < originSize; i++) {

		even[i] = origin[i] + origin[i];
		odd[i] = origin[i] + (origin[i] + 1);
	}



}

void rightOffsetEllements(int size, int* arr) {

	for (int i = 0; i <= size; i++) {

		if (arr[i] == size - 1) {
			arr[i] = arr[i] + 1;
		} else {
			arr[i] = arr[i + 1];
		}

	}
}

int findMedian(int size, int* sortArr) {
	
	return sortArr[(int)((size-1) / 2)];
}

void bubbleSort(int size, int* arr) {
	
	int temp;

	for (int i = 1; i < size; ++i) {
		for (int r = 0; r < size - i; r++) {
			if (arr[r] > arr[r + 1]) {
				// Обмен местами
				int temp = arr[r];
				arr[r] = arr[r + 1];
				arr[r + 1] = temp;
			}
		}
	}

}

void Task2_1() {

	int* numbers = NULL;
	int* even = NULL;
	int* odd = NULL;
	int* randNum = NULL;
	

	int sizeNum = fillNumbers(numbers);
	copyEvenAndOddElements(sizeNum, numbers, even, odd);
	rightOffsetEllements(sizeNum, numbers);

		
	int sizeRandNum = fillRandomNumbers(randNum, 100);
	bubbleSort(sizeRandNum, randNum);
	int median = findMedian(sizeRandNum, randNum);
	 


}