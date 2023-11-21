#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * @idx: Parameter 1
 * @n: Parameter 1
 * Return: Always 0 (Success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *saveworkernext, *worker;

worker = *head;
if (idx == 0)
{
new = add_nodeint(head, n);
return (new);
}
idx--;
while (idx != 0)
{
if (worker == 0)
return (0);
worker = worker->next;
idx--;
}
new = malloc(sizeof(listint_t));
if (new == 0)
return (0);
new->n = n;
if (worker->next == 0)
{
worker->next = new;
new->next = 0;
}
else
{
saveworkernext = worker->next;
worker->next = new;
new->next = saveworkernext;
}
return (new);
}
/**
 * add_nodeint - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * @n: Parameter 20
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p = malloc(sizeof(listint_t));

if (p == 0)
return (0);

p->n = n;
p->next = *head;
*head = p;
return (*head);
}
