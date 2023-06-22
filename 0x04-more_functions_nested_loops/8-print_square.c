#include "main.h"

/**
 * print_square - prints a square using #s, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int sqr1, sqr2;

		for (sqr1 = 0; sqr1 < size; sqr1++)
		{
			for (sqr2 = 0; sqr2 < size; sqr2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
