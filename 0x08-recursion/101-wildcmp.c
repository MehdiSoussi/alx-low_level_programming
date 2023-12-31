#include "main.h"
#include <string.h>
/**
 * wildcmp - entrypoint
 * @s1: Parametre 1
 * @s2: Parametre 2
 *
 * Description: [T8]
 *
 * Return: Return value
 */
int wildcmp(char *s1, char *s2)
{
int size1, size2;

size1 = strlen(s1);
size2 = strlen(s2);

if(size1 != size2)
{
return (1);
}
else
{
return (check_strings(s1, s2, size1, size2));
}
}
/**
 * check_strings - entrypoint
 * @s1: Parametre 1
 * @s2: Parametre 2
 * @size1: Parametre 3
 * @size2: Parametre 4
 *
 * Description: [T8]
 *
 * Return: Return value
 */
int check_strings(char *s1, char *s2, int size1, int size2)
{
if (s1[size1] != s2[size2])
{
return (0);
}
else if (size1 == -1)
{
return (1);
}
else
{
return (check_strings(s1, s2, size1 - 1, size2 - 1));
}
}
