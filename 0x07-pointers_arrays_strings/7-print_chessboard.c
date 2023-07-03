#include "main.h"
/**
 * print_chessboard - Prints a chessboard represented by a 2D
 * array.
 *
 * This function takes a 2D array 'a' representing a chessboard
 * and prints it
 * contents. The chessboard has a size of 8x8.
 *
 * @a: The 2D array representing the chessboard.
 *
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Iterate through the rows of the chessboard */
	for (row = 0; row < 8; row++)
	{
		/* Iterate through the columns of the chessboard */
		for (col = 0; col < 8; col++)
		{
			/* Print the character at the current position */
			_putchar(a[row][col]);
		}

		/* Move to the next line after printing a row */
		_putchar('\n');
	}
}
