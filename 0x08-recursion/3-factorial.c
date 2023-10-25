#include "main.h"
/**
 * factorial - entrypoint
 * @n: Parametre 1
 *
 * Description: [T3]
 *
 * Return: Return value
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n-1));
}
}