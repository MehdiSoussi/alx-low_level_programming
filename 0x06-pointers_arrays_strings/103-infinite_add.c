#include "main.h"
#include <stdio.h>
/**
 *  * infinite_add - entry point
 *   *
 *    * @n1 : Parametre 1
 *    * @ns : Paramtre 2
 *    * @r : Parametre 3
 *    * @size_r: Parametre 4
 *     * Description: [P217T11]
 *      *
 *       * Return: Return value
 **/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum;

	sum = _atoi(n1) + _atoi(n2);
	if (power(10, size_r - 2) / sum == 0)
	{
		return (NULL);
	}
	else
	{
		buffer_number(sum, r);
		return (r);
	}
}
/**
 *  * _atoi - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P217T11]
 *      *
 *       * Return: Return value
 **/
int _atoi(char *s)
{
	char *number_head = s;
	int number = 0;

	while (*number_head != '\0' && ((*number_head >= 48 && *number_head <= 57)))
	{
		number = (number * 10) + (*number_head - 48);
		number_head++;
	}
	return (number);
}
/**
 *  * buffer_number - entrypoint
 *   * @n: Parametre 1
 *    * @r: Parametre 2
 *     *
 *      * Description: [P217T11]
 *       *
 *        * Return: Return value
 **/
void buffer_number(int n, char *r)
{
	int pow_lev = 0;
	int number;
	int i;
	int diminishing = n;

	do {
		diminishing = (diminishing - (diminishing % 10)) / 10;
		pow_lev++;
	} while (diminishing != 0);
	diminishing = n;
	for (i = pow_lev - 1; i >= 0 ; i--)
	{
		number = diminishing / power(10, i);
		diminishing = diminishing - number * power(10, i);
		*r = number + 48;
		r++;
	}
	*r = '\0';
}
/**
 *  * power - entry point
 *   *
 *    * @ten : Parametre 1
 *     * @to_the_power : Parametre 2
 *      * Description: [P217T11]
 *       *
 *        * Return: Return value
 **/
int power(int ten, int to_the_power)
{
	int i;
	int result = ten;

	if (to_the_power == 0)
	{
		return (1);
	}
	for (i = 1; i < to_the_power; i++)
	{
		result = result * 10;
	}
	return (result);
}
