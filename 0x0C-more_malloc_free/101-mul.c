#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory block to fill.
 * @b: Byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: Size of the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the newly allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 *
 * @s1: String representation of the first number.
 * @s2: String representation of the second number.
 *
 * Return: Nothing.
 */
void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

	/* Store the pointer address to free it later */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * main - Entry point
 *
 * Description: A program that multiplies two positive numbers.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
