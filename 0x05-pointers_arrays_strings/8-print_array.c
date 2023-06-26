#include "main.h"
/**
 * print_array - prints an array of n elements of an array
 * @n: elements parameter input
 * @a: the string element parameter input
 * Return 0
*/
void print_array(int *a, int n)
{
		int arr;

		for (arr = 0; arr < n; arr++)
		{
			printf("%d", a[arr]);

			if (arr != (n - 1))
			printf(", ");
		}
			printf("\n");

}
