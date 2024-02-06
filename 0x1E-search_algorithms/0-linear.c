#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point of the program to test linear_search function
 *
 * This function creates an integer array, invokes the linear_search
 * function to search for specific values, and prints the index where
 * the value is found or -1 if the value is not present in the array.
 *
 * Return: Always returns EXIT_SUCCESS to indicate successful execution
 */
int main(void)
{
	int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9}; /* Integer array */
	size_t size = sizeof(array) / sizeof(array[0]);	/* Size of the array */

	/* Test cases for linear_search function */
	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

	return (EXIT_SUCCESS); /* Indicates successful execution */
}
