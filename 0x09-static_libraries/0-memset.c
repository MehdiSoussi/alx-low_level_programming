#include "main.h"
/**
 *  * _memset - entrypoint
 *   * @s: Parametre 1
 *    * @b: Parametre 2
 *     * @n: Parametre 3
 *      *
 *       * Description: [T0]
 *        *
 *         * Return: Return value
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
