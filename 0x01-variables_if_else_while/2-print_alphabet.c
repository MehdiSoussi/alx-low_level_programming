#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [213C2A0]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char r = '\n';

	do {
		putchar (c);
		c++;
	} while (c <= 122);
	putchar(r);

	return (0);
}

