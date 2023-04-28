#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets value of a bit to 0 at given index
 * @n: integer
 * @index: index starting from 0
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
