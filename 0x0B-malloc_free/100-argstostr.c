#include <stdlib.h>
#include "main.h"
/**
 * argstostr - This function concatenates
 *	all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *	or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *result;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	}

	result = (char *)malloc(len + ac + 1);
	if (result == NULL)
	return (NULL);

	bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
	for (j = 0; av[i][j]; j++)
	result[bufferlen++] = av[i][j];
	result[bufferlen++] = '\n';
	}
	result[bufferlen] = '\0';

	return (result);
}
