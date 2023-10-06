#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T10]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int i = 48;
	int v = 44;
	int s = 32;
	int r = 10;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
			{
			if (i > c)
			{
				putchar (c);
				putchar (i);
				putchar (v);
				putchar (s);
			}
			}
	}

	putchar(r);

	return (0);
}

