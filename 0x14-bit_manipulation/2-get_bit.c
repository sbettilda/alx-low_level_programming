#include "main.h"

/**
 * get_bit - function returning the value of a bit at an index
 * @index: index starting from 0 of the bit
 * @n: value of a bit
 *
 * Return: value of bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num_val;

	if (index > 63)
		return (-1);

	num_val = (n >> index) & 1;

	return (num_val);
}
