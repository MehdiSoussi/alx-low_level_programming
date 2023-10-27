#include "stdlib.h"
#include "stdio.h"
/**
 * main - entrypoint
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T4]
 *
 * Return: Return value
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (1);
}
