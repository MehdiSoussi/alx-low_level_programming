#include "main.h"

/**
 * set_bit - Entry point
 * @n: Parameter 1
 * @index: Parameter 2
 * Description: desc
 *
 * Return: Always 0 (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (n == 0 || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);

*n |= (1 << index);
return (1);
}
