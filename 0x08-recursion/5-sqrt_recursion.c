#include "main.h"
/**
 * find_result - finds the input from n to the base
 * @n: number is squared and compared against base
 *@finder: finds number to check
 * Return: natural square root of	n
*/
int find_result(int n, int finder)
{
	if (n * n == finder)
	return (n);
	if (n * n > finder)
	return (-1);
	return (find_result(n + 1, finder));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to find for square roots.
 * Return: the natural square root of	n
 */
int _sqrt_recursion(int n)
{
	return (find_result(1, n));
}
