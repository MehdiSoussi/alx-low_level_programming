#include "lists.h"

/**
 * dlistint_len - main
 * @h: parameter 1
 *
 * Return: return value
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
