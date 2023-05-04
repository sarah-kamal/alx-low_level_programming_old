#include"lists.h"
/**
 * sum_listint - Returns the sum of all the data in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all tthe list is empty.
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

