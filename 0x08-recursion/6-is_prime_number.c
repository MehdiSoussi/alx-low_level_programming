#include "main.h"
/**
 * is_prime_number - entrypoint
 * @n: Parametre 1
 * 
 * Description: [T6]
 *
 * Return: Return value
 */
int is_prime_number(int n)
{
if (n == 1 || n == 0 || n == -1)
{
return (0);
}
else if ( n < 0 )
{
return (0);
}
else
{
return (check_prime(n, 2));
}
}
/**
 * check_prime - entrypoint
 * @x: Parametre 1
 * @a: Parametre 2
 * 
 * Description: [T6]
 *
 * Return: Return value
 */
int check_prime(int x, int a)
{
if (x == a)
{
return (1);
}
else if (x % a == 0)
{
return (0);
}
else
{
return (check_prime(x, a + 1));
}
}