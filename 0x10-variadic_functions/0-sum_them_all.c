#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Description
 * @n: Parametre 1
 * @...: Parametre 2
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum = 0;

if(n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
{
sum +=  va_arg(args, unsigned int);
}
va_end(args);
return (sum);
}
