#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - writes the character c to stdout
 * @s1: Parametre 1
 * @s2: Parametre 2
 * @n: Parametre 3
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *save_s1 = (s1 == 0) ? "" : s1;
char *save_s2 = (s2 == 0) ? "" : s2;
unsigned int leng_s1 = _strlen(save_s1);
unsigned int leng_s2 = (n >= _strlen(save_s2)) ? _strlen(save_s2) : n;
unsigned int size_to_allocate = leng_s1 + leng_s2 + 1;
char *p = malloc(size_to_allocate);

if (p == 0)
return (0);

p = _strncat( 1 ,p , s1, leng_s1, leng_s1);
p = _strncat( 0 ,p , s2, leng_s2, leng_s1);

*(p + size_to_allocate-1) = '\0';

return (p);
}
/**
 *  * _strncat - entrypoint
 * @empty: Parametre 1
 * @dest: Parametre 1
 * @src: Parametre 1
 * @n: Parametre 1
 * @s1_length: Parametre 1
 *
 *      * Description: [T1]
 *       *
 *        * Return: Return value
 **/
char *_strncat(unsigned int empty, char *dest, char *src, unsigned int n , unsigned int s1_length)
{
unsigned int dest_size = (empty == 1) ? 0 : s1_length;
unsigned int i = 0;

while (*src != '\0' && i < n)
{
*(dest + dest_size + i) = *src;
i++;
src++;
}
return (dest);
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [T1]
 *      *
 *       * Return: Return value
 **/
unsigned int _strlen(char *s)
{
unsigned int size = 0;

while (*s != '\0')
{
size++;
s++;
}
return (size);
}