#include "main.h"
/**
 *  * _strcat - entrypoint
 *   * @dest: Parametre 1
 *    * @src: Parametre 1
 *     *
 *      * Description: [P217T0]
 *       *
 *        * Return: Return value
 **/
char *_strcat(char *dest, char *src)
{
	int dest_size = _strlen(dest);
	int i = 0;

	while (*src != '\0')
	{
		*(dest + dest_size + i) = *src;
		i++;
		src++;
	}
	*(dest + dest_size + i) = *src;
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
