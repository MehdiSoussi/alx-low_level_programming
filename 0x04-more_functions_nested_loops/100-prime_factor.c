#include <stdio.h>
#include <math.h>
/**
 ** main - entry point
 **
 ** @n : Paraemtre 1
 ** Description: [T11]
 **
 ** Return: Return value
 **/
int is_prime(float n);
int main(void)
{
	float n = 612852475143.0;

	is_prime(n);
	return (0);
}
/**
 ** is_prime - entry point
 **
 * @n : Parametre 1
 ** Description: [T11]
 **
 ** Return: Return value
 ***/
int is_prime(float n)
{
	float i;
	float max = 0;

	while (fmod(n, 2) == 0)
	{
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (fmod(n, i) == 0)
		{
			i > max ? max = i : 0;
			n = n / i;
		}
	}
	if (n > 2)
	{
		i > max ? max = i : 0;
	}
	printf("%.0f\n", max);
	return (1);
}
