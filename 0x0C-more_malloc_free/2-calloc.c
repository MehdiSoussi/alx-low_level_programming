#include <stdlib.h>
#include "main.h"
/**
 * _calloc - entry point
 * @nmemb: Parametre 1
 * @size: Parametre 2
 *
 * Description: [T2]
 *
 * Return: On success 1.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int dim = nmemb * size;
char *a = malloc(dim);

if (a == 0 || nmemb == 0 || size == 0)
return (0);
for (i = 0 ; i < dim ; i++)
{
a[i] = 0;
}
return ((void *) a);
}
