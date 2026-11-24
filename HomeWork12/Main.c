#include <stdio.h>

int main() {

	// массив для сравнения элементов (отсутствие UB)
	long long int arr[2];
	int size;

	// разница между адресом первого элемента массива и второго по байтам
	size = (char*)&arr[1] - (char*)&arr[0];

	printf("number of bytes - %d", size);

	return 0;
}
