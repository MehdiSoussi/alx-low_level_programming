#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *  * add_node_end - entrypoint
 *   * @head: Parametre 1
 *   * @str: Parametre 2
 *      *
 *       * Description: [X]
 *        *
 *         * Return: Return value
 **/
list_t *add_node_end(list_t **head, const char *str)
{
char *x;
list_t *op, *p = malloc(sizeof(list_t *));

if (p == 0)
return (0);
x = strdup(str);
p->str = x;
p->len = _strlen(x);
p->next = 0;
if (*head == 0)
{
*head = p;
}
else
{
op = *head;
while (op->next != 0)
{
op = op->next;
}
op->next = p;
}
return (p);
}
/**
 * _strlen - entrypoint
 * @s: Parametre 1
 *
 * Description: [T2]
 *
 * Return: Return value
 */
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
