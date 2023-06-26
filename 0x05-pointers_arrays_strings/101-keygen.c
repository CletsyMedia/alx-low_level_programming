#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This function generates a random
 * password for the program 101-crackme
 *
 * Return: 1 for success and -1 for otherwise
*/
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += pass[i];
		putchar(pass[i] + '0');
		if ((2772 - sum) < 78)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
