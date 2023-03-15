#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * count_words - helper function to count words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_words(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow -splits a string into words
 * @str: string to split
 * count_words - counts words in str
 * Return: pointer to an array of strings (Success)
 * of NULL (error)
 */

char **strtow(char *str)
{
	char **z, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = count_words(str);

	if (words == 0)
		return (NULL);

	z = (char **) malloc(sizeof(char *) * (words + 1));

	if (z == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
		if (c)
		{
			end = i;
			tmp = (char *) malloc(sizeof(char) * (c + 1));
		if (tmp == NULL)
			return (NULL);
		while (start < end)
			*tmp++ = str[start++];
		*tmp = '\0';
		z[k] = tmp - c;
		k++;
		c = 0;
		}
	} else if (c++ == 0)
		start = i;
	}
	z[k] = NULL;
	return (z);
}
