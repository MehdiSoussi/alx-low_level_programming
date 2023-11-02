#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - writes the character c to stdout
 * @b: Parametre 1
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);

if (a == 0)
{
return (98);
}
return (a);
}
