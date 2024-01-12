#include "lists.h"
/**
  * add_dnodeint - Adds 1 node to the beging of a D-L-L
  *
  * @head: the head of the linked list
  * @n: the value to add to the list
  *
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
