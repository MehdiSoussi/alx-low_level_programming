#include "main.h"
/**
 * more_numbers - entry point
 *
 * Description: [T5]
 *
 * Return: Return value
 */
void more_numbers(void)
{
char c[20] = "01234567891011121314";
int i, j;
for (i = 0 ; i < 10 ; i++)
{
	for (j = 0 ; j < 20 ; j++)
	{
		_putchar(c[j]);
	}
	_putchar(10);
}
}
