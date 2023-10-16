#include "main.h"
/**
 * puts_half - entrypoint
 * @str:  Parametre 1
 *
 * Description: [T7]
 *
 * Return: Return value
 */
void puts_half(char *str)
{
	int i;
	int size = 0;
	char *t = str;

	while (*t != '\0')
	{
		size++;
		t++;
	}
	if (size % 2 == 0)
	{
		for (i = size / 2 ; i < size; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = ((size - 1) / 2) + 1 ; i < size; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar(10);
}
