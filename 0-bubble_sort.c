#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void swap(int *xptr, int *yptr);

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of int
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
