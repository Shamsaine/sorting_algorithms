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
    if (array == NULL || size <= 1) {
        return;
    }

    int swapped;

    for (size_t i = 0; i < size - 1; i++) {
        swapped = 0;

        for (size_t j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;

                
		for (size_t k = 0; k < size; k++) {
                    printf("%d", array[k]);
                    if (k < size - 1) {
                        printf(", ");
                    }
                }
                printf("\n");
            }
        }


        if (swapped == 0) {
            break;
        }
    }
}
