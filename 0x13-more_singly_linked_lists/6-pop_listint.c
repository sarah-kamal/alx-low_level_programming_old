#include"lists.h"
/**
 * pop_listint - Removes the head node of a linked list and returns its data.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The data of the removed head node as an integer, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	i = 0;
	if (!(*head))
	{
		i = 0;
	}
	else
	{
		i = (*head)->n;
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	return (i);
}
