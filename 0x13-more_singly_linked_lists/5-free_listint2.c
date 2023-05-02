#include"lists.h"
/**
 * free_listint2 - Frees a linked list and its memory.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
