#include "main.h"
/**
 * print_alphabet - A program that prints all the english alphabet from a-z.
 * Return: 0.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
