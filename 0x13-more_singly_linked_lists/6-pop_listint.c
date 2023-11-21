#include "lists.h"

/**
 * pop_listint - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
int save;

if(*head == 0)
return (0);
save = (*head)->n;
*head = (*head)->next;
return (save);
}
