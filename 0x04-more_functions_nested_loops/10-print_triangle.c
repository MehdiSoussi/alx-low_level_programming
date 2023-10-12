#include "main.h"
/**
 * print_triangle - entry point
 *
 * @size : Parametre 1
 * Description: [T10]
 *
 * Return: Return value
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size - 1 - i ; j++)
		{
			_putchar(32);
		}
		for (j = ((size - 1) - i) ; j < size ; j++)
		{
		_putchar(35);
		}
	_putchar(10);
	}
}
else
{
_putchar(10);
}
}
