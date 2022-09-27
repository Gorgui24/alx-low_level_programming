#include "main.h"
#include<string.h>
/**
 * print_chessboard - show table
 * @a: pointer parameter
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(a[i][j]);
			_putchar('\n');
		}
	}
}
