#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - writes the character c to stdout
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
int main (int argc, char **argv)
{
int p;

if(argc != 4)
{
printf("Error\n");
return (98);
}
if((strcmp(argv[2], "%") == 0 && strcmp(argv[3], "0") == 0 ) || (strcmp(argv[2], "/") == 0 && strcmp(argv[3], "0") == 0 ))
{
printf("Error\n");
return (100);
}
p = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
if(p == 0)
{
printf("Error\n");
return 99;
}
printf("%d\n", p);
return (0);
}
