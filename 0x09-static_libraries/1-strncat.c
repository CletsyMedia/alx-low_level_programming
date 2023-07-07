#include "main.h"

/**
 * _strncat - Concatenates two strings, limiting the number of
 * characters copied.
 * @dest: The pointer destination string.
 * @src: The pointer source string.
 * @n: The maximum number of characters to be concatenated.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int indexNum, indexSrc;

	indexNum = 0;

	/* Find size of dest array */
	while (dest[indexNum])
		indexNum++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (indexSrc = 0; indexSrc < n && src[indexSrc] != '\0'; indexSrc++)
		dest[indexNum + indexSrc] = src[indexSrc];

	/* Null-terminate dest */
	dest[indexNum + indexSrc] = '\0';

	return (dest);
}
