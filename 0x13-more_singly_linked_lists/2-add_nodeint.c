#include"lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer to add to the new node.
 *
 * Return: Pointer to the new head of the linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

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
		new->next = (*head);
		(*head) = new;
	}
	return (*head);
}

