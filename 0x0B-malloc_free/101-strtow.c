#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position of the word to count characters from
 * @firstchar: position of the first letter of the word
 * if pos = 0, count the number of chars in the word
 * else count number of words
 * Return: wordcount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstchar > 0
 */
int wordcounter(char *str, int pos, char firstchar)
{
	int i, wordcount, charcount, flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
			if (pos > 0 && pos == wordcount && firstchar > 0)
				return (i);
			for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
				;
			return (charcount);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wordcount);
}
/**
 * strtow - convert a string into a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
