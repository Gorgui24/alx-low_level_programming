#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * alloc_grid - print width and height
 * @width: int parameter
 * @height: int parameter
 * Return: parameter
 */
int **alloc_grid(int width, int height)
{
	int **ch, i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ch = (int **) malloc(height * sizeof(*ch));
	if (!ch)
	{
		free(ch);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ch[i] = (int *) malloc(width * sizeof(int));
		if (!ch[i])
		{
			for (j = 0; j <= i; j++)
				free(ch[i]);
			free(ch);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l <= width; l++)
			ch[k][l] = 0;
	}
	return (ch);
}
