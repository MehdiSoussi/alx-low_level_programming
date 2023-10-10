#include "main.h"
/**
 *  ** print_times_table - Entry point
 *   ** @n : Parametre 1
 *    ** Description: [P214T12]
 *     **
 *      ** Return: Always 0 (Success)
 *       **/
void print_times_table(int n)
{
	int i, j, c0, c1, c2, r = 10, v = 44, w = 32;

	if (!(n > 15 || n < 0))
	{
		for (i = 0 ; i <= n; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				c0 = i * j >= 100 ? i * j / 100 : 0;
				c1 = i * j >= 10 ? (i * j / 10) % 10 : 0;
				c2 = i * j % 10;
				if (j != 0)
				{
					_putchar(w);
					if (i * j < 10)
					{
						triple_print(w, w, c2 + 48);
					}
					if (i * j >= 10 && i * j < 100)
					{
						triple_print(w, c1 + 48, c2 + 48);
					}
					if (i * j >= 100)
					{
						triple_print(c0 + 48, c1 + 48, c2 + 48);
					}
				}
				else
				{
					_putchar(c2 + 48);
				}
				j != n ? _putchar(v) : 0;
			}
			_putchar(r);
		}
	}
}
/**
 *  * triple_print - Entry point
 *   * @a : a descr
 *    * @b : b decrr
 *     * @c : c descr
 *      * Description: helper
 *       *       **/
void triple_print(int a, int b, int c)
{
	_putchar(a);
	_putchar(b);
	_putchar(c);
}
