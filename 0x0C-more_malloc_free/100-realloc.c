#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - writes the character c to stdout
 * @b: Parametre 1
 * @old_size: Parametre 2
 * @new_size: Parametre 3
 *
 * Description: [T4]
 *
 * Return: On success 1.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
char *b = (char*)ptr;
unsigned int i;

if (new_size == old_size)
return ((void*)ptr);
if (ptr == 0)
return ((void*)malloc(new_size));
if (new_size == 0 && ptr != 0)
{
free(ptr);
return ((void*)0);
}
if (old_size > new_size)
{
a = malloc(new_size);
for (i = 0; i<new_size ; i++)
{
a[i] = b[i];
}
free(b);
return ((void*)a);
}
else
{
a = malloc(old_size);
for(i = 0; i<old_size ; i++)
{
a[i] = b[i];
}
free(b);
return ((void*)a);
}
}