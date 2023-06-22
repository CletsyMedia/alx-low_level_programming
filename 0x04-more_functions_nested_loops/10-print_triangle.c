#include "main.h"
/**
 * print_triangle - Prints a triangle using terminal lines with #s,
 * @size: Determines the number of triange*
 */
void print_triangle(int size)
{
	int triagle1, triagle2;

	if (size > 0)
	{
		for (triagle1 = 1; triagle1 <= size; triagle1++)
		{
			for (triagle2 = size; triagle2 >= 1; triagle2--)
				if (triagle1 < triagle2)
					putchar(' ');
				else
					putchar('#');
					putchar('\n');
		}
	}
	else
		putchar('\n');
}
