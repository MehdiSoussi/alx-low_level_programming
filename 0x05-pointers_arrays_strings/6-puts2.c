#include "main.h"
/**
 * puts2 - entrypoint
 * @str:  Parametre 1
 *
 * Description: [T6]
 *
 * Return: Return value
 */
void puts2(char *str)
{
	int i;
	int size = 0;
	char *t = str;

	while (*t != '\0')
	{
		size++;
		t++;
	}
	for (i = 0; i < size; i++)
	{
		i % 2 == 0 ? _putchar(*(str + i)) : 0;
	}
	_putchar(10);
}
