#include "main.h"
/**
 * _puts_recursion - entrypoint
 * @s: Parametre 1
 *
 * Description: [T0]
 *
 * Return: Return value
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
