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
	unsigned long int b = 1;
	unsigned int d;

	d = (sizeof(unsigned long int) * 8);
	if (index > d)
		return (-1);

	b <<= index;
	*n = (*n | b);
	return (1);
}
