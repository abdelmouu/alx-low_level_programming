#include "lists.h"

/**
 * add_nodeint - inserts a new node containing an int value at the beginning.
 * @head: The head pointer of the singly linked list.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the newly added node. NULL if it failed.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_no;

	new_no = malloc(sizeof(listint_t));
	if (new_no == NULL)
		return (NULL);

	new_no->n = n;
	new_no->next = *head;
	*head = new_no;

	return (new_no);
}
