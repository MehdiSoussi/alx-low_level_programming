#include "lists.h"

/**
 *  sum_dlistint - main
 * @head: parameter 1
 *
 * Return: return value
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
