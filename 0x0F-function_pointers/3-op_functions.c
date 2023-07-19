/**
 * op_add - Adds two integers.
 *
 * @a: The first input integer.
 * @b: The second input integer.
 *
 * Return: The sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts @b from @a.
 *
 * @a: The first input integer.
 * @b: The second input integer.
 *
 * Return: The difference between @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 *
 * @a: The first input integer.
 * @b: The second input integer.
 *
 * Return: The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides @a by @b.
 *
 * @a: The dividend (input 1).
 * @b: The divisor (input 2).
 *
 * Return: The result of the division of @a by @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the remainder of the division between @a and @b.
 *
 * @a: The dividend (input 1).
 * @b: The divisor (input 2).
 *
 * Return: The remainder of the division of @a by @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
