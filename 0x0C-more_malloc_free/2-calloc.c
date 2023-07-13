#include "main.h"
#include <stdlib.h>

/**
 * _calloc -this allocates memory for an initialized buffer
 * @nmemb:The number of memory bytes
 * @size:The number of data type bits
 * Return: pointer to initialized buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int indx;

	/*Check for invalid input*/
	if (nmemb == 0 || size == 0)
	return (NULL);

	/*Allocate memory for the buffer*/
	arr = malloc(size * nmemb);
	if (arr == NULL)
	return (NULL);

	/* Initialize the buffer with zeros*/
	for (indx = 0; indx < nmemb; indx++)
	arr[indx] = 0;

	return (arr);
}
