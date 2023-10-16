#include "main.h"
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
	int sign = positive_negative_none(number_head);
	long number = 0;

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
 *
 * Description: [T10]
 *
 * Return: Return value
 */
int positive_negative_none(char *x)
{
	if (*(x - 1) == 45)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
