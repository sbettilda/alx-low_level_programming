#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints to POSIX stdout
 * @filename: name of file
 * @letters: numbers of the letters to print
 *
 * Return: the number of letters || 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ab, x, y;
	char *buffer;

	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(ab, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);
	free(buffer);
	close(ab);
	return (x);
}
