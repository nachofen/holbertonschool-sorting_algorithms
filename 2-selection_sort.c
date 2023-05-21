#include "sort.h"
/**
 * selection_sort - sort an array using selectiopn sort
 * @array: array structure
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int aux;
	unsigned int i, j, current;

	for (i = 0; i < (size - 1); i++)
	{
		current = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[current] > array[j])
				current = j;
		}
	if (current != i)
	{
		aux = array[i];
		array[i] = array[current];
		array[current] = aux;
		print_array(array, size);
	}
	}
}
