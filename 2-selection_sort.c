#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of int to be sorted
 * @size: number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0, x = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
				x = j;
		}
		if (x != i)
		{
			temp = array[i];
			array[i] = array[x];
			array[x] = temp;
			print_array(array, size);
		}
	}
}
