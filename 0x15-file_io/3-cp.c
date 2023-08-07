#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - Entry point for the file copying program.
 *        It copies the contents of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: Exit code, 0 for success, specific codes for errors.
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd, close_status, bytes_written, bytes_read;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	while (1)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

		if (bytes_read > 0)
		{
			bytes_written = write(dest_fd, buffer, bytes_read);
			if (bytes_written == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
			break;
	}

	close_status = close(src_fd);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);

	close_status = close(dest_fd);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

	return (0);
}
