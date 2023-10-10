#include "main.h"
/**
 ** times_table - Entry point
 **
 ** Description: [P214T9]
 **
 ** Return: Always 0 (Success)
 **/

#include <stdio.h>

void times_table(void)
	{
	char construct_line[36];
	int c, c1, c2;
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		construct_line[0] = 48;
		for (j = 1; j < 10; j++)
		{
			c = i * j;
			construct_line[(j - 1) * 4 + 1] = 44;
			c1 = c < 10 ? 32 : (c - (c % 10)) / 10 + 48;
			c2 = c % 10 + 48;
			construct_line[(j - 1) * 4 + 2] = 32;
			construct_line[(j - 1) * 4 + 3] = c1;
			construct_line[(j - 1) * 4 + 4] = c2;
		}
		for (k = 0; k < 37; k++)
		{
			_putchar(construct_line[k]);
		}
		_putchar(10);
	}
}
