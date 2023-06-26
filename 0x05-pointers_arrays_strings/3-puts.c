#include "main.h"
/**
 * _puts - This function prints a string to the stdout
 * followed by a newline
 *
 * @str: The string parameter to print
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}

		_putchar('\n');
}
