#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints the all element in a
 * dlistint_t list
 *
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	int length;
	length = 0;

	if (h == NULL)
		return (lenght);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		lenght++;
		h = h->next;
	}

	return (length);
}
