#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The number of bytes read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read;

	/* Check for NULL filename */
	if (filename == NULL)
	return (0);

	/* Open the file for reading */
	file = fopen(filename, "r");
	if (file == NULL)
	return (0);

	/* Allocate memory for the buffer */
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
	fclose(file);
	return (0);
	}

	/* Read data from the file into the buffer */
	bytes_read = fread(buffer, sizeof(char), letters, file);
	fclose(file); /* Close the file before returning if it's opened */

	/* Handle read errors */
	if (bytes_read <= 0)
	{
	free(buffer);
	return (0);
	}

	/* Null-terminate the buffer */
	buffer[bytes_read] = '\0';

	/* Write buffer contents to standard output */
	bytes_read = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	return (bytes_read);
}
