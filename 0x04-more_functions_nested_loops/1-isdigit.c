#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: the character to be checked
 *
 * Return: 1 if a character is a digit otherwise 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
