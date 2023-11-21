#include "lists.h"

/**
 * add_nodeint_end - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * @n: Parameter 2
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *counting, *p = malloc(sizeof(listint_t));

if (p == 0)
return (0);

counting = *head;
while(counting->next != 0)
counting = counting->next;

p->n = n;
p->next = 0;
counting->next = p;

return (p);
}
