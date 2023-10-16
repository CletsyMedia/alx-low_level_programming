#include "main.h"

/**
 * _islower - This function checks for lowercase character
 *@c: the characters to be check
 * Return: 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
