#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reading a text file and prints
 * to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be read and print
 *
 * Return: actual number of letters read and printed
 * Return: 0 if filename is NULL, or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	ssize_t c;
	char *d;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	d = malloc(sizeof(char) * letters);
	c = read(a, d, letters);
	b = write(STDOUT_FILENO, d, c);

	free(d);
	close(a);
	return (b);
}
