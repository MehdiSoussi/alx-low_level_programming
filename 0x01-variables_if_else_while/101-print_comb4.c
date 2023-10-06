#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T11]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int i = 48;
	int k = 48;
	int v = 44;
	int s = 32;
	int r = 10;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
			{
			for (k = 45; k <= 57; k++)
			{
				if (i > c && k > i)
				{
					putchar (c);
					putchar (i);
					putchar (k);
					if (!(c == 55 && i == 56 && k == 57))
					{
						putchar (v);
						putchar (s);
					}
				}
			}
			}
	}

	putchar(r);

	return (0);
}

