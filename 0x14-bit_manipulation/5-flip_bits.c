#include "main.h"

/**
 * flip_bits - Entry point
 * @n: Parameter 1
 * @m: Parameter 1
 * Description: desc
 *
 * Return: Always 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
int c = 0;

while (x)
{
if (x & 1)
c++;
x >>= 1;
}
return (c);
}
