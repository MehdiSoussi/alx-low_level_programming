#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - writes the character c to stdout
 * @array: Parametre 1
 * @size: Parametre 2
 * @cmp: Parametre 3
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
int int_index(int *array, int size, int (*cmp)(int))
 {

    int i;

    if(size <= 0)
        return -1;

    for (i=0 ; i<size ; i++)
    {
        if(cmp(array[i]) != 0)
            return i;
    }

    return -1;

    
 }