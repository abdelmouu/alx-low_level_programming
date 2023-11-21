#include "lists.h"

/**
 * print_listint_safe - Prints a list of integers represented
 * by a singly linked list.
 * @head : A pointer to the head node of the singly linked list.
 * Return: number of nodes in the list.
 *
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *seen[1024];

	memset(seen, 0, sizeof(seen));

	while (head)
	{
		if (seen[head->n])
		{
			fprintf(stderr, "Cycle detected!\n");
			exit(98);
		}

		seen[head->n] = head;
		nodes++;
		printf("%d ", head->n);
		head = head->next;
	}

	printf("\n");
	return (nodes);
}
