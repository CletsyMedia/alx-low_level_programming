#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description:
 * The main function prints the name of the file it was compiled from using the
 * __FILE__ macro.  Which displays the filename as a string to the standard
 * output, followed by a new line character. It then returns 0 to indicate a
 * successful execution.
 *
 * Return: 0 to indicate success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
