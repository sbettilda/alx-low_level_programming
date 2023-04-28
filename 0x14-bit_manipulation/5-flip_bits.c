#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits needed to flip
 * @n: integer
 * @m: integer
 *
 * Return:number of bits needed to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;
	unsigned long int mask = 1;

	while (mask != 0)
	{
		if (diff & mask)
			count++;
		mask <<= 1;
	}
	return (count);
}
