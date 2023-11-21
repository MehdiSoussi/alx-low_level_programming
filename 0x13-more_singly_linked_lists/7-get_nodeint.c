#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * @index: Parameter 1
 * Return: Always 0 (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
while (index != 0)
{
if (head == 0)
return (0);
head = head->next;
index--;
}
return (head);
}