#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table.
 * Return: Nothing else.
 */
void print_times_table(int n)
{
	int num1, num2, result;

	if (!(n > 15 || n < 0))
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				result = (num1 * num2);
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && num2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && num2 != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
