#include "main.h"
/**
 * jack_bauer - A program prints the time table in this format: HH:MM
 * Return: the time in the sum of two numbers.
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
