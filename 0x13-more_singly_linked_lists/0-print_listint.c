#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @h: Parameter 1
 * Return: Always 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
size_t size = 0;
while (h != 0)
{
size++;
printf("%d", h->n);
h = h->next;
}
return (size);
}
