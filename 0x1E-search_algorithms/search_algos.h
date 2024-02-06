#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stddef.h>/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;




/* Linear search algorithm */
int linear_search(int *array, size_t size, int value);

/* Binary search algorithm */
int binary_search(int *array, size_t size, int value);

/* Jump search algorithm */
int jump_search(int *array, size_t size, int value);

/* Interpolation search algorithm */
int interpolation_search(int *array, size_t size, int value);

/* Exponential search algorithm */
int exponential_search(int *array, size_t size, int value);

/* Advanced binary search algorithm */
int advanced_binary(int *array, size_t size, int value);

/* Print array elements within specified range */
void print_array(int *array, size_t left, size_t right);

/* Binary search for index */
int binary_search_index(int *array, size_t left, size_t right, int value);

/* Struct for singly linked list node */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/* Jump search in a singly linked list */
listint_t *jump_list(listint_t *list, size_t size, int value);



#endif
