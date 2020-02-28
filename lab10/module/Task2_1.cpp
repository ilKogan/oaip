#include <iostream> 
#include <new>

//1. Все четные элементы целочисленного массива K(n) поместить в массив L(n), а нечетные – в массив М(n).Подсчитать количество тех и других.
//2. Задан массив из k чисел.Сдвинуть элементы массива циклически на n позиций вправо.

int fillNumbers(int* (&array)) {
	int size = 0;
	std::cin >> size;
	array = new int[size];

	for (int i = 0; i <= size - 1; i++) {
		array[i] = i;
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

		if (arr[i] == size-1) {
			arr[i] = arr[i] + 1;
		}
		else {
			arr[i] = arr[i + 1];
		}
		  
	}
}

void Task2_1() {

	int* numbers = NULL;
	int* even = NULL;
	int* odd = NULL;


	int sizeNum = fillNumbers(numbers);

	copyEvenAndOddElements(sizeNum, numbers, even, odd);

	rightOffsetEllements(sizeNum,numbers);

}