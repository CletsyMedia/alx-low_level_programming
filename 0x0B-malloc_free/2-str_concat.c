#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - This concatenates two strings
 * @s1: string1 to concatenate
 * @s2: string2 to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int k, l, num1, num2;

	num1 = 0;
	num2 = 0;

	for (k = 0; s1 && s1[k]; k++)
	num1++;
	for (l = 0; s2 && s2[l]; l++)
	num2++;

	s3 = malloc(sizeof(char) * (num1 + num2 + 1));
	if (s3 == NULL)
	return (NULL);

	for (k = 0; k < num1; k++)
	{
	s3[k] = s1[k];
	}

	for (l = 0; l < num2; l++)
	{
	s3[k] = s2[l];
	k++;
	}

	s3[k] = '\0';

	return (s3);
}
