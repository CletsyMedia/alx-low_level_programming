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
	char revStr;

	/* This loop iterates over i from 0 until s[i] is equal to '\0' */
	for (i = 0; s[i] != '\0'; i++)
		;
	/**
	 * This copy characters from revStr back to s in reverse order
	*/
	for (j = 0; j < i / 2; j++)
	{
		revStr = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = revStr;
	}

}
