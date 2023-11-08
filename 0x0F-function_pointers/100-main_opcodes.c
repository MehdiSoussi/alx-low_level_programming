#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - writes the character c to stdout
 * @array: Parametre 1
 * @size: Parametre 2
 * @action: Parametre 3
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

    for (i = 0; i< k; i++)
    {
        printf("%x ", *(q+i));
    }

    printf("\n");
    return (0);
}