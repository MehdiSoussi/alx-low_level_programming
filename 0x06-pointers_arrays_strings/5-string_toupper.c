#include "main.h"
/**
 *  * string_toupper - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P217T5]
 *      *
 *       * Return: Return value
 **/
char *string_toupper(char *s)
{
	char *save = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s -= 32;
		}
		s++;
	}
	return (save);
}
