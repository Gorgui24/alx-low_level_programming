#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - print array
 * @array: array parameter
 * @size: int parameter
 * @cmp: pointer parameter
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0)
					return (i);
		}
	}
	return (-1);
}
