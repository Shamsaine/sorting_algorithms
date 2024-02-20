#include "sort.h"

/**
 * swap - a function that swaps integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - a function that implement the bubble sort algorithm
 *
 * @array: a pointer to an array of integer
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	size_t j;

	if (array == NULL || size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				swapped = 1;


				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
