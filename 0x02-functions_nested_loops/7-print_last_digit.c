#include "main.h"
/**
 ** print_last_digit - Entry point
 **
 ** @n : Parametr 1
 ** Description: [P214T7]
 **
 ** Return: Always 0 (Success)
 **/
#include "main.h"

int print_last_digit(int n)
{
	int a = ((n % 10) >= 0) ? (n % 10) : (n % 10) * (-1);

	_putchar(a + 48);
	return (a);
}
