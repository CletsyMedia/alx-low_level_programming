#include"main.h"
/**
 * _strpbrk - This searches a string for a set of bytes
 * @s: A pointer to the string to search through
 * @accept: An array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes * in accept
 * or return NULL if no bytes are found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
