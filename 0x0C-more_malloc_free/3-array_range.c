#include <stdlib.h>
#include "main.h"
/**
 * array_range - writes the character c to stdout
 * @min: Parametre 1
 * @max: Parametre 2
 *
 * Description: [T3]
 *
 * Return: On success 1.
 */
int *array_range(int min, int max)
{
int i;
int array_size = (max - min + 1);
int *a = malloc(array_size * sizeof(int));

if (min > max || a == 0)
return (0);
for (i=0 ; i< array_size; i++)
{
a[i] = min;
min++;
}
return (a);
}