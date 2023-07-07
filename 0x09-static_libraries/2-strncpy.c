#include "main.h"
/**
 * _strncpy - A function that copy strings and display
 *
 * @dest: The pointer to destination input the buffer
 * @src: The pointer to the source input
 * @n: bytes of the the pointer @src
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * Iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source,
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * If the length of source is less than n,
	 * write additional null bytes to dest to
	 * ensure that a total of n bytes is written
	 */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
