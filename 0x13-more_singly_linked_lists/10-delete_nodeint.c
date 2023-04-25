#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node
 * @index: node that should be deleted and starts at 0
 * @head: pointer to the pointer of the head list
 *
 * Return: - 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;
	listint_t *node_2, *c = *head;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		c = *head;
		*head = (*head)->next;
		/**
		 * this updates the head pointer pointing the next node
		 * frees space on the current node
		 */
		free(c);
		return (1);
	}

	node_2 = *head;

	for (b = 0; b < index - 1; b++)
	{
		if (node_2->next == NULL)
			return (-1);

		node_2 = node_2->next;
	}

	c = node_2->next;

	if (c == NULL)
		return (-1);

	node_2->next = c->next;
	free(c);
	return (1);
}
