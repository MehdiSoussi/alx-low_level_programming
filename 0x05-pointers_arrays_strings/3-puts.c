#include "main.h"
/**
 * _puts - entrypoint
 * @str: Parametre 1
 *
 * Description: [T3]
 *
 * Return: Return value
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
}
