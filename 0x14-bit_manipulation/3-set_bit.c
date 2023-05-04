#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 in an index
 * @n: pointer to bit to be set
 * @index: index starting from 0 of n
 *
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
