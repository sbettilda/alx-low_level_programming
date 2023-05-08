#include "main.h"

/**
 * append_text_to_file - function appending text at end of file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	c = open(filename, O_WRONLY | O_APPEND);
	d = write(c, text_content, len);

	if (c == -1 || d == -1)
		return (-1);

	close(c);

	return (1);
}
