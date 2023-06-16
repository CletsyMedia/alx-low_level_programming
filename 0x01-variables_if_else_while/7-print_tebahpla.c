#include <stdio.h>
/**
 * main - prints the alphabet in lowercase letters in reverse order
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
