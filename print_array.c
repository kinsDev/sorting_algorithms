#include <stdlib.h>
#include <stdio.h>

/**
 * Function: print_array
 * ---------------------
 * Description: Prints an array of integers to the standard output.
 *
 * @param array: Pointer to the array to be printed.
 * @param size: Number of elements in the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", "); // Print a comma and space if it's not the first element.
        printf("%d", array[i]); // Print the current element.
        ++i;
    }
    printf("\n"); // Print a newline character at the end.
}
