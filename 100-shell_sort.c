#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the shell sort algorithm.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 *
 * Description: This function implements the shell sort algorithm
 *              using the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
    size_t gap, i, j;

    if (array == NULL || size < 2)
        return;

    /* Initialize the gap using the Knuth interval sequence */
    for (gap = 1; gap < (size / 3);)
        gap = gap * 3 + 1;

    /* Perform shell sort with the calculated gap */
    for (; gap >= 1; gap /= 3)
    {
        for (i = gap; i < size; i++)
        {
            j = i;
            while (j >= gap && array[j - gap] > array[j])
            {
                swap_ints(array + j, array + (j - gap));
                j -= gap;
            }
        }
        print_array(array, size); /* Print the array at each step */
    }
}
