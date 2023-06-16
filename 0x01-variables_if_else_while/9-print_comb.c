#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num != '9')
		{
		putchar(',');
		putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
