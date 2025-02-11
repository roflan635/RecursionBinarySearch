// Example.cpp : В этом файле вы можете отлаживать ваше задание.
// Подклчайте нужные библиотеки, пишите код, как в обычной программе

#include <iostream>
#include "Task.h"
int FindElement(int* arr, int left, int right, int value)
{
	int middle = (right + left) / 2;
	if (arr[middle] == value)
	{
		while(arr[middle] == value)
			middle--;
		if (arr[middle] != value)
			middle++;
		return middle;
	}
	if (arr[middle] > value)
		return FindElement(arr, left, middle - 1, value);
	if (arr[middle] < value)
		return FindElement(arr, middle + 1, right, value);
}

int RecursionBinarySearch(int* arr, int size, int value)
{
	if (size == 0 || arr == nullptr) return -1;
	if (arr[0] == value) return 0;
	if (size > 1)
		return FindElement(arr, 0, size - 1, value);
}

int main()
{
	int m[] = { 1, 2 };
	int size = sizeof(m) / sizeof(int);
	int value = 2;
	RecursionBinarySearch(m, size, value);
	value = 1;
	RecursionBinarySearch(m, size, value);
	value = 3;
	RecursionBinarySearch(m, size, value);
}