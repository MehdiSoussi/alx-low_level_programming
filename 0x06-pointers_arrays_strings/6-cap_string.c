#include "main.h"
/**
 *  * cap_string - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P217T6]
 *      *
 *       * Return: Return value
 **/
char *cap_string(char *s)
{
	char *save = s;

	while (*s != '\0')
	{
		if (check_car(*s))
		{
			capitalize_next_lowercase(s);
		}
		s++;
	}
	return (save);
}
/**
 *  * check_car - entrypoint
 *   * @c: Parametre 1
 *    *
 *     * Description: [P217T6]
 *      *
 *       * Return: Return value
 **/
int check_car(char c)
{
	char pv[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 9, 11, 32, 10};
	int i;
	int found = 0;

	for (i = 0; i < 14; i++)
	{
		if (c == pv[i])
		{
			found = 1;
			break;
		}
	}
	return (found);
}
/**
 *  * capitalize_next_lowercase - entrypoint
 *   * @x: Parametre 1
 *    *
 *     * Description: [P217T6]
 *      *
 *       * Return: Return value
 **/
void capitalize_next_lowercase(char *x)
{
	do {
		x++;
		if (*x == 32)
		{
			continue;
		}
		else if (*x >= 97 && *x <= 122)
		{
			*x = *x - 32;
			break;
		}
		else
		{
			break;
		}
	} while (*x != '\0');
}
