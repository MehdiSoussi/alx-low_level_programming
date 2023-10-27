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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
