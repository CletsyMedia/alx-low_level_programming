#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from 0 to 98.
 * @n: the number has to start counting from 0 to 98
 * Return: Always 1 for success and -1 for failure.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	
}
