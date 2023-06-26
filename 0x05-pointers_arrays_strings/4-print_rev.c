#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * followed by a newline
 * @s: It is the input that prints the string
 * Return: Nothing
*/
void print_rev(char *s)
{
	int lenRev;

	/*Finds the length of the string without a null character i.e. using ; */
	for (lenRev = 0; s[lenRev] != '\0'; lenRev++)
		;

	/*Prints the char *s from the last index(in reverse) as it decrement(--) */
	for (--lenRev; lenRev >= 0; lenRev--)
	{
		_putchar(s[lenRev]);
	}
		_putchar('\n');

}
