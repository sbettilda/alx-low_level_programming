#include <stdio.h>

/**
 * main - Entry point
 * More use of putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b;
	char d;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	putchar('\n');

	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);

	putchar('\n');
	return (0);
}
