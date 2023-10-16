#include "main.h"
/**
 * print_rev - entrypoint
 * @s: Parametre 1
 *
 * Description: [T4]
 *
 * Return: Return value
 */
void print_rev(char *s)
{
	char *t = s;
	int i;
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	for (i = size - 1; i >= 0 ; i--)
	{
		_putchar(t[i]);
	}
}
