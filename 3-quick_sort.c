#include "sort.h"

/**
 * swap_int - Swaps two elements in an integer array.
 * @a: Pointer to the first element.
 * @b: Pointer to the second element.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partitions an array of integers using the Lomuto scheme.
 * @array: The array of integers.
 * @size: The size of the array.
 * @l: The first index of the array.
 * @h: The last index of the array.
 *
 * Description: This function partitions the array based on a pivot element
 * and returns the new index position for the pivot element.
 *
 * Return: The new index position.
 */
int lomuto_partition(int *array, size_t size, int l, int h)
{
	int pivot = array[h], i = l, j;

	for (j = l; j <= h - 1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (pivot != array[i])
	{
		swap_int(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

/**
 * lomuto_sort - Implements the quick sort algorithm using recursion.
 * @array: The array of integers.
 * @size: The size of the array.
 * @l: The first index of the array.
 * @h: The last index of the array.
 */
void lomuto_sort(int *array, size_t size, int l, int h)
{
	int i;

	if (l < h)
	{
		i = lomuto_partition(array, size, l, h);
		lomuto_sort(array, size, l, i - 1);
		lomuto_sort(array, size, i + 1, h);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using quick sort.
 * @array: The array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
