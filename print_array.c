#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Function to print an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;

    /* Loop through the array and print each element */
    while (array && i < size)
    {
        /* Print a comma and space before each element (except the first) */
        if (i > 0)
            printf(", ");
        
        /* Print the current element of the array */
        printf("%d", array[i]);
        
        /* Increment the index to move to the next element */
        ++i;
    }

    /* Print a newline character to end the line */
    printf("\n");
}
