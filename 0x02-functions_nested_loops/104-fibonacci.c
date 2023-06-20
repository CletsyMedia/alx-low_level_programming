#include <stdio.h>
/**
  * main -A program that print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int fibonacci;
	unsigned long num1, num2, num3;
	unsigned long m, n, p, carry;

	fibonacci = 0;
	num1 = 0;
	num2 = 1;
	for (fibonacci = 1; fibonacci <= 91; fibonacci++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
	}
	m = num1 % 1000;
	num1 = num1 / 1000;
	n = num2 % 1000;
	num2 = num2 / 1000;
	while (fibonacci <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		num3 = (num1 + num2) + carry;
		m = n;
		n = p;
		num1 = num2;
		num2 = num3;
		if (p >= 100)
			printf("%lu%lu", num3, p);
		else
			printf("%lu0%lu", num3, p);
		if (fibonacci != 98)
			printf(", ");
		fibonacci++;
	}
	putchar('\n');
	return (0);
}
