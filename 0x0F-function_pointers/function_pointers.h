#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name, which takes a char pointer 'name' and a function pointer 'f' as arguments */
void print_name(char *name, void (*f)(char *));

/* Function prototype for array_iterator, which takes an integer pointer 'array', a 'size_t' variable 'size', and a function pointer 'action' as arguments */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for int_index, which takes an integer pointer 'array', an integer 'size', and a function pointer 'cmp' as arguments */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * enum bool - A custom enumeration called 'bool' representing boolean values.
 * @TRUE: Represents the boolean value 1.
 * @FALSE: Represents the boolean value 0.
 */
typedef enum bool
{
	TRUE = 1,
	FALSE = 0
} bool;

#endif /* FUNCTION_POINTERS_H */
