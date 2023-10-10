#include "main.h"
/**
 ** print_sign - Entry point
 **
 ** @n : Parametr 1
 ** Description: [P214T4]
 **
 ** Return: Always 0 (Success)
 **/
#include "main.h"

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar(43);
		r = 1;
	}
	if (n == 0)
	{
		_putchar(48);
		r = 0;
	}
	if (n < 0)
	{
		_putchar(45);
		r = -1;
	}
	return (r);
}
