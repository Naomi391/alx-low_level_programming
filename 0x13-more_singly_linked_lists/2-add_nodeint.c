#include "lists.h"

/**
 * add_nodeint - adds a new node
 *   @head: pointer to first node
 * @n: new node data
 *
 * Return: pointer node, or NULL in failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

