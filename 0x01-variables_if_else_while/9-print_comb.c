#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T9]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int v = 44;
	int s = 32;
	int r = 10;

	do {
		putchar (c);
		if (c != 57)
		{
		putchar (v);
		putchar (s);
		}
		c++;
	} while (c <= 57);
	putchar(r);

	return (0);
}

