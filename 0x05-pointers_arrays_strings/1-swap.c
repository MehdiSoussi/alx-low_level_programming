#include "main.h"
/**
 * swap_int - entrypoint
 * @a: Parametre 1
 * @b: Parametre 1
 * 
 * Description: [T1]
 *
 * Return: Return value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
