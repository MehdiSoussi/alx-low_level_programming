#include "main.h"
/**
 ** print_alphabet - Entry point
 **
 ** Description: [P214T1]
 **
 ** Return: Always 0 (Success)
 **/
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	 _putchar(10);
}
