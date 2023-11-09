#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - writes the character c to stdout
 * @separator: Parametre 1
 * @n: Parameter 2
 * @...: Parametre 3
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *p;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
p = va_arg(args, char*);
if (p == 0)
printf("(nil)");
else
printf("%s", p);
if (separator != 0 && i != n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
