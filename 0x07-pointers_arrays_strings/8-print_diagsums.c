#include"main.h"
/**
 * print_diagsums - Prints the sum of the diagonals of a square
 * integer array
 * @a: Pointer to the 2D square integer array
 * @size: Size of the square array
 *
 *
*/
void print_diagsums(int *a, int size)
{
	int i, sumx, sumy;

	sumx = sumy = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sumx += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumy += a[i];
	printf("%d, %d\n", sumx, sumy);
}
