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
	int n, rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rest = n % 10;

	if (rest == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (rest >= 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rest);
	if (rest < 6 && rest != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);

	return (0);
}

