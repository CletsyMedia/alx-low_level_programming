#include "main.h"
/**
 * swap_int - A function for swapping two numbers using Pointer
 * @a: first int to checkswap
 * @b: second int to checkswap
*/
void swap_int(int *a, int *b)
{
	int checkSwap;

	checkSwap = *a;
	*a = *b;
	*b = checkSwap;
}
