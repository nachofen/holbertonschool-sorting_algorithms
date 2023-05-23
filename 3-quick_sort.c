#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1], cam;
	unsigned int i = 0, j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			cam = array[i];
			array[i] = array[j];
			array[j] = cam;
			print_array(array, size);
			i++;
		}
	}

	cam = array[i];
	array[i] = pivot;
	array[size - 1] = cam;
	print_array(array, size);
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}