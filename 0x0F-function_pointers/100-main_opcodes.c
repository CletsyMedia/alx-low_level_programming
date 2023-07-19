#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: Always successful.
 */

int main(int argc, char *argv[])
{
	int idx, numbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);
	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Change for loop to while loop */
	idx = 0;
	while (idx < numbytes)
	{
		printf("%02x", ptr[idx] & 0xFF);
		if (idx != numbytes - 1)
			printf(" ");
		idx++;
	}
	printf("\n");
	return (0);
}
