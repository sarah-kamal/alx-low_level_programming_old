#include"lists.h"
/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head -> next)
			free_list(head->next);
		if (head->next == NULL)
		{
			if (head->str)
				free(str);
			free(head);
			head = NULL;
		}
	}
}
