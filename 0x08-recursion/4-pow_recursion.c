#include "main.h"
/**
 * _pow_recursion - This prints x to power y
 * @x: The parameter base
 * @y: The power
 *
 * Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
	{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	}
}
