#include <stdio.h>
/**
	* main - Prints the sum of all the multiples of 3 or 5 below 1024.
	*
	* Return: Always 0 (Success)
	*/

int main(void)
{
	int multiple, result;

	for (multiple = 0; multiple < 1024; multiple++)
		if (multiple % 3 == 0 || multiple % 5 == 0)
			result += multiple;
	printf("%d\n", result);
	return (0);
}
