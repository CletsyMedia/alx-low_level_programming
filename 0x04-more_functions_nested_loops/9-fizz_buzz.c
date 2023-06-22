#include <stdio.h>
/**
 * main - Prints the numbers between 1 - 100,
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of 3 and 5, print FizzBuzz.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int multiple;

	for (multiple = 1; multiple <= 100; multiple++)
	{
		if (multiple % 3 == 0 && multiple % 5 == 0)
			printf("FizzBuzz");
		else if (multiple % 3 == 0)
			printf("Fizz");
		else if (multiple % 5 == 0)
			printf("Buzz");
		else
			printf("%d", multiple);
		if (multiple != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
