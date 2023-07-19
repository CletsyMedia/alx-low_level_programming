#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Get the function pointer for a given operator symbol.
 *
 * @s: A char pointer pointing to an operator symbol from the program argument.
 *
 * Return: One of the op to perform calculations, or NULL if no match is found.
 */
int (*get_op_func(char *s))(int, int)
{
	/* Array of struct op_t to store operators */
	op_t ops[] = {
		{"+", op_add}, /* Operator: "+", Function: op_add */
		{"-", op_sub}, /* Operator: "-", Function: op_sub */
		{"*", op_mul}, /* Operator: "*", Function: op_mul */
		{"/", op_div}, /* Operator: "/", Function: op_div */
		{"%", op_mod}, /* Operator: "%", Function: op_mod */
		{NULL, NULL}	/* NULL terminator for the array, marks the end of operators */
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL); /* Return NULL if no match is found */
}
