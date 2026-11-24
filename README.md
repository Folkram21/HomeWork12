<h1>Домашнее задание по теме 12. Работа с указателями</>

<h2>Задача - Напиcать программу, которая вычисляет размер основных типов данных в байтах (без использования sizeof).</h2>

<h2>Блок-схема:</h2>
<h2>Функция main()</h2>
<img width="375" height="463" alt="main()" src="https://github.com/user-attachments/assets/35352ded-ca32-4bf9-8327-7c92ef53c0d9" />

<h2>Код:</h2>

```c
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
```
