#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a new duplicate string
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *b;
	int i, g = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	b = malloc(sizeof(char) * (i + 1));

	if (b == NULL)
		return (NULL);
	for (g = 0; str[g]; g++)
		b[g] = str[g];

	return (b);
}
