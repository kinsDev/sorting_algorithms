#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Macros defining the comparison directions for bitonic sort */
#define ASCENDING 0
#define DESCENDING 1

/* Enumeration to represent boolean values */
typedef enum bool
{
    FALSE = 0,
    TRUE
} bool;

/**
 * Struct listint_s - Definition of a doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element in the list
 * @next: Pointer to the next element in the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Helper function for swapping integers */
void swap_ints(int *a, int *b);

/* Helper functions for printing arrays and linked lists */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Function prototypes for sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
