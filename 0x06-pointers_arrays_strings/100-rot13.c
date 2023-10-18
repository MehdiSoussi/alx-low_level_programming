#include "main.h"
/**
 *  * rot13 - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P217T8]
 *      *
 *       * Return: Return value
 **/
char *rot13(char *s)
{
	char *q = s;

	while (*s != '\0')
	{
		pot_rot13(s);
		s++;
	}
	return (q);
}
/**
 *  * pot_rot13 - entrypoint
 *   * @x: Parametre 1
 *    *
 *     * Description: [P217T8]
 *      *
 *       * Return: Return value
 **/
void pot_rot13(char *x)
{
	char input[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	for (i = 0; i < 53; i++)
	{
		if (*x == input[i])
		{
			*x = output[i];
			break;
		}
	}
}
