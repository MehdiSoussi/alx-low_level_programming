#include <stdio.h>
#include "lists.h"
/**
 *  * list_len - entrypoint
 *   * @h: Parametre 1
 *      *
 *       * Description: [X]
 *        *
 *         * Return: Return value
 **/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != 0)
{
count++;
h = h->next;
}
return (count);
}
