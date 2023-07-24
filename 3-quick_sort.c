#include "sort.h"

/**
 * the_lomuto_partition - Lomuto partition scheme for Quick sort
 *
 * @array: The array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Number of elements in @array
 *
 * Return: Index of the partition
 */

int the_lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quick_sort_recursive - Recursive function to perform Quick sort
 *
 * @array: The array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Number of elements in @array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int partition_idx;

	if (low < high)
	{
		partition_idx = the_lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, partition_idx - 1, size);
		quick_sort_recursive(array, partition_idx + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using Quick sort algorithm with Lomuto partition scheme.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
