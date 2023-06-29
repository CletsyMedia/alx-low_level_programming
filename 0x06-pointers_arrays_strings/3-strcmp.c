#include "main.h"
/**
 * _strcmp - a function that compares two strings and display
 *
 * @s1: first string input to compare
 * @s2: against this other second string
 *
 * Return: 0 if s1 and s2 are equal
 *	negative integer if the stopping character
 *		in @s1 was less than the stopping
 *		character in @s2
 *	positive integer if the stopping character
 *		in @s1 was greater than the stopping
 *		character in @s2
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	/**
	 * Iterate through s1 and s2
	 * and compare each character
	 */
	for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		/**
		 * If they differ by a single character,
		 * assign the difference to r and break the loop
		 */
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
	}

	return (r);
}
