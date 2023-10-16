#include "main.h"
/**
 * _strlen - entrypoint
 * @s: Parametre 1
 *
 * Description: [T2]
 *
 * Return: Return value
 */
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
