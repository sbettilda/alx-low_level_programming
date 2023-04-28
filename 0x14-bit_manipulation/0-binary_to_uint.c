#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - function converting binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number || 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;
	int slen = 0, i;

	if (b == NULL)
		return (0);

	while (b[slen] != '\0')
	{
		slen++;
	}
	slen -= 1;
	i = 0;

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (outcome);
		}
		if (b[i] == '1')
		{
			outcome += (1 * (1 << slen));
		}
		i++;
		slen--;
	}

	return (outcome);
}
