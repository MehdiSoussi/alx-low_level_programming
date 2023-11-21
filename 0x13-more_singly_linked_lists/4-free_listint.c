#include "lists.h"

/**
 * free_listint - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * Return: Always 0 (Success)
 */
void free_listint(listint_t *head)
{
listint_t *holder;

while (head != 0)
{
holder = head;
head = head->next;
free(holder);
}
}
