#include "main.h"
#include <stdio.h>
/**
 ** print_to_98 - Entry point
 **
 ** @n : Parametre 1
 ** Description: [P214T11]
 **
 ** Return: Always 0 (Success)
 **/
void print_to_98(int n)
{
	int i;

	if(n <= 98)
	{
		for(i = n ; i <= 98 ; i++)
		{
			if(i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for(i = n ; i >= 98 ; i--)
		{
			if(i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	printf("\n");
}
