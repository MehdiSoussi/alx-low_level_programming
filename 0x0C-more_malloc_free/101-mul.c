#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T0]
 *
 * Return: On success 1.
 */
int main(int argc, char**argv)
{
int n1, n2;

if(argc != 3)
{
_puts("Error");
return (98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
if(n1 == 0 || n2 == 0)
{
_puts("Error");
return (98);
}
print_number(n1 * n2);
return (0);
}
/**
 * _puts - entrypoint
 * @str: Parametre 1
 *
 * Description: [T3]
 *
 * Return: Return value
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar(10);
}
/**
 *  * print_number - entry point
 *   *
 *    * @n : Parametre 1
 *     * Description: [P217T9]
 *      *
 *       * Return: Return value
 **/

void print_number(int n)
{
int pow_lev = 0 * n;
int number;
int i;
int diminishing = n;
int is_negative = 0 * n;

if (n < 0)
{
n = n * -1;
is_negative = 1;
}
do {
diminishing = (diminishing - (diminishing % 10)) / 10;
pow_lev++;
} while (diminishing != 0);
diminishing = n;
if (is_negative)
{
_putchar(45);
}
for (i = pow_lev - 1; i >= 0; i--)
{
number = diminishing / power(10, i);
diminishing = diminishing - number * power(10, i);
_putchar(number + 48);
}
_putchar(10);
}

/**
 *  * power - entry point
 *   *
 *    * @ten : Parametre 1
 *     * @to_the_power : Parametre 2
 *      * Description: [P217T9]
 *       *
 *        * Return: Return value
 **/
int power(int ten, int to_the_power)
{
int i;
int result = ten;

if (to_the_power == 0)
return (1);
for (i = 1 ; i < to_the_power ; i++)
result = result * 10;
return (result);
}
/**
 * _atoi - entrypoint
 * @s: Parametre 1
 *
 * Description: [T10]
 *
 * Return: Return value
 */
int _atoi(char *s)
{
int found = 0;
char *number_head = find_number_head(s, &found);
int sign = positive_negative_none(number_head, s);
int number = 0;

while (*number_head != '\0' && ((*number_head >= 48 && *number_head <= 57)))
{
number = (number * 10) + (*number_head - 48);
number_head++;
}
number *= sign;
return (number);
}
/**
 * find_number_head - entrypoint
 * @x: Parametre 1
 * @found: Parametre 2
 *
 * Description: [T10]
 *
 * Return: Return value
 */
char *find_number_head(char *x, int *found)
{
while (*x != '\0')
{
if (*x >= 48 && *x <= 57)
{
*found = 1;
break;
}
x++;
}
return (x);
}
/**
 * positive_negative_none - entrypoint
 * @x: Parametre 1
 * @start: Parametre 2
 *
 * Description: [T10]
 *
 * Return: Return value
 */
int positive_negative_none(char *x, char *start)
{
int count = 0;

if (x == start)
{
return (1);
}
while (x != start)
{
if (*(x - 1) == 45)
{
count++;
}
x--;
}
return ((count % 2) == 0 ? 1 : -1);
}