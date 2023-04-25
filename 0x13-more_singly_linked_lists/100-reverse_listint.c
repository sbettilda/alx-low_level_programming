#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a linked linked list
 * @head: pointer to the pointer of the head node
 *
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		/**
		 * this function sets next to point to the next node after @head
		 */
		(*head)->next = previous;
		/**
		 * this function updates next pointer of @head to point to previous
		 * this reverses the direction
		 */
		previous = *head;
		*head = next;
		/**
		 * previous points to the @head and @head points to next which 
		 * continues to the next list
		 * when returns to previous, it points the first node of reversed lust
		 */
	}
	return (previous);
}
