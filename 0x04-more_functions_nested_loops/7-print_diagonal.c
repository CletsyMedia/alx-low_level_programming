#include "main.h"
/**
 * print_diagonal -It draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to be drawn or print
 */
void print_diagonal(int n)
{
	int diag1, diag2;

	if (n > 0)
	{
		for (diag2 = 1; diag2 <= n; diag2++)
		{
			for (diag1 = 1; diag1 <= diag2; diag1++)
				if (diag1 != 1)
				{
					_putchar(' ');
				}
			if (diag1 == diag2)
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
