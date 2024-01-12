#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t DLL
 *@head: head of th list
 *
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int _sum = 0;

	if (head == NULL)
		return (_sum);

	while (ptr)
	{
		_sum += ptr->n;
		ptr = ptr->next;
	}

	return (_sum);
}
