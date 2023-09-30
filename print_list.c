#include <stdio.h>
#include "sort.h"

/**
 * Function: print_list
 * -------------------
 * Description:
 *   This function prints a list of integers to the standard output.
 *
 * Parameters:
 *   - list: A pointer to the list of integers to be printed.
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
