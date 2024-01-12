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
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
