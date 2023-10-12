#include "main.h"
/**
 * print_square - entry point
 *
 * @size : Parametre 1
 * Description: [T8]
 *
 * Return: Return value
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size; j++)
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
