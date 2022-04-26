#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of a list
 * Return: pointer to the file node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_l *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
