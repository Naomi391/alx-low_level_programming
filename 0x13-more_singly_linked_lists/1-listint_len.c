#include "lists.h"

/**
 * listint_len - gives me no of elements linked lists
 * @h: value
 *
 * Return: nodes no
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

