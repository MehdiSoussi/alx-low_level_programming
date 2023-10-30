#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  * free_grid - writes the character c to stdout
 *   * @grid: Parametre 1
 *    * @height: Parametre 1
 *     *
 *      * Description: [T4]
 *       *
 *        * Return: On success 1.
 **/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(&grid[i][0]);
}
free(grid);
}
