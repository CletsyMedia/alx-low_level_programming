#include "main.h"
/**
 * _strchr - A function that locatesa char in a string
 *
 * @s: The pointer to the string array input
 * @c: char to find from the input array
 *
 * Return: pointer to first occurence of character c
 * or NULL if character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
