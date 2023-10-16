#include"main.h"
/**
 * _memset - it is a function that fills memory with
 * a constant byte
 *
 *  @s: input pointer to char type represents the pointer to the
 *  block of memory to fill.
 *
 *  @b: input variable of char type represents the character to fill
 *
 *  @n: unsigned int variable the number of bytes to be filled
 *
 *  Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int because we are storing a
	 * value that will always be non-negative (zero or positive)
	 */
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
		s[mem] = b;

	return (s);
}
