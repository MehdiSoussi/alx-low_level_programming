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


	do {
		putchar (c);
		c++;
	} while (c <= 122);
	c = "A";
	do {
		putchar (c);
		c++;
	} while (c <= 90);
	putchar(r);

	return (0);
}

