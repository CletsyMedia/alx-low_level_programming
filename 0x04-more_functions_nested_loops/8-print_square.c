#include "main.h"
/**
 * print_square - draws a square using terminal lines and #'s
 * @size: determine the number of #s to print in each line.
 *
*/

void print_square(int size)
{
	int sqr1, sqr2;

	if (size > 0)
	{
		for (sqr1 = 0; sqr1 < size; sqr1++)
		{
			for (sqr2 = 0; sqr2 < size; sqr2++)
				putchar('#');
				putchar('\n');
		}
	}
	else
	putchar('\n');
}
