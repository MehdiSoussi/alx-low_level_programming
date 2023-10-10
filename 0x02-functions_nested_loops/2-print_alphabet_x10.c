#include "main.h"
/**
 ** print_alphabet_x10 - Entry point
 **
 ** Description: [P214T2]
 **
 ** Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
	char c = 97;
	char r = 10;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;										}
		_putchar(r);
		c = 97;
	}
}
