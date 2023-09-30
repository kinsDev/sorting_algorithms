#include <stdio.h>
#include <stdlib.h>
#include "../sort.h" /* Including a custom header file for sorting functions. */

/*** main - Entry point ***/
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}; /* Define an array of integers. */
    size_t n = sizeof(array) / sizeof(array[0]); /* Calculate the number of elements in the array. */

    print_array(array, n); /* Call a function to print the unsorted array. */
    printf("\n"); /* Print a newline for formatting. */

    bubble_sort(array, n); /* Call a bubble sort function to sort the array. */

    printf("\n"); /* Print a newline for formatting. */
    print_array(array, n); /* Call a function to print the sorted array. */

    return (0); /* Return 0 to indicate successful program execution. */
}
