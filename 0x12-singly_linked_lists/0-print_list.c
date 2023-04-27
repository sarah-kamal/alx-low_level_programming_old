#include"lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h->str)
			printf("[%ld] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
