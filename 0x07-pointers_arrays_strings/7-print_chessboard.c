#include "main.h"
/**
 *  * print_chessboard - entrypoint
 *   * @a: Parametre 1
 *     *
 *      * Description: [T7]
 *       *
 *        * Return: Return value
 **/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}