#include "main.h"
#include <stdio.h>
/**
 * print_array - entrypoint
 * @a: Parametre 1
 * @n: Paraemtre 2
 * Description: [T8]
 *
 * Return: Return value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		i != n - 1 ? printf("%d, ", *(a + i)) : printf("%d", *(a + i));
	}
		printf("\n");
}
