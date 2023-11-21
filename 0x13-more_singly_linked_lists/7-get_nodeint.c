#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node at a specified index in a
 * singly linked list of integers
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i;

	for (i = 0; current_node && i < index; i++)
	{
		current_node = current_node->next;
	}

	return (current_node);
}
