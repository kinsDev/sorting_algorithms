#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n; /* Stores an integer value in the node */
    struct listint_s *prev; /* Pointer to the previous element of the list */
    struct listint_s *next; /* Pointer to the next element of the list */
} listint_t;

void bubble_sort(int *array, size_t size); /* Function declaration for bubble sort */
void insertion_sort_list(listint_t **list); /* Function declaration for insertion sort */
void selection_sort(int *array, size_t size); /* Function declaration for selection sort */
void quick_sort(int *array, size_t size); /* Function declaration for quick sort */
void print_list(const listint_t *list); /* Function declaration to print a doubly linked list */
void print_array(const int *array, size_t size); /* Function declaration to print an array */
void swap_int(int *a, int *b); /* Function declaration to swap two integers */
int lomuto_partition(int *array, size_t size, int l, int h); /* Function declaration for Lomuto partitioning */

#endif
