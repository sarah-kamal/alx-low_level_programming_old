#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer to add to the new node.
 *
 * Return: Pointer to the new head of the linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *newptr;
	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head))
	{
		*head = new;
	}
	else
	{
		newptr = *head;
		while (newptr->next != NULL)
		{
			newptr = newptr->next;
		}
		newptr->next = new;
		new->next = NULL;
	}
	return (new);
}
