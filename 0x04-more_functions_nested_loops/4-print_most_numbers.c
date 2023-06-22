#include "main.h"
/**
 * print_most_numbers - prints the digits 0 to 9 excluding 2 and 4
 * followed by a new line
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; ++i)
	{
		if (i != 2 && i != 4)
		_putchar(i + '0');
	}
		_putchar('\n');
}
