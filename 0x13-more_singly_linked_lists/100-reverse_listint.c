#include "lists.h"

/**
 * reverse_listint - reverses a S_L list of ints in place.
 * @head: The head pointer of the singly linked list.
 *
 * Return: The pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *nex;

	previous = NULL;
	nex = NULL;

	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nex;
	}

	*head = previous;
	return (*head);
}
