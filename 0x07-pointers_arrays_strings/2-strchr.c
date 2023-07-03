#include "main.h"
/**
 * _strchr - A function that locates a char in a string
 *
 * @s: The pointer to the string array input
 * @c: char to find from the input array
 *
 * Return:
*/
char *_strchr(char *s, char c)
{
	int fnd = 0;

	for (; s[fnd] >= '\0'; fnd++)
	{
		if (s[fnd] == c)
			return (&s[fnd]);
	}
	return (0);
}

