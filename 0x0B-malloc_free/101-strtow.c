#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - writes the character c to stdout
 * @str: Parametre 1
 *
 * Description: [T6]
 *
 * Return: On success 1.
 */
char **strtow(char *str)
{
/* str = "Mehdi Soussi X"*/
int i=0 , count, array_count = 0;
int denotes_start = 1;
char *p;
char **q;

q = malloc(100 * 100 * sizeof(char));
if(q == 0)
    return 0;

if(str == 0)
    return 0;
while(*(str + i) != '\0')
{
    if(denotes_start)
    {
        p = malloc(100);
        if(p == 0)
            return 0;
        count = 0;
        denotes_start = 0;
    }

    if(!(*(str + i) == 32 && *(str + i + 1) != 32) )
    {
        *(p + count) = *(str + i);
        count ++;
    }
    else
    {
       *(p + count) = '\0'; 
       *(q + array_count)= p;
       array_count++;
       denotes_start = 1;
    }
i++;
}

return q;
}
