#include"lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	i = 0;
	if (!(*head))
		return (i);
	else
	{
		i = (*head)->n;
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	return (i);
}
