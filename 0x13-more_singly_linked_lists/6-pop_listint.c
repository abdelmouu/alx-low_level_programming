#include "lists.h"

/**
 * pop_listint - removes the head node of a singly linked list
 * of integers and returns its value.
 * @head: The head pointer of the singly linked list.
 *
 * Return: The integer value stored in the head node.
 * NULL if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *A;
	listint_t *curnt;

	if (*head == NULL)
		return (0);

	curnt = *head;

	hnode = curnt->n;

	A = curnt->next;

	free(curnt);

	*head = A;

	return (hnode);
}
