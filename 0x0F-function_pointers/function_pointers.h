#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* takes a char pointer 'name' and a function pointer 'f' */
void print_name(char *name, void (*f)(char *));

/*takes an int pointer 'array', 'size_t' 'size', and a funct pointer 'action'*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* takes an int pointer 'array', an int 'size', and a function pointer 'cmp' */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * enum bool - Custom enum 'bool' representing boolean values.
 * @TRUE: Represents boolean value 1.
 * @FALSE: Represents boolean value 0.
 */
typedef enum bool
{
	TRUE = 1,
	FALSE = 0
} bool;

#endif /* FUNCTION_POINTERS_H */
