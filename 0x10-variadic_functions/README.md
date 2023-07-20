# C - Variadic functions
In C programming, a variadic function is a function that can accept a variable number of arguments. It allows you to create functions that can take different numbers of arguments based on the requirements of the program. The C standard library provides variadic functions, and you can also create your own custom variadic functions.

The most common variadic function in the C standard library is printf(), which allows you to print formatted text with variable arguments.

To define a variadic function, you need to use the stdarg.h header, which provides macros and functions to handle variable arguments. The macros in stdarg.h are:

* `va_list`: This is a type representing the variable arguments.
* `va_start`: This macro initializes the va_list object to point to the first variable argument.
* `va_arg`: This macro allows you to access the next argument in the va_list.
* `va_end`: This macro cleans up the va_list object after using it.