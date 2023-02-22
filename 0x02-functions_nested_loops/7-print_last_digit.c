#include "main.h"

/**
 * print_last_digit - prints teh last digit of a number
 * @n: is the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
