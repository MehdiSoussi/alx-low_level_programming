#include "main.h"
/**
 *  * _memcpy - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 2
 *     * @n: Parametre 3
 *      *
 *       * Description: [T1]
 *        *
 *         * Return: Return value
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

