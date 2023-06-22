#include "main.h"
/**
 * print_diagonal -It draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to be drawn or print
 */
void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
		int diag1, diag2;

		for (diag1 = 0; diag1 < n; diag1++)
		{
			for (diag2 = 0; diag2 < n; diag2++)
			{
				if (diag1 == diag2)
					_putchar('\\');
				else if (diag2 < diag1)
					_putchar(' ');
			}
				_putchar('\n');
		}
	}
}
