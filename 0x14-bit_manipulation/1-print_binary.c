#include "main.h"

/**
 * print_binary - function printing binary presentation of a no
 * @n: integer
 *
 * Return: 0 on success
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
