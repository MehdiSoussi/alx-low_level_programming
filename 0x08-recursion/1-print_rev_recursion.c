#include "main.h"
/**
 * _print_rev_recursion - entrypoint
 * @s: Parametre 1
 *
 * Description: [T1]
 *
 * Return: Return value
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion((s + 1));
_putchar(*s);
}
}