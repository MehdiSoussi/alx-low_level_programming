#include "lists.h"

/**
 * add_nodeint - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * @n: Parameter 2
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *p = malloc(sizeof(listint_t));

if (p == 0)
return (0);

p->n = n;
p->next = *head;
*head = p;

return (*head);
}
