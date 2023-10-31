#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - writes the character c to stdout
 * @str: Parametre 1
 *
 * Description: [T6]
 *
 * Return: On success 1.
 */
char **strtow(char *str)
{
int i = 0, count, array_count = 0, checkempty = 1, denotes_start = 1;
char *p, **q;

checkempty_function(str, &checkempty);
q = malloc(10 * 10 * sizeof(char));
if (q == 0 || str == 0 || *str == '\0' || checkempty == 1)
return (0);
while (*(str + i) != '\0')
{
if (denotes_start)
{
denotes_start_function(&p, &denotes_start, &count);
if (p == 0)
return (0);
}
if (!(*(str + i) == 32 && *(str + i + 1) != 32))
{
*(p + count) = (*(str + i) != 32) ? *(str + i) : '\0';
count++;
}
else
{
*(p + count) = '\0';
if (*p != 32)
{
*(q + array_count) = p;
array_count++;
}
denotes_start = 1;
}
i++;
}
if (*(q + array_count - 1) != p)
{
*(p + count) = '\0';
*(q + array_count) = p;
}
while (**q == '\0')
q++;
return (q);
}
/**
 * checkempty_function - writes the character c to stdout
 * @str: Parametre 1
 * @checkempty : Parametre 2
 *
 * Description: [T6]
 *
 * Return: On success 1.
 */
void checkempty_function(char *str, int *checkempty)
{
int i = 0;

while (*(str + i) != '\0')
{
if (*(str + i) == 32)
{
i++;
continue;
}
*checkempty = 0;
i++;
}
}
/**
 * denotes_start_function - writes the character c to stdout
 * @p: Parametre 1
 * @denotes_start : Parametre 2
 * @count : Parametre 3
 *
 * Description: [T6]
 *
 * Return: On success 1.
 */
void denotes_start_function(char **p, int *denotes_start, int *count)
{
*p = malloc(10);
*count = 0;
*denotes_start = 0;
}
