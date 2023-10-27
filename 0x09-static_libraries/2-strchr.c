#include "main.h"
/**
 *  * _strchr - entrypoint
 *   * @s: Parametre 1
 *    * @c: Parametre 2
 *     *
 *      * Description: [T2]
 *       *
 *        * Return: Return value
 **/
char *_strchr(char *s, char c)
{
	int found = 0;
	char *head;
	char *zero = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			found = 1;
			head = s;
			break;
		}
		s++;
	}
	return ((found == 0) ? zero : head);
	/*return ((found == 0) ? zero : head-1); */
}
