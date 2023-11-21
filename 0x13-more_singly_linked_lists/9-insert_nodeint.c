#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node containing an integer
 * value at a specified index in a singly linked list of integers.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: A pointer to the newly inserted node.
 * NULL if memory allocation fails or the index is out of bounds.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	h = *head;
	for (i = 1; h && i < idx; i++)
	{
		h = h->next;
	}

	if (h == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = h->next;
	h->next = new;

	return (new);
}
