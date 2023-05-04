#include "main.h"

/**
 * flip_bits - function returning no of bits needed to flip
 * from one number to another
 * @n: no of bits needed to flip
 * @m: integer
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_val = n ^ m;
	unsigned int count = 0;

	while (bit_val)
	{
		count += bit_val & 1;
		bit_val >>= 1;
	}
	return (count);
}
