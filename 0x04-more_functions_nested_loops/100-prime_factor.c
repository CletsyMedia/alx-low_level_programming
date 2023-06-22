#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int maxNum;
	long int i;

	num = 612852475143;
	maxNum = -1;

	while (num % 2 == 0)
	{
		maxNum = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			maxNum = i;
			num = num / i;
		}
	}

	if (num > 2)
		maxNum = num;

	printf("%ld\n", maxNum);

	return (0);
}
