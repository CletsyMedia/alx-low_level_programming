#include "main.h"
/**
 * _puts_recursion - This prints a string with recursion
 * @s: string that prints out result
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return; /*End of the strings*/
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
