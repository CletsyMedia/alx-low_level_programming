#include "main.h"
/**
 * _strcpy - copies a string from one pointer to another
 * including the terminating null byte (\0)
 *
 * @src: this is the	source of string parameter input
 * @dest:the destination where the string is stored
 *
 * Return: pointer to dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
	/*saveStr iterates over the characters of strings*/
	int saveStr = 0;
	/**
	 * The loop is used to copy characters from the src to the dest
	 * the loops continues as long as the character at src[i]
	 * is not the null character
	 *
	 */
	while ((dest[saveStr] = src[saveStr]) != '\0')
		saveStr++;

	return (dest);
}
