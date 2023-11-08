#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - writes the character c to stdout
* @name: Parametre 1
* @f: Parametre 2
*
* Description: [T0]
*
* Return: On success 1.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
