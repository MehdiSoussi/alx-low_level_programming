#include "main.h"
/**
 * _sqrt_recursion - entrypoint
 * @n: Parametre 1
 *
 * Description: [T5]
 *
 * Return: Return value
 */
int _sqrt_recursion(int n)
{
if (n == 0 )
{
return (0);
}
else
{
return ((n > 0) ?  check(n, 1) : -1 * check(-n, 1));
}
}
/**
 * check_recursion - entrypoint
 * @x: Parametre 1
 * @a: Parametre 2
 *
 * Description: [T5]
 *
 * Return: Return value
 */
int check_recursion(int x, int a)
{
if (a * a > x)
{
return (-1);
}
else if (x == a * a)
{
return (a);
}
else
{
return (check(x, a + 1));
}
}
