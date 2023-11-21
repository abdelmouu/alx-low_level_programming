#include "lists.h"

/**
 * free_listp - deallocates the memory occupied
 * by a linked list of pointers.
 * @head: The head pointer of the singly linked list.
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *currently;

	if (head != NULL)
	{
		currently = *head;
		while ((temp = currently) != NULL)
		{
			currently = currently->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - safely prints the values of a
 * singly linked list of integers.
 * @head: The head pointer of the singly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *visited_nodes_ptr, *new, *add;

	visited_nodes_ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = visited_nodes_ptr;
		visited_nodes_ptr = new;

		add = visited_nodes_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&visited_nodes_ptr);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listp(&visited_nodes_ptr);
	return (num_nodes);
}
