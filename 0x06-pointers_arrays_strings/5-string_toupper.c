#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: The pointer element
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	for (int i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}

	return (n);
}
