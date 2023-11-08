#include <stdlib.h>
#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
int main(int argc, char **argv)
{
int (*p)(int, char**) = &main;
unsigned char *q = (unsigned char *)p;
int i;
int k;

if(argc != 2)
{
printf("Error\n");
return (1);
}
k = atoi(argv[1]);
if(k < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < k; i++)
{
printf("%x ", *(q + i));
}
printf("\n");
return (0);
}
