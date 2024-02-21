#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t min_index, i, j;

	if (array == NULL || size <= 1)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;

			print_array(array, size);
		}
	}
}
