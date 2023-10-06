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
	char c = 97;
	char r = '\n';

	do {
		if ( c != 101 && c != 113)
		{
			putchar (c);
		}
		c++;
	} while (c <= 122);
	putchar(r);

	return (0);
}

