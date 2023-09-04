#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_length = 0, bytes_written;

	/* Check for NULL filename */
	if (filename == NULL)
	return (-1);

	/* Check for NULL text_content */
	if (text_content == NULL)
	return (1); /* Nothing to append */

	/* Open the file with write-only and append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	/* Calculate the length of the text content using a for loop */
	for (text_length = 0; text_content[text_length] != '\0'; text_length++)
	;

	/* Write text content to the file */
	bytes_written = write(fd, text_content, text_length);

	/* Close the file */
	close(fd);

	/* Return success if write was successful, otherwise return -1 */
	return ((bytes_written == text_length) ? 1 : -1);
}
