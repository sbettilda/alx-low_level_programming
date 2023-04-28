#include "main.h"

/**
 * append_text_to_file - function that appends text to end of file
 * @filename: pointer to the file's name
 * @text_content: pointer to string to add at end of file
 *
 * Return: --1 if function fails of filename is NULL
 * If file doesn't exist return --1
 * otherwise return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d, f, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	f = write(d, text_content, len);

	if (d == -1 || f == -1)
		return (-1);

	close(d);

	return (1);
}
