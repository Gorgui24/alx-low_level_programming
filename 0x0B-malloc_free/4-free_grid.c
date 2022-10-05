#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * free_grid - print height
 * @height: int parameter
 * @grid: pointer parameter
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
