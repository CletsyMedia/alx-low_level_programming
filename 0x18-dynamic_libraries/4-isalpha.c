#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
