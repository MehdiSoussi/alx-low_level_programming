#include <stdio.h>
/**
 * main - entry point
 *
 * Description: [T9]
 *
 * Return: Return value
 */
int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
		i != 100 ? printf("Buzz ") : printf("Buzz");
	}
	else
	{
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
