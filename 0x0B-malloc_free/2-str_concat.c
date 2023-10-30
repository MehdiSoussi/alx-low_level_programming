#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - writes the character c to stdout
 * @s1: Parametre 1
 * @s2: Parametre 2
 *
 * Description: [T2]
 *
 * Return: On success 1.
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int pointer_size;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
pointer_size = (_strlen(s1) + _strlen(s2) + 1);
p = malloc(pointer_size * sizeof(char));
if (p == 0)
return (0);
p = _strcat(1, p, s1);
p = _strcat(0, p, s2);
return (p);
}
/**
 * _strcat - entrypoint
 * @type_pointer: Parametre 1
 * @dest: Parametre 2
 * @src: Parametre 3
 *
 *     *
 *      * Description: [T2]
 *       *
 *        * Return: Return value
 **/
char *_strcat(int type_pointer, char *dest, char *src)
{
int dest_size = type_pointer == 1 ? 0 : _strlen(dest);
int i = 0;

while (*src != '\0')
{
*(dest + dest_size + i) = *src;
i++;
src++;
}
*(dest + dest_size + i) = *src;
return (dest);
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
