#include "lists.h"

/**
 * listint_len - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @h: Parameter 1
 * Return: Always 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;
while (h != 0)
{
h = h->next;
size++;
}
return (size);
}
