#include "main.h"
/**
 * _pow_recursion - entrypoint
 * @x: Parametre 1
 * @y: Parametre 2
 *
 * Description: [T4]
 *
 * Return: Return value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
}
