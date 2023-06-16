#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line, using the putchar() function
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)

	{
	putchar(num);
	}

	putchar('\n');

	return (0);
}
