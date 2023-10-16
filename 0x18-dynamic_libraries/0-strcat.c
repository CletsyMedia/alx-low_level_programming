#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index, indexSrc;

	/*Find the size of dest array*/
	for (index = 0; dest[index]; index++)
		;

	/* Append each src character to dest */
	for (indexSrc = 0; src[indexSrc]; indexSrc++, index++)
	{
		dest[index] = src[indexSrc];
	}

	/* Add null terminator to the end of dest */
	dest[index] = '\0';

	return (dest);
}
