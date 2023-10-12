#include "main.h"
#include <stdio.h>
/**
 * print_number - entry point
 *
 * @n : Parametre 1
 * Description: [T12]
 *
 * Return: Return value
 */

void print_number(int n)
{
int pow_lev = 0;
int number;
int i;
int diminishing = n;
int is_negative = 0;

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
}

/**
 * power - entry point
 *
 * @ten : Parametre 1
 * @to_the_power : Parametre 2
 * Description: [T12]
 *
 * Return: Return value
 */
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
