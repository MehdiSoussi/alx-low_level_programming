#include "main.h"

/**
 * get_bit - Entry point
 * @n: Parameter 1
 * @index: Parameter 1
 * Description: desc
 *
 * Return: Always 0 (Success)
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}
