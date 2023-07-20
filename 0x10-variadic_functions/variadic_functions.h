#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: Variable arguments (integers) to be added.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints a variable number of integers separated by a string.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: Variable arguments (integers) to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints a variable number of strings separated by a string.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 * @...: Variable arguments (strings) to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints a variable number of arguments based on the given format.
 * @format: The format string containing the types of arguments to be printed.
 * @...: Variable arguments to be printed, with types defined
 * by the format string.
 *
 * The format can contain:
 * - 'c' for char (int converted to unsigned char)
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string
 *
 * Note: If an unsupported format character is provided, it will be ignored.
 * If a string argument is NULL, "(nil)" will be printed instead.
 */
void print_all(const char * const format, ...);

#endif
