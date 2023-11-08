#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - writes the character c to stdout
 * @s: Parametre 1
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 6)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (0);
}
