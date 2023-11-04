#include "main.h"
/**
 * malloc_checked - writes the character c to stdout
 * @b: Parametre 1
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
int main(void)
{
_puts(__FILE__);
return 0;
}
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
	_putchar(10);
}
