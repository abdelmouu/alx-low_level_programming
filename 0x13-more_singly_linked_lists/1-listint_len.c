#include "lists.h"

/**
 * listint_len - determines the num of nodes in a singly linked list of ints.
 * @h: The head pointer of the singly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
