#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: The format string containing the types of arguments to be printed.
 *
 * Description: This function prints a variable number of arguments based on
 * the format string provided. It supports four types of arguments:
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string
 * If a string argument is NULL, it prints "(nil)" instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int idx = 0;
	char *str;

	va_start(args, format);

	while (format && format[idx])
	{
		switch (format[idx])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				idx++;
				continue;
		}

		if (format[idx + 1] != '\0')
			printf(", ");

		idx++;
	}

	printf("\n");

	va_end(args);
}
