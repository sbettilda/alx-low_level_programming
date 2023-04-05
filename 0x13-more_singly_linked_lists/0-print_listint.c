#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - printing the linked list elements
 * @h: node pointer
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t q = 0;

	while (h)
	{
		printf("%d\n", h->n);
		q++;
		h = h->next;
	}
	return (q);
}
