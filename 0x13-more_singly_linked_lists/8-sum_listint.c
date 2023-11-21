#include "lists.h"

/**
 * sum_listint - calculates the sum of all integer values
 * stored in a singly linked list.
 * @head: The head pointer of the singly linked list.
 *
 * Return: The sum of all the integer values in the list.
 * 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
