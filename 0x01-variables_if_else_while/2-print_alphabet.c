#include <stdio.h>
/**
 * main - prints the alphabet in lowercase letters
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
