#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node at a specified index
 * from a singly linked list of integers.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 *
 * Return: 1 when succeeded, and -1 when failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous_node, *next;

	previous_node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous_node != NULL; i++)
		{
			previous_node = previous_node->next;
		}
	}

	if (previous_node == NULL || (previous_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous_node->next;

	if (index != 0)
	{
		previous_node->next = next->next;
		free(next);
	}
	else
	{
		free(previous_node);
		*head = next;
	}

	return (1);
}
