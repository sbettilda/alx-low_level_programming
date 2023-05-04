#include "main.h"

/**
 * clear_bit - function setting value of bit to 0
 * @n: pointer to the bit
 * @index: index starting from 0 of n
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
