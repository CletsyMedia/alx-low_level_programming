#include "main.h"
/**
 * print_last_digit -A program that prints the last digit of a numer.
 * @last:The int to find the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int last)
{
	if (last < 0)

		last = last * -1;

	_putchar((last % 10) + '0');

	return (last % 10);
}
