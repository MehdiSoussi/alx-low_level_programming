#include "main.h"
#include "2-strchr.c"
/**
 *  * _strstr - entrypoint
 *   * @haystack: Parametre 1
 *    * @needle: Parametre 2
 *     *
 *      * Description: [T5]
 *       *
 *        * Return: Return value
 **/
char *_strstr(char *haystack, char *needle)
{
	char *found_head = _strchr(haystack, needle[0]);
	char *zero = 0;
	int check = 1;
	int i;

	if (found_head)
	{
		for (i = 0; i < _strlen(needle); i++)
		{
			check = (*(found_head + i) == *(needle + i)) ? check * 1 : check * 0;
		}
	}
	else
	{
		return (zero);
	}
	return ((check == 0) ? zero : found_head);
}
/**
 *  * _strlen - entrypoint
 *   * @s: Parametre 1
 *    *
 *     * Description: [T5]
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
