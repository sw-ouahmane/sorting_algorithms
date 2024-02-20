#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, index_of_min;
	int temp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index_of_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_of_min])
			{
				index_of_min = j;
			}
		}
		if (index_of_min != i)
		{
			temp = array[index_of_min];
			array[index_of_min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
