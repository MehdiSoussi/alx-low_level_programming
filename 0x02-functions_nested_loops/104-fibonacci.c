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
	int i;

	for (i = 0 ; i < 98 ; i++)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		i == 97 ? printf("%d", n) : printf("%d, ", n);
	}
	return (0);
}
