#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer that is to be printed
 */
void print_number(int n)
{
	unsigned int intNum;

	if (n < 0)
	{
		intNum = -n;
		_putchar('-');
	} else
	{
		intNum = n;
	}

	if (intNum / 10)
	{
		print_number(intNum / 10);
	}

	_putchar((intNum % 10) + '0');
}
