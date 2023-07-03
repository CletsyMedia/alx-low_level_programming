#include "main.h"
/**
 * _strchr - A function that locatesa char in a string
 *
 * @s: The pointer to the string array input
 * @c: char to find from the input array
 *
 * Return:
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the string s
	 */
	if (*s == c)
		return (s);

	/* return null if not found */
	return ('\0');
}

