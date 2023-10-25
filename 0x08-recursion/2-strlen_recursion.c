#include "main.h"
/**
 * _strlen_recursion - entrypoint
 * @s: Parametre 1
 *
 * Description: [T1]
 *
 * Return: Return value
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
