#include "main.h"
/**
 ** jack_bauer - Entry point
 **
 ** Description: [P214T8]
 **
 ** Return: Always 0 (Success)
 **/

void jack_bauer(void)
{
	int c1, c2, c3, c4;
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			c1 =  i >= 10 ? (i / 10) % 10 : 0;
			c2 =  i % 10;
			c3 =  j >= 10 ? (j / 10) % 10 : 0;
			c4 =  j % 10;
			_putchar(c1 + 48);
			_putchar(c2 + 48);
			_putchar(58);
			_putchar(c3 + 48);
			_putchar(c4 + 48);
			_putchar(10);
		}
	}
}
