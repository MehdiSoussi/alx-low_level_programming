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
int i=0 , count, array_count = 0;
int denotes_start = 1;
char *p;
char **q;


q = malloc(10 * 10 * sizeof(char));
if(q == 0)
    return 0;

if(str == 0 || *str == '\0' )
    return 0;
while(*(str + i) != '\0')
{
    if(denotes_start)
    {
        p = malloc(10);
        if(p == 0)
            return 0;
        count = 0;
        denotes_start = 0;
    }

    if(!(*(str + i) == 32 && *(str + i + 1) != 32) )
    {
        if(*(str + i) != 32)
        *(p + count) = *(str + i);
        else
         *(p + count) = '\0';
        count ++;
       
    }
    else
    {
       *(p + count) = '\0';
       if(*p != 32)
       {
       *(q + array_count) = p;
       array_count++;
       }
       
       denotes_start = 1;
    }
i++;
}
 if(*(q + array_count - 1) != p)
{
  printf("%p\n", *(q + array_count - 1));
  printf("%p\n", (p));
    *(p + count) = '\0';
    *(q + array_count) = p;
}


while(**q == '\0')
{
  q++;
}
return q;
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [T2]
 *      *
 *       * Return: Return value
 **/
int _strlen(char *s)
{
int size = 0;

while (*s != '\0')
{
size++;
s++;
}
return (size);
}