#include "main.h"
#include "2-strchr.c"
/**
 *  * _strspn - entrypoint
 *   * @s: Parametre 1
 *    * @accept: Parametre 2
 *     *
 *      * Description: [T3]
 *       *
 *        * Return: Return value
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
		if (_strchr(accept, *s))
			continue;
		else
			break;
	}
	return (i);
}
