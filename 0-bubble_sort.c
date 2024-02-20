#include "sort.h"

/**
 * bubble_sort - Sorts an array of ints in ascending order using the Bubble
 *
 * @array: Array of integers
 *
 * @size: Size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temporary = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				temporary = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporary;
				print_array(array, size);
			}
}
