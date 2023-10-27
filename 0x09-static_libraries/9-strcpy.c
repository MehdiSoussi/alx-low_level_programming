#include "main.h"
/**
 * _strcpy - entrypoint
 * @dest: Parametre 1
 * @src: Paraemtre 2
 * Description: [T9]
 *
 * Return: Return value
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int size = 0;
	char *t = src;

	while (*t != '\0')
	{
		size++;
	t++;
	}
	for (i = 0; i <= size; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
