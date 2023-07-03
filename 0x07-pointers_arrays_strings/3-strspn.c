#include"main.h"
/**
 * _strspn - find the length of the prefix substring
 * @s: This compares the bytes
 * @accept: The strings of bytes to compare with
 *
 * Return: The number of bytes in @s consisting of bytes
 * from accept
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0' && s[m] != accept[n]; n++)
		{
			/*Do nothing*/
		}
		if (accept[n] == '\0')
			return (m);
	}
	return (m);
}
