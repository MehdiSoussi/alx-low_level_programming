#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: [P213T4]"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char r = '\n';

	do {
		if ( c != "q" && c != "e")
		{
			putchar (c);
		}
		c++;
	} while (c <= 122);
	putchar(r);

	return (0);
}

