// Example.cpp : В этом файле вы можете отлаживать ваше задание.
// Подклчайте нужные библиотеки, пишите код, как в обычной программе

#include <iostream>
#include "Task.h"
int FindElement(int* arr, int size, int value, int index)
{
	if (value < 0) return -1;
	if (arr[index] == value) return index;
	else FindElement(arr, size, value, index - 1);
}
int RecursionBinarySearch(int* arr, int size, int value)
{
	if (size == 0 || arr == nullptr) return -1;
	int index = size - 1;
	FindElement(arr, size, value, index);
}

int main()
{

}