#include "main.h"
/**
 *  * cap_string - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P217T7]
 *      *
 *       * Return: Return value
 **/
char *leet(char *s)
{
	char *q = s;

	while (*s != '\0')
	{
		pot_leet(s);
		s++;
	}
	return (q);
}
/**
 *  * pot_leet - entrypoint
 *   * @x: Parametre 1
 *    *
 *     * Description: [P217T7]
 *      *
 *       * Return: Return value
 **/
void pot_leet(char *x)
{
	int i = 0;
	char leet_values[10][2] = {
		{97, 52},
		{65, 52},
		{101, 51},
		{69, 51},
		{111, 48},
		{79, 48},
		{116, 55},
		{84, 55},
		{108, 49},
		{76, 49},
	};

	for (i = 0; i < 10; i++)
	{
		if (*x == leet_values[i][0])
		{
			*x = leet_values[i][1];
			break;
		}
	}
}
