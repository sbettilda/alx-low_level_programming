#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns sum of all data (n)
 * @head: pointer to the head node
 *
 * Return: if list is empty return 0. Else return sum of data of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a = head;

	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
		return (sum);

}
