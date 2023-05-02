#include"lists.h"
/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer index, or NULL if the index is out of range.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}

