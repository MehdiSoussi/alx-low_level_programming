#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Determine wether a random int is positive, negative or zero"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative", n);

	return (0);
}

