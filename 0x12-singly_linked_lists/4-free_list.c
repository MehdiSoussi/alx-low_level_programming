#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *  * free_list - entrypoint
 *   * @head: Parametre 1
 *      *
 *       * Description: [X]
 *        *
 *         * Return: Return value
 **/
void free_list(list_t *head)
{
list_t *savetofree, *firstnode;

firstnode = head;
while (head->next != 0)
{
savetofree = head;
head = head->next;
free(savetofree);
}
free(firstnode);
}
