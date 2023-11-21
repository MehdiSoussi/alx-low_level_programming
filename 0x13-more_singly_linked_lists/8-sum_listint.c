#include "lists.h"

/**
 * sum_listint - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 * @head: Parameter 1
 * Return: Always 0 (Success)
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != 0)
{
sum += head->n;
head = head->next;
}
return (sum);
}
