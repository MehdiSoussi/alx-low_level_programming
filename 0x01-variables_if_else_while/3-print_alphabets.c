#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [213T3]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char r = '\n';
	char d = 'A';

	do {
		putchar (c);
		c++;
	} while (c <= 122);

	do {
		putchar (d);
		d++;
	} while (d <= 90);
	putchar(r);

	return (0);
}

