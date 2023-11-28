#include "main.h"
/**
 * main - Entry point
 * @b: Parameter 1
 * Description: desc
 *
 * Return: Always 0 (Success)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int str_len = 0, base = 1;
const char *c = b;

if (c == 0)
return (0);
while (*c)
{
if (*c != '1' && *c != '0')
return (0);
c++;
}
while (b[str_len] != '\0')
str_len++;
while (str_len)
{
decimal += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (decimal);
}
