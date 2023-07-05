#include "main.h"
/**
 * _strlen_recursion - This prints a the length of a string
 * @s: string that prints out result
 *
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s = s + 1;
	return (1 + _strlen_recursion(s));
}
