#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to return.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return a pointer
 * to the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *z = head;

	while (z != NULL && index > 0)
	{
		z = z->next;
		index--;
	}

	return (z);
}
