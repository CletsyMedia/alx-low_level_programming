#ifndef _IO_
#define _IO_

/* Function to read a specified number of letters from a text file */
ssize_t read_textfile(const char *filename, size_t letters);

/* Function to create a new file with specified content */
int create_file(const char *filename, char *text_content);

/* Function to append text content to an existing file */
int append_text_to_file(const char *filename, char *text_content);

/* Function to calculate the length of a string */
int _strlen(const char *s);

/* Function to write a character to standard output */
int _putchar(char c);

#endif
