#include "lists.h"
/**
 * print_list - prints the contents of a singly linked list.
 * @h: The head pointer of the singly linked list.
 *
 * Return: The number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t numElements;

	numElements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numElements++;
	}
	return (numElements);
}
