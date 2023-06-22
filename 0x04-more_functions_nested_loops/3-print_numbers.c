#include "main.h"
/**
 * print_numbers - prints the digits 0 to 9
 * followed by a new line
 *
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; ++i)
	{
		_putchar(i + '0');
	}
		_putchar('\n');
}
