#include "main.h"
/**
 *  * _strncat - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 2
 *     * @n: Parametre 3
 *      *
 *       * Description: [P217T2]
 *        *
 *         * Return: Return value
 **/
char *_strncat(char *dest, char *src, int n)
{
	int dest_size = _strlen(dest);
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*(dest + dest_size + i) = *src;
		i++;
		src++;
	}
	return (dest);
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P216T1]
 *      *
 *       * Return: Return value
 **/
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
