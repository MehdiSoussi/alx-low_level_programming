#include "lists.h"
#include <stdio.h>
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
list_t *counting = h;
size_t count = 0;

while (counting->next != 0)
{
count++;
if (counting->str == 0)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s", counting->len, counting->str);
}
counting = counting->next;
}
return (count);
}
