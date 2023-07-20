#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: This function prints a variable number of strings, separated
 * by the specified separator string, and ends with a new line. If any of the
 * strings is NULL, it prints "(nil)" instead. It uses the variadic argument
 * list from stdarg.h to handle the variable arguments.
 *
 * @separator: The separator string between strings (or NULL if none).
 * @n: The number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;
	char *str;

	/* Initialize the argument list from the start */
	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		/* Print separator if not NULL and not the last string */
		if (separator != NULL && idx < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	/* Clean up the argument list */
	va_end(args);
}
