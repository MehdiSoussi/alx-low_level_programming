#include "main.h"
/**
 *  * _strncpy - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 2
 *     * @n: Parametre 3
 *      *
 *       * Description: [P216T2]
 *        *
 *         * Return: Return value
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int size;

	size = _strlen(src);
	if (n <= size)
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(dest + i) = *(src + i);
		}
		for (i = size; i < n; i++)
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [P216T2]
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
