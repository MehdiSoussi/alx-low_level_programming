#include "main.h"
/**
 *  * _strcmp - entrypoint
 *   * @s1: Parametre 1
 *    * @s2: Parametre 2
 *     *
 *      * Description: [P217T3]
 *       *
 *        * Return: Return value
 **/
int _strcmp(char *s1, char *s2)
{
	int size = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		size += (*s1 - *s2);
		if ((*s1 - *s2) != 0)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (size);
}
