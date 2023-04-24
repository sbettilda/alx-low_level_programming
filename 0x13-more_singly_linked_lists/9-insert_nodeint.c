#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to the pointer of the head node
 * @idx: index of the kist where new node is added. starts at 0
 * @n: value of new node
 *
 * Return: address of new node Success. NULL if failed
 * NULL if impossible to add new node at index idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *node_1, *b = *head;


	if (head == NULL)
		return (NULL);

	node_1 = malloc(sizeof(listint_t));
	if (node_1 == NULL)
		return (NULL);

	node_1->n = n;

	if (idx == 0)
	{
		node_1->next = *head;
		*head = node_1;
		return (node_1);
	}
	for (a = 0; a < idx - 1; a++)
	{
		if (b == NULL)
		{
			free(node_1);
			return (NULL);
		}
		b = b->next;
	}
	if (b == NULL)
	{
		free(node_1);
		return (NULL);
	}
	node_1->next = b->next;
	b->next = node_1;

	return (node_1);
}

