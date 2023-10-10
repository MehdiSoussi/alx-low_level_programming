#include "main.h"
#include <stdio.h>
/**
 *  * pmehdi - Entry point
 *   *
 *    * Description: [P214T]
 *     *
 *      * Return: Always 0 (Success)
 *       */
int pmehdi(void)
{
	int i = 1;

	for (i = 1 ; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d, ", i);
		}
	}
	return (0);
}
