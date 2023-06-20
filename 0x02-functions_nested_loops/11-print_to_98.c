#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from 0 to 98.
 * @n: the number has to start counting from 0 to 98
 * Return: Always 1 for success and -1 for failure.
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
