#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: string pointer
 * Return: The length of string
*/

int _strlen(char *s)
{
	int countStr;

	for (countStr = 0; *s != '\0'; s++)
	{
		countStr++;
	}
		return (countStr);
}
