#include "lists.h"

/**
 * free_dlistint -  frees a DLL
 *@head: pointer to head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *ptr_2;

	if (head == NULL)
		return;


	while (ptr)
	{
		ptr_2 = ptr->next;
		free(ptr);
		ptr = ptr_2;
	}
}
