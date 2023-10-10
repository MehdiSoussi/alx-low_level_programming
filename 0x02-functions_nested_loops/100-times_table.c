#include "main.h"
/**
 ** print_to_98 - Entry point
 **
 ** @n : Parametre 1
 ** Description: [P214T12]
 **
 ** Return: Always 0 (Success)
 **/
void print_times_table(int n)
{

int i, j;
int c1, c2;
int r = 10;
int v = 44;
int w = 32;

if (!(n > 15 || n < 0))
{
	for (i = 0 ; i <= n; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			c1 =  (i * j) >= 10 ? ((i * j) / 10) % 10 : 0;
			c2 =  (i * j) % 10;
			if (j != 0)
			{
				_putchar(w);
				if ((i * j) < 10)
				{
					_putchar(w);
					_putchar(c2 + 48);
				}
				else
				{
					_putchar(c1 + 48);
					_putchar(c2 + 48);
				}
			}
			else
			{
				_putchar(c2 + 48);
			}
			if (j != n)
			{
				_putchar(v);
			}
		}
		_putchar(r);
	}
}
}
