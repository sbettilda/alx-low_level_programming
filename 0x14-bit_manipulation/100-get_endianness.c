#include "main.h"

/**
 * get_endianness - function checking endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *d = (char *) &b;

	return (*d);
}
