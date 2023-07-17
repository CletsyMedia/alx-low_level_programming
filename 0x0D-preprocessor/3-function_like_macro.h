#ifndef ABS_H
#define ABS_H

/**
 * ABS - Macro to compute the absolute value of a number.
 * @x: The number for which the absolute value will be computed.
 *
 * Description:
 * This macro takes a number 'x' as input and computes its absolute value.
 * If 'x' is less than 0, the macro returns 'x' multiplied by -1; otherwise,
 * it returns 'x' multiplied by 1. Which is enclosed in parentheses to ensure
 * proper evaluation and avoid unexpected behavior.
 *
 * Return: The absolute value of the input number 'x'.
 */
#define ABS(x) (((x) < 0) ? ((x) * -1) : ((x) * 1))

#endif /* ABS_H */
