#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints the all element in a
 * dlistint_t list
 *
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++i;
		h = h->next;
	}

	return (i);
}
