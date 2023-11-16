#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t numElements = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		numElements++;
		current = current->next;
	}

	return numElements;
}
