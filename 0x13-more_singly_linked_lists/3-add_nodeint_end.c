#include "lists.h"

/**
 * add_nodeint_end - appends a new node with an int to the end of a SL list.
 * @head: The head pointer of the singly linked list.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the newly added node. NULL if it failed.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_no;
	listint_t *last_node;

	new_no = malloc(sizeof(listint_t));
	if (new_no == NULL)
		return (NULL);

	new_no->n = n;
	new_no->next = NULL;

	if (*head == NULL)
	{
		*head = new_no;
		return (new_no);
	}

	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_no;

	return (new_no);
}
