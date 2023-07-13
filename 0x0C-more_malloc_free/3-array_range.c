#include <stdlib.h>

/**
 * array_range - Creates an array of integers representing a
 * range of values.
 *
 * @min: The minimum value of the range (inclusive).
 * @max: The maximum value of the range (inclusive).
 *
 * Return: Pointer to the array of integers representing the
 * range.
 *	Returns NULL if the range is invalid or if memory
 *	allocation fails.
 */
int *array_range(int min, int max)
{
	int idx, *arrRng;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the range */
	int size = max - min + 1;

	/* Allocate memory for the array representing the range */
	arrRng = malloc(size * sizeof(int));
	if (arrRng == NULL)
		return (NULL);

	/* Populate the array with consecutive values within the range */
	for (idx = 0; min <= max; idx++)
	{
		arrRng[idx] = min;
		min++;
	}

	return (arrRng);
}
