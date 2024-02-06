#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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

#endif