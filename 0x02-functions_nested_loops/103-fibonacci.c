#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Description: [P214T]
 **
 ** Return: Always 0 (Success)
 **/

int main(void)
{
	int n = 0, n1 = 0, n2 = 1;
	int  sum_even = 0;

	while (1 == 1)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (n <= 4000000)
		{
			n % 2 == 0 ? sum_even += n : 0;
		}
		else
		{
			break;
		}
	}
	printf("%d\n", sum_even);
	return (0);
}
