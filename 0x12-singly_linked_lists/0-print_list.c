#include <stdio.h>
#include "lists.h"
/**
 *  * print_list - entrypoint
 *   * @h: Parametre 1
 *      *
 *       * Description: [X]
 *        *
 *         * Return: Return value
 **/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h->next != 0)
{
count++;
if (h->str == 0)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
printf("-> %d elements\n", count);
return (count);
}
