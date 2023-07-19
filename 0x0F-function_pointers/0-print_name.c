/**
 * print_name - Prints a name using a function pointer.
 * @name: Input string containing the name to be printed.
 * @f: Function pointer casted to a function taking a char pointer argument.
 *
 * This function takes a string 'name' and a function pointer 'f'
 * as arguments. It then calls the function pointed to by 'f',
 * passing the 'name' argument to it.
 * This enables the dynamic invocation of functions to print the given name.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

