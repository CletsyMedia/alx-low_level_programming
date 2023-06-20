#include "main.h"
/**
 * print_last_digit -A program that prints the last digit of a numer.
 * @n:The int to find the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
