#include "main.h"

/**
 * binary_to_uint - function converting binary number to unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: the converted no. or 0 if
 * there is more chars in b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
	return (num);
}
