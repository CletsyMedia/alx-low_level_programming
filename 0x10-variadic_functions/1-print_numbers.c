#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function prints a variable number of integers, separated
 * by the specified separator string, and ends with a new line. It uses the
 * variadic argument list from stdarg.h to handle the variable arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(args, int));

		/* Print separator if not NULL and not the last number */
		if (separator != NULL && idx < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
