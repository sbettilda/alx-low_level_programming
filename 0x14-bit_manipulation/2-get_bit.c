#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns value of bit at given index
 * @n: integer
 * @index: index starting from 0
 * Return: value of bit at index || -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
