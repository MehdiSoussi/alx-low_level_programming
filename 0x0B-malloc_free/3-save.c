#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - writes the character c to stdout
 * @str: Parametre 1
 *
 * Description: [T3]
 *
 * Return: On success 1.
 */
int **alloc_grid(int width, int height)
{
int **p;
int i, j;

if(width < 0 || height < 0)
{
    return 0;
}
p = malloc(width * sizeof(int*));
if(p == 0)
    return 0;

for(i=0; i<width; i++)
{
*(p+i) =  malloc(width * sizeof(int));
if(*(p+i) == 0)
    return 0;
for(j = 0; j < height; j++)
{
p[i][j] = 0;
}
}

return p;
}