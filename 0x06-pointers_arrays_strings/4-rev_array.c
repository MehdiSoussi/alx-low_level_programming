#include "main.h"
/**
 *  * reverse_array - entrypoint
 *   * @a: Parametre 1
 *    * @n: Parametre 2
 *     *
 *      * Description: [P217T4]
 *       *
 *        * Return: Return value
 **/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
