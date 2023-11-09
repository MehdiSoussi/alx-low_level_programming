#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Description
 * @separator: Parametre 1
 * @n: Parameter 2
 * @...: Parametre 3
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, unsigned int));
if(separator != 0 && i != n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
