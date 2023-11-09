#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - writes the character c to stdout
 * @format: Parametre 1
 * @...: Parametre 3
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0, c = 0;
const char *p = format;
char *x;
va_list args;

va_start(args, format);
while (*p != '\0')
{
switch (*p)
{
case 'c':
printf("%c", va_arg(args, int));
c = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
c = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
c = 1;
break;
case 's':
x = va_arg(args, char*);
c = 1;
mehdi(x);
break;
default:
c = 0;
break;
}
p++;
if (*(p) != '\0' && c == 1)
printf(", ");
i++;
c = 0;
}
va_end(args);
printf("\n");
}
/**
 *  * mehdi - writes the character c to stdout
 *   * @x: Parametre 1
 *     *
 *      * Description: [T0]
 *       *
 *        * Return: On success 1.
 **/
void mehdi(int x)
{
if (x == 0)
printf("(nil)");
while (x != 0)
{
printf("%s", x);
break;
}
}
