#include "main.h"
/**
 * puts2 - This function prints every character of an even string
 *
 * @str: The string parameter input
 *
 * Return: Noting
 */
void puts2(char *str)
{
		int prt;

	for (prt = 0; str[prt] != '\0'; prt++)
	{
		if (prt % 2 == 0)
		_putchar(str[prt]);

	}
	_putchar('\n');
}
