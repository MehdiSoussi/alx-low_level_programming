#include "stdlib.h"
#include "stdio.h"
/**
 * main - entrypoint
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T2]
 *
 * Return: Return value
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
