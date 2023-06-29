#include "main.h"
/**
 * _strcat - A function that concatenates(joins) two strings
 *
 * @dest: The pointer destination input
 * @src: The pointer to the source input
 *
 * Return: The resulting string @dest
*/
char *_strcat(char *dest,	char *src)
{
	int destNum = 0;

	/* Find the size of dest array */
	while (dest[destNum])
	destNum++;

	/*Append each src character to dest*/
	for (int srcNum = 0; src[srcNum]; srcNum++)
	{
	dest[destNum] = src[srcNum];
	destNum++;
	}

	dest[destNum] = '\0'; /*Add null terminator to the end of dest*/

	return (dest);
}
