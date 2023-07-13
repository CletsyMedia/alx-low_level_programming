#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free.
 *
 * @ptr: Pointer to the previous memory block.
 * @old_size: Old size of the memory block.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the new memory block, or NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	/* If new size is the same as the old size, return the original pointer */
	if (new_size == old_size)
		return (ptr);

	/* If the original pointer is NULL, allocate new memory block */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	/* If new size is 0 pointer is not NULL, free the memory block */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory block with the new size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents from the original pointer to the new memory block */
	char *temp_ptr = ptr;
	unsigned int i;

	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp_ptr[i];

	/* Free the original memory block */
	free(ptr);

	return (new_ptr);
}
