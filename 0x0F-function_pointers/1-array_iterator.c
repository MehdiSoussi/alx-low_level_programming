#include <stdlib.h>
#include "function_pointers.h"
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
void array_iterator(int *array, size_t size, void (*action)(int))
 {
    size_t i = 0;
    for(i=0 ; i<size ; i++)
    {
        action(array[i]);
    }
    
 }