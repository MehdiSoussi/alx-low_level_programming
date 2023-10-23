#include "main.h"
#include <stdio.h>
/**
 *  * print_diagsums - entrypoint
 *   * @a: Parametre 1
 *    * @size: Parametre 2
 *     *
 *      * Description: [T8]
 *       *
 *        * Return: Return value
 **/
void print_diagsums(int *a, int size)
{
	int sum_left_to_right = 0;
	int sum_right_to_left = 0;
	int i;

	if (size == 1)
	{
		printf("%d, %d\n", a[0], a[0]);
	}
	else if (size == 2)
	{
		printf("%d, %d\n", a[0] + a[3], a[1] + a[2]);
	}
	else
	{
	for (i = 0; i < size * size; i++)
	{
		if ((i % (size + 1)) == 0)
		{
			sum_left_to_right += a[i];
		}
		if ((i % (size - 1)) == 0)
		{
			sum_right_to_left += a[i];
		}
	}
	printf("%d, %d\n", sum_left_to_right,
			sum_right_to_left - a[0] - a[size * size - 1]);
	}
}
