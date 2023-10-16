#include"main.h"
/**
 * _memcpy - This function copies the memory area
 *
 * @dest: A buffer where it is stored
 * @src: A memory where it is copied to
 * @n: number of bytes of @src
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy;

	for (cpy = 0; cpy < n; cpy++)
		dest[cpy] = src[cpy];
	return (dest);
}
