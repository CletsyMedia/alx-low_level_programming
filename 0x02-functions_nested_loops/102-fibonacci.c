#include <stdio.h>
/**
	* main - A program that print the first 50 fibonacci numbers.
	* Return: Nothing.
	*/
int main(void)
{
	unsigned long fibonacci, num1, num2, num3;

	num1 = 0;
	num2 = 1;
	for (fibonacci = 0; fibonacci < 50; fibonacci++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu", num3);
		if (fibonacci == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
