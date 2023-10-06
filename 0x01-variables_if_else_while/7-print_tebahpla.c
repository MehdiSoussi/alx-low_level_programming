#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T7]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 57;
	int r = 10;

	do {
		putchar (c);
		c--;
	} while (c <= 48);
	putchar(r);

	return (0);
}

