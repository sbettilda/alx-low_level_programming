#include "main.h"

/**
 * create_file - function creating a file
 * @filename: the pointer to the file name to create
 * @text_content: is a pointer to a string written to the file
 *
 * Return: --1 if fail, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int bc, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	bc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(bc, text_content, len);

	if (bc == -1 || z == -1)
		return (-1);

	close(bc);

	return (1);
}
