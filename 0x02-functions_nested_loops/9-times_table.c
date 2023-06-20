#include "main.h"
/**
 * times_table - A program that prints the times table from 0 to 9.
 *
 * Return: 1 for positive, 0 for zero, -1 for negative or if not a digit.
 */
void times_table(void)
{
	int column, row, result;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			result = (column * row);
			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10 && row != 0)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else
				_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
