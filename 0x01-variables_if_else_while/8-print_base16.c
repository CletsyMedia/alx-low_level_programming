#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphaNum;

	for (alphaNum = '0'; alphaNum <= '9'; alphaNum++)
	{
	putchar(alphaNum);
	}
	for (alphaNum = 'a'; alphaNum <= 'f'; alphaNum++)
	{
	putchar(alphaNum);
	}

	putchar('\n');

	return (0);
}
