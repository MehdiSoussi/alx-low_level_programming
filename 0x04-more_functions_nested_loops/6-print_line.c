#include "main.h"
/**
 * print_line - entry point
 *
 * @n : Parametre 1
 * Description: [T6]
 *
 * Return: Return value
 */
void print_line(int n)
{
int i;
if (n > 0)
{
	for (i = 0 ; i < n ; i++)
	{
		_putchar(95);
	}
}
_putchar(10);
}
