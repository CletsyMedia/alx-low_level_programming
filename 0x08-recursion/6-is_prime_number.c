#include "main.h"
#include <stdio.h>
/**
	* find_result - find the result recursively the input from
	* is_prime_number
	* @n: iterator
	* @finder: The base number to check
	* Return: 1 if n is a prime, else return 0 otherwise.
	*/
int find_result(int n, int finder)
{
	if (finder % n == 0 || finder < 2)
		return (0);
	else if (n == finder - 1)
		return (1);
	else if (finder > n)
		return (find_result(n + 1, finder));
	return (1);
}
/**
	* is_prime_number - finds if the number is a prime number
	* @n: the number to check
	* Return: 1 if n is a prime, else return 0 otherwise.
	*/
int is_prime_number(int n)
{
	return (find_result(2, n));
}
