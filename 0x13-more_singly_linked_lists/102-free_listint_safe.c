#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: pointer to the head of the list
 *
 * Frees the nodes in the list and sets the head pointer to NULL.
 */
void free_listp2(listp_t **head)
{
	listp_t *node = *head;

	while (node)
	{
		listp_t *next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}

/**
 * free_listint_safe - frees a singly linked list of integers
 * @head: pointer to the head of the list
 *
 * Frees the nodes in the list, checking for cycles to prevent memory leaks.
 * Returns the number of nodes freed.
 */
size_t free_listint_safe(listint_t **head)
{
    size_t nodes_freed = 0;
    listp_t *visited_nodes = NULL;
    listp_t *node;

    while (*head)
	{
		node = malloc(sizeof(listp_t));

		if (!node)
		{
			exit(98);
		}

		node->p = (void *)*head;
		node->next = visited_nodes;
		visited_nodes = node;

		for (node = visited_nodes; node; node = node->next)
		{
			if (*head == node->p)
			{
                *head = NULL;
					free_listp2(&visited_nodes);
                return (nodes_freed);
            }
        }

		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
		nodes_freed++;
	}

	*head = NULL;
	free_listp2(&visited_nodes);
	return (nodes_freed);
}

