#include "main.h"
/**
 *  * _strncpy - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 2
 *     * @n: Parametre 3
 *      *
 *       * Description: [T2]
 *        *
 *         * Return: Return value
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + n) = '\0';
	return (dest);
}
