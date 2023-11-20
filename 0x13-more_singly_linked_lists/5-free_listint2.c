#include "lists.h"

/**
 * free_listint2 - deallocates the memory occupied by LL.
 * @head: The head pointer of the singly linked list.
 * Return: The address of the newly added node. NULL if it failed.
 **/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
