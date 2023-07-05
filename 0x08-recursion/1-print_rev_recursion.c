#include "main.h"
/**
 * _print_rev_recursion - This prints a string in reverse
 * recursion
 * @s: string that prints out result
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
