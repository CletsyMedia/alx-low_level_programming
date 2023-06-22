#include "main.h"
/**
 * print_triangle - Prints a triangle using terminal lines with #s,
 * @size: Determines the size of triange*
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int triagle1, triagle2;

	for (triagle1 = 1; triagle1 <= size; triagle1++)
	{
	for (triagle2 = triagle1; triagle2 < size; triagle2++)
	{
	_putchar(' ');
	}
	for (triagle2 = 1; triagle2 <= triagle1; triagle2++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

