#include <stdio.h>
/**
 * main - This prints all arguments it receives.
 * @argc: The number of command line arguments.
 * @argv: The array that contains the program
 * command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])

{
	int all;

	for (all = 0; all < argc; all++)

		printf("%s\n", argv[all]);
	return (0);
}
