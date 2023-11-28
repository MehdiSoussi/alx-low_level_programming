#include "main.h"

/**
 * print_binary - Entry point
 * @n: Parameter 1
 * Description: desc
 *
 * Return: Always 0 (Success)
 */

void print_binary(unsigned long int n)
{
int val;

if (n > 1)
print_binary(n >> 1);
val = n & 1;
_putchar(val + 48);
}
