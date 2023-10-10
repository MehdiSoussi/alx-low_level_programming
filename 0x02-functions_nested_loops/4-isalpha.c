#include "main.h"
/**
 ** _isalpha - Entry point
 **
 ** @c : Parametr 1
 ** Description: [P214T4]
 **
 ** Return: Always 0 (Success)
 **/
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
