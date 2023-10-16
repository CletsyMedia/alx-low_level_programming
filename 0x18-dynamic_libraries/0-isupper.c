#include "main.h"
/**
 * _isupper - check if char is upper.
 * @c : input
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
