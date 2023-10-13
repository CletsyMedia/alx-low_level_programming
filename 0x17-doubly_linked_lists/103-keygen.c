#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point. Generates a key for the given username.
 * Generates a key for the given username.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Correct usage: ./keygen5 username\n");
	return (1);
	}

	char *username = argv[1];
	size_t len = strlen(username);

	unsigned int values[] = {59, 79, 85, 14, 239, 229};
	char key[7];

	for (int i = 0; i < 6; i++)
	{
	char c = 0;

	for (size_t j = 0; j < len; j++)
	{
	c += username[j];
	if (i == 3)
	{
	srand(username[0] ^ values[i]);
	c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"
	[rand() % 63];
	}
	}
	key[i] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"
	[(c ^ values[i]) & 63];
	}
	key[6] = '\0';

	printf("%s\n", key);
	return (0);
}
