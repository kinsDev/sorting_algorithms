#include "sort.h"

/**
 * swap_ints - Function to swap two integers in an array.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * bubble_sort - Function to perform a bubble sort on an array of integers in ascending order.
 * @array: Pointer to an array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function sorts the array using the bubble sort algorithm
 * and prints the array after each swap operation.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool bubbly = false;

    if (array == NULL || size < 2)
        return;

    while (bubbly == false)
    {
        bubbly = true;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                bubbly = false;
            }
        }
        len--;
    }
}
