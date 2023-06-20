#include "main.h"
/**
 * print_last_digit -A program that prints the last digit of a numer.
 * @n:The int to find the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
