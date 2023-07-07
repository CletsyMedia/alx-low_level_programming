#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: The array that contains the program command line
 * arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
