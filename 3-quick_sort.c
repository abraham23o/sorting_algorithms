#include "sort.h"
#include <stdio.h>

int partition(int *array, int st, int gt, size_t size);
void quick_s(int *array, int st, int gt, size_t size);

/**
 * quick_sort - a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: the array to be sorted
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - partitions the array into lower and higher parts
 * using the lomuto partition scheme
 * @array: array to be partitioned
 * @st: lower partition part
 * @gt: higher partition part
 * @size: number of elements in the array
 * Return: i
 */
int partition(int *array, int st, int gt, size_t size)
{
	int i = st - 1, j = st, pivot = array[gt], temp = 0;

	for (; j < gt; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[gt])
	{
		temp = array[i + 1];
		array[i + 1] = array[gt];
		array[gt] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - quick sort
 * @array: array to be sorted
 * @st: lower partition part
 * @gt: higher partition part
 * @size: number of elements in the array
 */
void quick_s(int *array, int st, int gt, size_t size)
{
	int pivot;

	if (st < gt)
	{
		pivot = partition(array, st, gt, size);
		quick_s(array, st, pivot - 1, size);
		quick_s(array, pivot + 1, gt, size);
	}
}
