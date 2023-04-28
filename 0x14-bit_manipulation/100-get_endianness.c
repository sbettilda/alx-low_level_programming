#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function thst checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	else
		return (0);
}
