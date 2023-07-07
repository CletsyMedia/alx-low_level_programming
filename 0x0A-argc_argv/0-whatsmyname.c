#include <stdio.h>
/**
 * main - This prints its name, followed by
 * new line.
 * @argc: The number of command line arguments.
 * @argv: The array that contains the program
 * command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
