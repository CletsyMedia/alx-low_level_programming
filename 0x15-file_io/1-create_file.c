#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with given text content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, text_length = 0;

	/* Check for NULL filename */
	if (filename == NULL)
	return (-1);

	/* Open the file with write-only and create, or truncate */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	/* Check for NULL text_content */
	if (text_content != NULL)
	{
	while (text_content[text_length])
	text_length++;

	/* Write text content to the file */
	bytes_written = write(fd, text_content, text_length);
	}

	/* Close the file */
	close(fd);

	/* Return success if write was successful, otherwise return -1 */
	return ((bytes_written == text_length) ? 1 : -1);
}
