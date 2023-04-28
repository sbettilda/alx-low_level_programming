#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets value of a bit to 1
 * @n: integer
 * @index: index with bit
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;
	unsigned long int x = 1;

	v = (sizeof(unsigned long int) * 8);
	if (index > v)
		return (-1);

	x <<= index;
	*n = (*n | x);

	return (1);
}
