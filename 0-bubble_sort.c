#include "sort.h"

/**
 * bubble_sort - Sorts array of integers in ascending order.
 *
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	int temp;

	if (array == NULL || size < 2)
		return;

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	} while (swapped);
}
