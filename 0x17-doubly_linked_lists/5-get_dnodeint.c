#include "lists.h"

/**
 * get_dnodeint_at_index - main
 * @head: parameter 1
 * @index: parameter 2
 *
 * Return: return value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
