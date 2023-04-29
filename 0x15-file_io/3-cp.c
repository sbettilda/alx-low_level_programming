#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - function allocating 1024 bytes for a buffer
 * @file: name of file storing chars
 *
 * Return: pointer to new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function closing file descriptors
 * @fd: file descriptor to close
 */

void close_file(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copying contents of a file to another
 * @argc: argument count in the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 on success
 *
 * Description: if arg count is wrong - exit code 97
 * If file_from is non-existent and can't be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to pf file_from cna't be closed - exit 100
 */

int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't reaf from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		y = write(to, buffer, y);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't wrute to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
