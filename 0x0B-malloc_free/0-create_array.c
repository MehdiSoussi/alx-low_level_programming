#include <stdlib.h>
#include "main.h"
/**
 * create_array - entry point
 * @size: Parametre 1
 * @c: Parametre 2
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
char *create_array(unsigned int size, char c)
{
char *p = malloc(size * sizeof(char));
unsigned int i;

if (size == 0)
{
return (0);
}
if (p == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
*(p + i) = c;
}
return (p);
}
