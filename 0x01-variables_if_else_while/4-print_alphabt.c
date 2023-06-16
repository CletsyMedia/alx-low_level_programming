#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase letters except for 'e' and 'q'
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'e' && alphabet != 'q')
	{
	putchar(alphabet);
	}
	alphabet = tolower(alphabet);
	putchar('\n');

	return (0);
}
