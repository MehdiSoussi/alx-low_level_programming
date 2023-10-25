#include "main.h"
#include <string.h>
/**
 * is_palindrome - entrypoint
 * @s: Parametre 1
 *
 * Description: [T7]
 *
 * Return: Return value
 */
int is_palindrome(char *s)
{
int size;

size = strlen(s);
if (*s == 0 || size == 1)
{
return (1);
}
if (size % 2 == 0)
{
return (check_palindrome_even(s, 0, size - 1));
}
else
{
return (check_palindrome_odd(s, 0, size - 1));
}
}
/**
 * check_palindrome_even - entrypoint
 * @s: Parametre 1
 * @start: Parametre 2
 * @finish: Parametre 3
 *
 * Description: [T7]
 *
 * Return: Return value
 */
int check_palindrome_even(char *s, int start, int finish)
{
if (s[start] != s[finish])
{
return (0);
}
else if (start > finish)
{
return (1);
}
else
{
return (check_palindrome_even(s, start + 1, finish - 1));
}
}
/**
 * check_palindrome_odd - entrypoint
 * @s: Parametre 1
 * @start: Parametre 2
 * @finish: Parametre 3
 *
 * Description: [T7]
 *
 * Return: Return value
 */
int check_palindrome_odd(char *s, int start, int finish)
{
if (s[start] != s[finish])
{
return (0);
}
else if (start == finish)
{
return (1);
}
else
{
return (check_palindrome_even(s, start + 1, finish - 1));
}
}
