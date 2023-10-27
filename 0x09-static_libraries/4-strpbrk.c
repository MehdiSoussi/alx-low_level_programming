#include "main.h"
#include "2-strchr.c"
/**
 *  * _strspn - entrypoint
 *   * @s: Parametre 1
 *    * @accept: Parametre 2
 *     *
 *      * Description: [T4]
 *       *
 *        * Return: Return value
 **/
char *_strpbrk(char *s, char *accept)
{
	int found = 0;
	char *zero = 0;

	while (*s != '\0')
	{
		if (_strchr(accept, *s))
		{
			found = 1;
			break;
		}
		s++;
	}
	return (found == 0 ? zero : s);
}
