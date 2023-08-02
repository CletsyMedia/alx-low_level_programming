#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>

/* Function to get the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Function to set a bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Function to clear a bit at a given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function to print a character */
int _putchar(char c);

/* Function to convert a binary string to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* Function to print the binary representation of an unsigned long int */
void print_binary(unsigned long int n);

/* Function to calculate the number of bits needed to flip to convert two numbers */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function to check the endianness of the system */
int get_endianness(void);

#endif
