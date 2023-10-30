#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: Parametre 1
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
char *_strdup(char *str)
{
char *p;

if (str == (char *) 0)
return ((char *) 0);
p = (char *) malloc(_strlen(str) * sizeof(char));
if (p == (char *) 0)
return ((char *) 0);
_strcpy(p, str);
return (p);
}
/**
 * _strlen - additional function
 * @s: Parametre 1
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
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
/**
 * _strcpy - additional function
 * @dest: Parametre 1
 * @src: Parametre 2
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int size = 0;
char *t = src;

while (*t != '\0')
{
size++;
t++;
}
for (i = 0; i <= size; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
