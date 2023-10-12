#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: [T4]
 *
 * Return: Return value
 */
void print_most_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
	(i != 2 && i != 4) ? _putchar(i + 48) : 0;
}
	_putchar(10);
}
