#include "main.h"

/**
 * _isupper - This function checks for uppercase character
 *@c: the characters to be check
 * Return: 1 for lowercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
