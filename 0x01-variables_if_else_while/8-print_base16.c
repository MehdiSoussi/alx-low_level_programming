#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T8]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int d = 97;
	int r = 10;

	do {
		putchar (c);
		c++;
	} while (c <= 57);
	do {
		putchar (d);
		d++;
	} while (d <= 102);
	
	putchar(r);

	return (0);
}

