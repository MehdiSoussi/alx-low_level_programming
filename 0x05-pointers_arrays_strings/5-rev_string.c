#include "main.h"
/**
 * rev_string - entrypoint
 * @s: Parametre 1
 *
 * Description: [T5]
 *
 * Return: Return value
 */
void rev_string(char *s)
{
	int i;
	char *t = s;
	int temp[100];
	int flipped[100];
	int size = 0;

	while (*t != '\0')
	{
		temp[size] = *t;
		size++;
		t++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		flipped[size - i - 1] = temp[i];
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = flipped[i];
	}
}
