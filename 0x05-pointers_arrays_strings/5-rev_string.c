#include "main.h"
/**
 * rev_string - reversing a string in the opposite order
 * @s: input that revert the string
 * Return: Nothing
 *
*/
void rev_string(char *s)
{
	int i, j;
	char revStr[100];

	j = 0;
	/* This loop iterates over i from 0 until s[i] is equal to '\0' */
	for (i = 0; s[i] != '\0'; i++)
	{
		revStr[i] = s[i];
	}
	i--;
	/**
	 * This copy characters from revStr back to s in reverse order
	*/
	for (j = 0; i >= 0; i--, j++)
	{
		s[i] = revStr[j];
	}
	s[j] = '\0';

}
