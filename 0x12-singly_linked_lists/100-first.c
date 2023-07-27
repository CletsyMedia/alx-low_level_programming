#include <stdio.h>

/**
 * b - This function is an attribute constructor.
 *     It prints a message before the main function is executed.
 */
void b(void) __attribute__ ((constructor));

/**
 * b - This function is the constructor.
 *     It is executed automatically before the main function is called.
 *     It prints two lines of text to the standard output.
 */
void b(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
