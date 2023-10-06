#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T5]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 48;
	char r = '\n';

	do {
		putchar (c);
		c++;
	} while (c <= 57);
	putchar(r);

	return (0);
}

