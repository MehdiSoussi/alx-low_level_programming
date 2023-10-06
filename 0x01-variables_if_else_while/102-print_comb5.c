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
	int l = 48;
	int v = 44;
	int s = 32;
	int r = 10;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
			{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (k > c || (k == c && l > i))
					{
						putchar (c);
						putchar (i);
						putchar (s);
						putchar (k);
						putchar (l);
						if (!(c == 57 && i == 56 && k == 57 && l ==57))
						{
						putchar (v);
						putchar (s);
						}
					}
				}
			}
			}
	}

	putchar(r);

	return (0);
}

