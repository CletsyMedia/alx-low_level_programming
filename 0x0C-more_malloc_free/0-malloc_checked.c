#include "main.h"
#include <stdlib.h>
/**
	* malloc_checked - This allocates memory using malloc
	* @b: This is the size of buffer
	* Return: The pointer to the buffer
	*/
void *malloc_checked(unsigned int b)
{
	void *memSpace = malloc(b);

	if (memSpace == NULL)
	{
	exit(98);
	}
	return (memSpace);
}
