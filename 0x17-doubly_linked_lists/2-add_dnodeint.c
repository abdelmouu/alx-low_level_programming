#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - adds a new node with n at the list's head.
  * @head: head of the doubly linked list
  * @n: number to place in the new node
  *
  * Return: returns new head of the doubly linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
