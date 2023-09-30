#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	/* Loop through the array for the number of passes required to sort it */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Initialize swapped flag to 0 for this pass */

		/* Compare and swap adjacent elements */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap the elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; /* Set swapped flag to indicate a swap */
				print_array(array, size); /* Print the current state of the array */
			}
		}

		/* If no swaps occurred in this pass, the array is already sorted */
		if (swapped == 0)
		{
			return; /* Exit the function early */
		}
	}
}
