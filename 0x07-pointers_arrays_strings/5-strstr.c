#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * It he first occurrence of the substring 'needle' in the
 * string 'haystack'.
 * @haystack: input that search for matching strings
 * @needle: The substring to search for
 *
 * Return: The pointer to the start of the loacted substrings or
 * terminate if substring is empty.
 *
*/
char *_strstr(char *haystack, char *needle)
{
	/* Declare pointers to assist in searching */
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
	/* Set the helper pointers 'h' and 'n' to the current positions */
		h = haystack;
		n = needle;
	/* Iterate through the substring 'needle' and check for matches */
		for (; *n != '\0' && *haystack == *n; haystack++, n++)
		{
			/*Continue the loop until the characters match*/
		}
	/* Check if the whole 'needle' string has been found */
		if (!*n)
			return (h);
	}
	/* Return nothing if the substring is not found*/
	return (0);
}

